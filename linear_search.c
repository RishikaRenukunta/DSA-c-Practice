#include <stdio.h>

int main() {
    int a[100], n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("Not Found");
    return 0;
}