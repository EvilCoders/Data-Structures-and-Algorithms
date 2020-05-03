#include <stdio.h>
//#include <conio.h>

void main() {
    int m,n,i,j,index=0;

    struct nonzero {
        int row;
        int column;
        int element;
    } nonzero[100]; //list of nonzero element as structure

    printf("\nPROGRAM FOR SPARSE MATRIX AND RETURING NON ZERO ELEMENTS WITH POSITIONS\n");
    printf("Enter number of row in matrix:");
    scanf("%d",&m);
    printf("\nEnter number of columns in matrix:");
    scanf("%d",&n);

    int sparse[m][n]; //sparse matrix

    //clrscr();
    // pushing elements
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter element at [%d][%d]:",i,j);
            scanf("%d",&sparse[i][j]);
        }
    }

    //displaying matrix
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",sparse[i][j]);
        }
        printf("\n");
    }

    //finding non zero elements
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if (sparse[i][j] != 0){
                nonzero[index].row = i;
                nonzero[index].column = j;
                nonzero[index].element = sparse[i][j];
                index++;
            }   
        }
    }

    // displaying non zero elements alongwith their location
    for (i=0;i<index;i++){
        printf("Element %d at [%d][%d]\n",nonzero[i].element,
                nonzero[i].row,nonzero[i].column);
    } 
    //getch();

}