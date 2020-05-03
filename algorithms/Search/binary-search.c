#include <stdio.h>
//#include <conio.h>

void main() {
    int query,i,halfIndex,fullIndex;
    int arr[6] = {11,23,35,56,67,78};

    //clrscr();
    printf("\n Enter element to search:");
    scanf("%d",&query);

    halfIndex = sizeof(arr)/2;
    fullIndex = sizeof(arr)-1;

    if (query == arr[halfIndex]){
        printf("\n Element at %d \n",halfIndex);
    }
    else if (query < arr[halfIndex]){
        for (i=0;i<arr[halfIndex];i++){
            if (query == arr[i]){
                printf("\n Element at %d \n",i);
            }
        }
    }
    else if (query > arr[halfIndex]){
        for (i=arr[halfIndex];i< fullIndex;i++){
            if (query == arr[i]){
                printf("\n Element at %d \n",i);
            }
        }
    }
    else {
        printf("Element not in array");
    }
    //getch();
}