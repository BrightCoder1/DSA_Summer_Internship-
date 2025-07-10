#include<stdio.h>

int main(){
    //Increment a large integer by 1
    int arr[] = {1, 2, 3};
    int max = arr[0];

    for(int i = 0; i < 3; i++){
        if(arr[i] > max){
            max = arr[i];
            max +=1;
        }
    }

    for(int i = 0; i < 3; i++){
        printf("%d \t", arr[i]);
    }
}
