#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

void main() {
    
    int opt,i,item,front=0,rear=5;
    int cirQueue[8] = {1,2,9,4,6,8};
    int size = 8;

    //clrscr();
    while(1) {
        printf("\nPROGRAM FOR CIRCULAR QUEUE IMPLEMENTATION\n");
        printf("1. Show queue\n");
        printf("2. Push to queue\n");
        printf("3. Pop from queue\n");
        printf("4. Exit\n");
        printf("Enter your option:");
        scanf("%d",&opt);

        switch(opt){
            case(1):

                for(i=front;i<=rear;i++){
                    printf("%d,",cirQueue[i]);
                }
                break;

            case (2):

                if(front == (rear+1)%size ) {
                    printf("Queue Full\n");
                    break;
                }
                else if (front == -1){
                    front = 0;
                }
                printf("Insert item:");
                scanf("%d",&item);
                rear = (rear+1)%size;
                cirQueue[rear] = item;
                break;

            case (3):

                if(front==-1){
                    printf("Queue Empty\n");
                }
                else if(front==rear){
                    front = rear = -1;
                }
                else {
                    item = cirQueue[front];
                    front = (front+1)%size;
                    printf("\nElement %d popped out of queue",item);
                }
                break;

            case (4):
                exit(0);          
        }   
    }
    //getch();
}