#include<stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);


    int max = a[0], second_max = -1;

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            second_max = max;
            max = a[i];
        } else if (a[i] > second_max && a[i] != max) {
            second_max = a[i];
        }
    }

    if (second_max == -1) {
        printf("No second largest element found.\n");
    } else {
        printf("The second largest value is %d\n", second_max);
    }

    return 0;
}

