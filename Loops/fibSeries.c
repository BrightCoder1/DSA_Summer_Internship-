#include <stdio.h>

// int main()
// {
//     int a = 0;
//     int b = 1;
//     int c = 0;
//     for (int i = 0; i <= 5; i++)
//     {
//         c = a + b;
//         printf("%d", a);
//     }
// }

int main() {
    int n, a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
