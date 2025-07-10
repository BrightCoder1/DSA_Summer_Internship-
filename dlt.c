// #include <STDIO.H>
// int main()
// {
//     int arr[] = {-3, 0, 2, -1, 5, 0, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int pos = 0;
//     int neg = 0;
//     int zero = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < 0)
//         {
//             neg++;
//         }
//         else if (arr[i] > 0)
//         {
//             pos++;
//         }
//         else
//         {
//             zero++;
//         }
//     }

//     printf("Pos: %d\nNeg: %d\nZero: %d",pos, neg, zero);
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     int arr[] = {1, 2, 4, 5};
//     int elm = 3;
//     int index;

//     for (int i = 0; i < 4; i++)
//     {
//         int gap = arr[i - 1] - arr[i];
//         if (gap != 1)
//         {
//             elm = arr[i] + 1;
//             index = i + 1;
//             break;
//         }
//     }
//     printf("%d\n", elm);
//     printf("%d", index);
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     int arr[5] = {10, 20, 15, 8, 3};
//     int match = 35;
//     int sum = 0;
//     int found = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             sum = arr[i] + arr[j];
//             if (sum == match && i != j)
//             {
//                 printf("Sum is found: %d + %d = %d", arr[i], arr[j], match);
//                 found = 1;
//                 break;
//             }
//         }
//         if (found)
//         {
//             break;
//         }
//     }
//     if (!found)
//     {
//         printf("No such pair found.\n");
//     }
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};

//     for (int i = 0; i < 6; i++)
//     {
//         if (i + 1 == 3)
//         {
//             continue;
//         }
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     int arr[10] = {1, 4, 2, 6, 16};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int pos = 2;
//     int elm = 3;

//     for (int i = size - 1; i >= pos; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     arr[pos] = elm;

//     for (int j = 0; j < size; j++)
//     {
//         printf("%d \n", arr[j]);
//     }
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     int a[] = {2, 4, 6};
//     int b[] = {5, 4, 1};

//     int c[6];

//     for (int i = 0; i < 6; i++)
//     {
//         if (i < 3)
//         {
//             c[i] = a[i];
//         }
//         else
//         {
//             c[i] = b[i - 3];
//         }
//     }

//     for (int k = 0; k < 6; k++)
//     {
//         printf("%d \t", c[k]);
//     }

//     // sort the array:
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             if (c[j] > c[j + 1])
//             {
//                 int temp = c[j];
//                 c[j] = c[j + 1];
//                 c[j + 1] = temp;
//             }
//         }
//     }
//     printf("After sort:\n");
//     for (int k = 0; k < 6; k++)
//     {
//         printf("%d \t", c[k]);
//     }
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     int arr[] = {2, 3, 5, 7, 13};
//     int prime = 0;
//     int isAllPrime = 1;
//     for (int i = 0; i < 5; i++)
//     {33
//         if (arr[i] <= 1)
//         {
//             prime = 1;
//         }
//         else
//         {
//             for (int j = 2; j < arr[i] / 2; j++)
//             {
//                 if (arr[i] % j == 0)
//                 {
//                     prime = 1;
//                 }
//             }
//         }

//         if (prime == 1)
//         {
//             isAllPrime = 0;
//             break;
//         }
//     }

//     if (isAllPrime == 1)
//     {
//         printf("All prime number: ");
//     }
//     else
//     {
//         printf("Not all prime number.");
//     }

//     return 0;
// }

// #include <STDIO.H>

// int main()
// {
//     // sort positive element in array
//     int arr[] = {3, -2, 5, -1, 4};

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < 0)
//         {
//             continue;
//         }
//         else
//         {
//             for (int j = i; j < 5; j++)
//             {
//                 if (arr[j] < 0 && arr[j] > arr[j + 1])
//                 {
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp;
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     // sum of even number and odd number
//     int arr[] = {1, 2, 3, 4, 5, 6};

//     int evSum = 0;
//     int oddSum = 0;

//     for (int i = 0; i < 6; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             evSum = evSum + arr[i];
//         }
//         else
//         {
//             oddSum = oddSum + arr[i];
//         }
//     }

//     printf("even Sum: %d\n", evSum);
//     printf("oddSum: %d", oddSum);
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     // sum of 2 array element and store in other array....
//     int arr[] = {1, 2, 3, 4, 5};
//     int arr2[] = {5, 4, 3, 2, 1};
//     int sumArr[5];

//     for (int i = 0; i < 5; i++)
//     {
//         int sum = arr[i] + arr2[i];
//         sumArr[i] = sum;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\t", sumArr[i]);
//     }
//     return 0;
// }

// #include <STDIO.H>
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int st = 0;
//     int end = size - 1;
//     int num = 30;
//     int show = 0;

//     while (st <= end)
//     {
//         int mid = (st + end) / 2;

//         if (arr[mid] == num)
//         {
//             show = 1;
//             break;
//         }
//         else if (arr[mid] < num)
//         {
//             st = mid + 1;
//         }
//         else if (arr[mid] > num)
//         {
//             end = mid - 1;
//         }
//     }

//     if (show == 1)
//     {
//         printf("Element is found.");
//     }
//     else
//     {
//         printf("Element is not found.");
//     }
//     return 0;
// }

// Bubble Sort in c
// #include <STDIO.H>
// int main()
// {
//     int arr[] = {5, 2, 6, 3, 7, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// ***************************************************************
// function start form here

// #include <STDIO.H>

// void sum(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = arr[i] + sum;
//     }

//     printf("Sum: %d", sum);
// }

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     sum(arr, 5);
//     return 0;
// }

// check array is sorted or not

// #include <STDIO.H>
// void CheckSort(int arr[], int n)
// {
//     int sort = 1;
//     for (int i = 0; i < n - 1; i++)
//     {

//         if (arr[i] > arr[i + 1])
//         {
//             sort = 0;
//             break;
//         }
//     }

//     if (sort)
//     {
//         printf("Array is sorted.");
//     }
//     else
//     {
//         printf("Array is not sorted.");
//     }
// }
// int main()
// {
//     int arr[] = {1, 5, 2, 3, 6};
//     CheckSort(arr, 5);

//     return 0;
// }

// Prime number

// #include <STDIO.H>
// void primeNumber(int n)
// {
//     int isPrime = 1;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = 0;
//             break;
//         }
//     }

//     if (isPrime == 1)
//     {
//         printf("Prime num");
//     }
//     else
//     {
//         printf("Not Prime num");
//     }
// }
// int main()
// {
//     primeNumber(10);
//     return 0;
// }