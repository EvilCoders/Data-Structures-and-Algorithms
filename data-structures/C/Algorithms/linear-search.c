#include <stdio.h>
//#include <conio.h>

void main() {
    int query,i,finalIndex,found=0;
    int arr[5] = {11,66,44,22,55};
    //clrscr();

    printf("Program for linear search\n");
    printf("Enter element to search:");
    scanf("%d",&query);

    finalIndex = sizeof(arr) - 1;

    for (i=0;i<=finalIndex;i++){ //checks for query at every iteration
        if (arr[i]==query){
            printf("Element at %d index\n",i);
            found = 1;
            break;
        }
    }

    if (found == 0){
        printf("Element not in list\n");
    }
    //getch();
}