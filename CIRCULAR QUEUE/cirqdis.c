#include<stdio.h>
#include<stdlib.h>

void cq_insert();
void c_deq();
void ins();
void cq_display();
void cq_del_array();

int front,rear,max_size,choice,ext,cq[100],newcq[120],data,size,i;

void main()
{
 front=-1;
 rear=-1;
 printf("CIRCULAR QUEUE!\n");

 printf("ENTER THE SIZE OF THE QUEUE!\n");
 scanf("%d",&size);
 max_size=size;

 do
  {

  printf("ENTER YOUR CHOICE!\n");
  printf("1.ENQUE\n" "2.DEQUE\n" "3.EXIT\n");
  scanf("%d",&choice);

  switch(choice)
  {

	case 1:
	{
	 cq_insert();
	 break;
	}
	
	case 2:
	{
	
	 c_deq();
	
	 break;
	}
	
	case 3:
	{
	 exit(0);
	 break;
	}

   }
	
 printf("DO YOU WANT TO CONTINUE? (1/0)\n");
 scanf("%d",&ext);
  }

 while(ext!=0);

}



void cq_insert()
{
  printf("INSERTION!\n");

	if(front==(rear+1)%max_size)
	{
	  printf("OVERFLOW!\n");
	}

	else if (front==-1 && rear==-1)
	{
	  front=0;
	  rear=0;
	  ins();	 
	}

	else
	{
	  rear=(rear+1)%max_size;
	  ins();
	  
	}

}


void c_deq()

{	
int j=0;

	if(front==-1)
	{
	 printf("QUEUE IS EMPTY\n");
	return;	
	}
	
	else if(front==rear)
	{
	 data=cq[front];
	 front=-1;
	 rear=-1;
	} 
	
	else if(front==max_size-1)
	{
	 front=0;
	}
	
	else
	{	
	 data=cq[front];
	 front=(front+1)%max_size;
	}

  printf("THE ITEM:%d DEQUED!\n",data);
  
  
	newcq[j]=data;
	j++;

      //  cq_del_array();

}


//function to be invoked inside cq_insert()

void ins()
{
 printf("ENTER THE DATA TO BE INSERTED:\n");
 scanf("%d",&data);
 cq[rear]=data;
 printf("THE ELEMENT: %d INSERTED!\n",data);
 cq_display();

}


//function to display queue elements


void cq_display()

{


printf("THE ELEMENTS IN THE QUEUE ARE:\n");
printf("\n[");
for(i=0;i<=rear;i++)

{

printf("%d  ",cq[i]);

}

printf("]\n");
}


void cq_del_array()
{
printf("THE ELEMENTS IN THE QUEUE ARE:\n");
printf("\n[");
for(i=0;i<=front;i++)


{
if(cq[i]==data)
{
cq[i]=0;
}

printf("%d  ",cq[i]);

}

printf("]\n");
}


/*
//to print queue after deletion
void cq_del_array()

{

printf("THE REMAINING ELEMENTS ARE:\n");

for(i=0;i<max_size;i++)
{

printf("%d,",newcq[i]);

}
printf("]\n");
}

*/






