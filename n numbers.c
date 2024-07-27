#include <stdio.h>

int main() {
    int n = 5;
    int numbers[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("Entered numbers are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]); 
    }

    return 0;
}
