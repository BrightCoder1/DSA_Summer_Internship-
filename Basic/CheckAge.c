#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12)
    {
        printf("Age %d: KID\n", age);
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Age %d: TEENAGER\n", age);
    }
    else if (age >= 20 && age <= 60)
    {
        printf("Age %d: ADULT\n", age);
    }
    else if (age >= 61 && age <= 100)
    {
        printf("Age %d: OLD\n", age);
    }
    else
    {
        printf("Age %d: Not Defined\n", age);
    }

    return 0;
}
