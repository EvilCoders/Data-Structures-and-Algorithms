# DATA STRUCTURES IN C  

## Array
Array is a primitive data structure that stores a collection of similar kind(type) of data in an order(index).  

```int arr[5] = {1,23,54,64,45};```  

This is an array with space for 5 elements and it can only store data of integer type.  

## Stack  
Stack is an abstract data type based on First In Last Out i.e. the first element to be pushed to the stack will be the last to be popped. Like in a book stack, in order to get to the book at the bottom, you have to remove the books at the top.

A stack has a **top** and **last**. 

### Insertion into Stack
At the beginning the top and last are -1 (not 0 because if last is 0 then there must be an element at 0th index). As soon as first element is inserted into stack the top and last shifts from -1 to 0, as second element is inserted the top shifts to 1, then at next push top shifts to 2 and so on.  

### Algorithm for Pushing to Stack
```
if sizeofstack - 1 = top   
    Stack Overflow      
endif 

top = top + 1            
stack[top] = item        
Element pushed           
```      

### Deletion from Stack  
Assuming we have a stack with 5 elements(last=0 and top=4). If we remove an element, the first element from top will be popped and top will be shifted to 3, and at next deletion top will be shifted to 2. When there are no more elements to pop, top and last are resetted to -1.  

### Algorithm for Popping from Stack  
```
if top = -1 
    Stack Underflow      
endif 

item = stack[top]
top = top - 1                    
```      

**USES**: In Recursive functions  

## Queue  
Queue is also an abstract data type based on First In First Out i.e. the first element to be pushed to the queue will be the first one to be pulled out. Like in queue, the first person to get  in line will be first to go out.  

A queue has **front** and **rear**.

### Insertion into Queue  
Front and rear -1 while queue is empty. As the first element is inserted into the queue the the front and rear are incremented to 0, as second element is pushed the rear is shifted to 1 and at next push rear is incremented to 2 and so on.

### Algorithm for Pushing in Queue
```
if rear = sizeofqueue - 1
    Queue Full
end if

if front = -1
    front = 0 
endif

rear = rear + 1
queue[rear] = item
```  

### Deletion from Queue  
In queue, the deletion stats from front, assuming we have a queue with 5 elements(front=0 and rear=4). At first pop the element at front is removed and front is moved to 1 and at next pop front is moved to 2 and so on. If queue reaches at front=4 and rear=4 then front and rear are resetted to -1.

### Algorithm for Popping from Queue
```
if front = -1
    Queue Full
end if

if front = rear
    front = rear = -1
endif

else
    item = queue[front]
    front = front + 1
```  

**USES**: In I/O buffer

## List  
List is a similar data type to Array but it can store different kinds(types) of data rather than storing single kind of data. A list can have string, char, int and float in it at the same time.  

## Linked List  
Linked List stores data in the form of nodes. A node has data and pointer to next node. It can be useful in situations where we have to dynamically allocate storage to data (allocate only when we get data). A linked list can store only one kind of data (not like list).

### Implementation of Linked List using Structures
```
struct node {
    int value;
    struct *node next;
    }
```  

### Inserting into Linked List
### Algorithm for inserting into Linked List
### Deleting from Linked List
### Algorithm for deleting from Linked List
