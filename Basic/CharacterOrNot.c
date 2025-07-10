#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check for vowel (both uppercase and lowercase)
    if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ||
        (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
    {
        printf("%c is a vowel.\n", ch);
    }
    // Check for consonant (A-Z or a-z but not a vowel)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("%c is a consonant.\n", ch);
    }
    // Check for digit
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a number.\n", ch);
    }
    // If not alphabet or digit, then it's a special character
    else
    {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
