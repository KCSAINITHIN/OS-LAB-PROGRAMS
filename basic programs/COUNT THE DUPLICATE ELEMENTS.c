#include<stdio.h>

int main() {
    int n;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int duplicate_count = 0;


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                duplicate_count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", duplicate_count);

    return 0;
}
