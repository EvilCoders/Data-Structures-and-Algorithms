#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

void main() {

    int i, front=0, rear=5, opt,item;
    int queue[10] = {1,2,3,4,5,6};
    //clrscr():

    while(1) {
        printf("\nPROGRAM FOR QUEUE IMPLEMENTATION\n");
        printf("1. Show Queue\n");
        printf("2. Push to Queue\n");
        printf("3. Pop from Queue\n");
        printf("4. Exit\n");
        printf("Enter your option:");
        scanf("%d",&opt);

        switch(opt){
            case (1):
                
                for(i=front;i<=rear;i++){
                    printf("%d,",queue[i]);
                }
                break;
            
            case (2):
            
                if(rear == sizeof(queue) - 1){
                    printf("Queue Full");
                } 
                else if (front == -1 ){
                    front =0;
                }
                printf("\nEnter element to insert:");
                scanf("%d",&item);   
                rear += 1;
                queue[rear] = item;
                break;
            
            case (3):
                if (front == -1){
                    printf("Queue Empty");
                }
                else if(front==rear){
                    front=rear=-1; //reinitialization if queue ended somewhere in middle
                }
                else{
                    item = queue[front]; 
                    front++;
                    printf("Element %d popped from queue",item);
                }
                break;

            case (4):
                exit(0);    
    }
    }
    //getch();
}