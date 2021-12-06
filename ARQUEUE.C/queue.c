#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();

int queue[100],ext,choice, max_size,front,rear,data,item;
int main()
{

printf("QUEUE OPERATIONS! \n");
printf("\n");

printf("ENTER THE SIZE OF THE QUEUE!\n");
scanf("%d",&max_size);
front=rear=-1;

do
{
printf("\n");
printf("ENTER YOUR CHOICE!\n");
printf("1.ENQUEUE\n" "2.DEQUEUE\n" "3.EXIT\n");
scanf("%d",&choice);
printf("\n");

 switch(choice)
 {
	case 1:
	{	
	enqueue();
	break;
	}

	case 2:
	{
	dequeue();
	break;
	}


	


	case 3:
	{
	exit(0);
	}
 } 

printf("DO YOU WANT TO CONTINUE!(1/0)?\n");
scanf("%d",&ext);
}

while(ext!=0);
}



void enqueue()
 {
  printf("INSERTION\n");
  printf("\n");



	if (rear==max_size-1)
	 {
	  printf("OVERFLOW!\n");
	 }


	else
	 {
	  printf("ENTER THE ITEM TO BE INSERTED:\n");
	  scanf("%d",&item);
          rear=rear+1;
	  queue[rear]=item;
	  printf("THE ITEM %d INSERTED!\n",queue[rear]);

 	}



int i;
printf("PRINTING THE QUEUE....\n");

printf("[");
for(i=0;i<=rear;i++)
{


printf("%d,",queue[i]);

}
printf("]");


 } 



void dequeue()
 {
  printf("DEQUEUE OPERATION!\n");

	if(front==rear)
    	 {
	  printf("QUEUE IS EMPTY!\n");
	  printf("\n");
	 }

	else
	 {
	  front=front+1;
	  data=queue[front];
	  
	  printf("THE ITEM %d DEQUEUED!\n",data);
	 }

 }













