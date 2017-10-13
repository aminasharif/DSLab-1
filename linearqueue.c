/*Description: Array implementation of Queue
 * Learner: ILAF KALADIYA
 * created on: 10th AUGUST 2017
 */



#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10



int queue[MAXSIZE], front=-1, rear=-1;
int isFull(){
	//return 1 if stack is full else returns -1	
	if(rear==MAXSIZE-1)
	return 1;
	else 
	return 0;

}

int isEmpty(){
	//return 1 if stack is empty else returns-1
	if(rear==-1&&rear==-1)
	return 1;
	else
	return 0;

}

int peek(){
	//return elements at the top of stack
	return queue[front];
}

void insertQueue(int e)
{ 					//to insert an element in a Queue
	if(!isFull())
	{
		if(isEmpty())
		{
			front++;
		}
		queue[++rear]=e;
		printf("Your element is successfully inserted\n");
	}
	else
	{
		printf("Queue is full \n Element cannot be inserted\n");
	}
	
	
	}
void deleteQueue()
{					//to delete an element from a Queue
	if(!isEmpty())
	{
		int d=queue[front];
		if(front==rear)
		{
			front=rear=-1;
        }
		else
		{
			front++;
		}
		printf("Element deleted is %d\n",d);
	}
	}



int main(){
	int choice,e;
	do 
	{
		printf("\nDisplay Menu\n1.Peek\n2.Insert\n3.Delete\n4.Exit\n");
		printf("Enter choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			
			printf("Element at frontof queue : %d",peek());
			
				break;
			case 2:
			printf("Enter element to be inserted ");
			scanf("%d",&e);
			insertQueue(e);
				break;
			case 3:deleteQueue();
			break;
			case 4: 
			exit(0);
			break;
			default :
			printf("Invalid choice\n");
		} 
		
	} while(1);
	return 0;
}
		


/*
Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
2
Enter element to be inserted 10
Your element is successfully inserted

Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
2
Enter element to be inserted 20
Your element is successfully inserted

Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
2
Enter element to be inserted 30
Your element is successfully inserted

Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
2
Enter element to be inserted 40
Your element is successfully inserted

Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
1
Element at frontof queue : 10
Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
3
Element deleted is 10

Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
1
Element at frontof queue : 20
Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
5
Invalid choice

Display Menu
1.Peek
2.Insert
3.Delete
4.Exit
Enter choice
4


------------------
(program exited with code: 0)
Press return to continue

*/
