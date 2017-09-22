#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand( time(NULL) );
    srand(1000000);

    int nums1[10];
    int i;
    for (i = 0; i < 9; i++) {
        nums1[i] = rand();
    }
    nums1[9] = 0;
    printf("The original array:\n");
    for (i = 0; i < 10; i++) {
        printf("nums1[%d]: %d\n", i, nums1[i]);
    }

    int nums2[10];
    int *p1 = &nums1[9];
    int *p2 = &nums2[0];
    for (i = 0; i < 10; i++) {
        *p2 = *p1;
        p1--;
        p2++;
    }
    printf("The second array:\n");
    for (i = 0; i < 10; i++) {
        printf("nums2[%d]: %d\n", i, nums2[i]);
    }
    
    return 0;
}
