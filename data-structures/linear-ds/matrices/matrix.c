#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

void main() {
    int row, column;
    int opt, element;
    int i=0, j=0;
    printf("\n PROGRAM FOR MATRIX");

    printf("\n Enter size of the matrix:");
    printf("\n Rows:");
    scanf("%d",&row);
    printf("\n Columns:");
    scanf("%d",&column);

    int matrix[row][column];

    printf("\n MATRIX OF SIZE %d X %d CREATED \n", row, column);

    while(1) {
        printf("\n MENU");
        printf("\n 1. Add elements to matrix");
        printf("\n 2. Show matrix");
        printf("\n 3. Exit");
        printf("\n Enter your choice:");
        scanf("%d",&opt);

        switch(opt){
            case(1):
                for (i=0; i<row; i++){
                    for (j=0;j<column; j++){
                            printf("\n Enter element to be inserted at [%d][%d]:", i, j);
                            scanf("%d",&element);
                            matrix[i][j] = element;
                    }
                }
                break;
            
            case(2):
                for (i=0; i<row; i++){
                    for (j=0;j<column; j++){
                            printf("\t %d \t",matrix[i][j]);
                    }
                    printf("\n");
                }
                break;
            
            case(3):
                exit(0);

        }
    }
    // getch();
}