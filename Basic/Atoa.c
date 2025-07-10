#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c to ignore previous newline

    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase to Uppercase: %c\n", ch - 32);
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase to Lowercase: %c\n", ch + 32);
    } else {
        printf("Not an alphabet character.\n");
    }

    return 0;
}
