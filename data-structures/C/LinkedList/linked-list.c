#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void main() {
    struct node *head=NULL, *tail=NULL;
    int opt,opt2,value;
    //clrscr();

    printf("\nPROGRAM FOR LINKED LIST\n");
    printf("1.Show linked list\n");
    printf("2.Insert new node\n");
    printf("3.Delete last node\n");
    printf("ENTER YOUR OPTION:");
    scanf("%d",&opt);
    
    switch(opt){
        case(1):
            break;
        
        case(2):

            printf("\nInsert At:");
            printf("\n1.Beginning");
            printf("\n2.End");
            printf("\n3.Specific Location");
            printf("\nEnter YOUR OPTION:");
            scanf("%d",&opt2);

            switch(opt2) {
                case(1):
                    struct node* new_node = (struct node*)malloc(sizeof(struct node));
                    printf("\nENTER VALUE:");
                    scanf("%d",&value);
                    new_node->data = value;
                    new_node->next = (*head);
                    (*head) = new_node;
                    break;
                
                case(2):
                    struct node* new_node = (struct node*)malloc(sizeof(struct node));
                    struct node* last = *head;
                    printf("\nENTER VALUE:");
                    scanf("%d",&value);
                    new_node->data = value;
                    new_node->next = NULL;
                    tail->next = new_node;
                    break;
            }
               
    }
    //getch();
}