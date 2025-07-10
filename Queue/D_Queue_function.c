#include <STDIO.H>
int main()
{
    int max = 5;
    int dq[max];
    int f = -1, r = -1, ch = 0, x = 1;

    while (x == 1)
    {
        printf("Press 1: Insertion from front\n2:Insertion from Rear\n3:Deletetion from front\n4:Deletion from rear\n5:Dispplay");
        scanf("%d", &ch);

        if (ch == 1)
        {
            printf("\n----Insertion from front----");
            if ((f == 0 && r == max - 1) || (r + 1 == f))
            {
                printf("\nQueue is full.");
            }
            else if (f == -1 && r == -1)
            {
                f = r = 0;
                printf("\nEnter the value:");
                scanf("%d", &dq[f]);
            }
            else if (f == 0)
            {
                f = max - 1;
                printf("\nEnter a value: ");
                scanf("%d", &dq[f]);
            }
            else
            {
                f--;
                printf("\nEnter a value: ");
                scanf("%d", &dq[f]);
            }
        }

        if(ch == 2){
            
        }
    }
    return 0;
}