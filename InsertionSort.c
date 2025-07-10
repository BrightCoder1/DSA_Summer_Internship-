// #include <STDIO.H>
// int main()
// {
//     int arr[] = {5, 4, 1, 3, 2};
//     int k = 0;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 1; i <= 4; i++)
//     {
//         int j = i - 1;
//         while (j >= 0 && arr[j] > k)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = k;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }