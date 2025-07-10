#include <STDIO.H>
#include <WINDOWS.H>

int main()
{
    int n = 4;
    int pass[] = {2, 3, 6, 1};
    int arr[n];
    int c = 0;
    while (c < 5)
    {
        if (c == 3)
        {
            printf("\n Please wait for 10 second because you enter wrong password again & again!!!\n");
            Sleep(10000);
        }
        ++c;
        int match = 0;

        printf("\n***********Enter the Password*********** \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != pass[i])
            {
                match = 1;
                break;
            }
        }
        if (match == 1)
        {
            printf("\nYou enter wrong! password");
            printf("\nPlease Try again.");
        }
        else
        {
            printf("User Login Successfully! (password Matched)");
            break;
        }
    }
    return 0;
}