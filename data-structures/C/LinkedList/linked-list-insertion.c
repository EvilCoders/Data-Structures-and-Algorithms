#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

struct node {
    int data;
    struct node *next;
};

void main(){
    int opt,value;
    struct node *head = NULL, *last = NULL;
    //clrscr();

    printf("PROGRAM FOR LINKED LIST ELEMENT INSERTION\n");
    printf("1.Add to front\n");
    printf("2.Add to rear\n");
    printf("3.Add to a specific location\n");
    printf("Enter your option");
    scanf("%d",&opt);

    switch(opt){
        case(1):
            if (*head == NULL){
                
            }
            printf("\nEnter Value:");
            scanf("%d",&value);
    }
}