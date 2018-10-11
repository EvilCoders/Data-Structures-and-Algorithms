#include <stdio.h>
#include <stdlib.h>

struct dllist
{
	int info;
	struct dllist *prev;
	struct dllist *next;

};

struct dllist *head = NULL;

int isempty()
{
	if (head == NULL)
		return 1;
	else
		return 0;
}

void insertatbeg(int data)
{
	struct dllist *temp, *temp2;
	temp = (struct dllist*)malloc(sizeof(struct dllist*)); // create the memory block for creating linked list.
	temp->info = data;
	temp->prev = NULL;
	temp->next = NULL;

	if (head == NULL)
		head = temp;
	else
	{
		head->prev = temp;
		temp->next = head;
		head = temp;
	}	
}

void insertatlast(int data)
{
	struct dllist *temp, *temp2, *track;
	temp = (struct dllist*)malloc(sizeof(struct dllist*)); // create the variable for insertion.
	temp->info = data;
	temp->prev = NULL;
	temp->next = NULL;

	if (head == NULL)
		head = temp;
	else
	{
		temp2 = head; // loc of next node
		while(temp2->next != NULL)
		{	

			track = temp2->next; // track of prev node
			temp2 = temp2->next; // traversing till last node.
		}
		temp2->next = temp; // memory allocation at next node
		temp2->prev = track; // loc of prev node
	}
}


void deletefirstnode()
{

}

void display()
{
	struct dllist *display;
	if (isempty())
		printf("\nLinked List is Empty :/ \n");
	else
	{
		display = head;
		printf("\n");
		while(display != NULL)
		{
			printf("%d\n", display->info);
			display=display->next;
		}
	}
}

int main(int argc, char const *argv[])
{
	while(1)		// Iterate the infinite loop so that operation is not suspended
	{
		printf("\n\n-----------------------------------\n");
		printf("Enter the Following Options to perform Following Operations:\n");
		printf("\n---->> 1 ---->>>> Insertion at First <<<<----\n");
		printf("\n---->> 21 ---->>>> Insertion at Last <<<<----\n");
		printf("\n---->> 22 ---->>>> Deletion of First Node <<<<----\n");
		printf("\n---->> 3 ---->>>> Display <<<<----\n");
		printf("\n---->> 4 ---->>>> Destroy the List Completely. <<<<----\n");
		printf("\n---->> 5 ---->>>> Exit <<<<----\n");
		printf("-----------------------------------\n");
		
		int data;
		unsigned choice;
		scanf("%u", &choice);
		switch(choice)
		{
			case 1:
				scanf("%d", &data);
				insertatbeg(data);
				break;
			case 21:
				scanf("%d", &data);
				insertatlast(data);
				break;
			case 22:
				deletefirstnode();
				break;
			case 3:
				display();
				break;
			case 4:

			case 5:
				exit(0);
			case 6:
				break;
			default:
				printf("\nInvalid Entry :/\n");
				break;
		}
	}
	return 0;
}