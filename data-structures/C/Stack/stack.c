#include <stdio.h>
//#include <conio.h>
#include <stdlib.h> //for importing exit();

void main() {
    int opt,i,top=5,last=0,size,item;
    int stack[10] = {1,2,3,4,6,5};
    size = sizeof(stack);
    //clrscr();

    while(1){
    printf("\nPROGRAM FOR STACK IMPLEMENTATION\n");
    printf("1. Show Stack\n");
    printf("2. Push on Stack\n");
    printf("3. Pop from Stack\n");
    printf("4. Exit\n");
    printf("Enter your option:");
    scanf("%d",&opt);

    switch(opt){
        case(1):
        for (i=last;i<=top;i++){
             printf("%d,",stack[i]);
         }
        break;

        case(2):
        if (size-1==top){
             printf("Stack Overflow");
         }
        top += 1;
        printf("\n Enter element to push:");
        scanf("%d",&item);
        stack[top] = item;
        break;

        case(3):
         if (top == -1){
             printf("\n Stack Underflow \n");
         }
         item = stack[top];
         top -= 1;
         printf("\n %d removed from stack \n",item);
         break;

         case(4):
         exit(0);
    }
    }
    //getch();
}