#include <STDIO.H>
int main()
{
    int arr[5] = {12, 35, 10, 34, 6};
    int max = arr[1];
    int smax = arr[0];
    int temp;

    for (int i = 2; i < 5; i++)
    {
        if(smax < max){
            if(arr[i] > max){
                
            }
        }
    }

    printf("Second Max %d", smax);
    return 0;
}