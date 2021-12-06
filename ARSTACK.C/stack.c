#include<stdio.h>
#include<stdlib.h>
void s_push();
void s_pop();
 void display();
int max_size,stack[100],data,choice,top=-1,i;

int main()
{

int ext;
printf("STACK!\n");
printf("\n");
printf("ENTER THE SIZE OF STACK!\n");
scanf("%d",&max_size);


do
{
 printf("\n");
 printf("ENTER YOUR CHOICE!:\n");
 printf("\n");
 printf("1.PUSH\n" "2.POP\n""3.EXIT\n");
 scanf("%d",&choice);

 switch(choice)

{

	case 1:
		{
		s_push();
		display();		
		break;
		}
	
	case 2:
		{
		s_pop();
//display();
		break;			
		}
	
	case 3:
		{
		exit(0);
		break;
		}
	
	default:
		{
		printf("ENTER A VALID CHOICE!\n");
		break;
		}

}

 printf("\n");
 printf("\nDO YOU WANT TO CONTINUE?:1/0 \n");
 scanf("%d",&ext);
}

while(ext!=0);

}


void s_push()
{
printf("\n");
printf("PUSH OPERATION!\n");
printf("\n");

	if(top==max_size-1)
	 {
	  printf("OVERFLOW!\n");
	  return;
	 }

 	else
 	 {
  	  printf("ENTER THE ITEM TO BE INSERTED:\n");
  	  scanf("%d",&data);

  	  top=top+1;
  	  stack[top]=data;
 	  printf("THE ITEM: %d INSERTED!\n",stack[top]);
	}
}



void s_pop()
{
printf("\n");
printf("POP OPERATION!\n");
printf("\n");

	if(top==-1)
	{
       	  printf("STACK IS EMPTY!\n");
	}

	else
	{
	  data=stack[top];
	  top=top-1;
	  printf("\n");
	  printf("THE ITEM: %d DELETED!\n",data);

	}



}





void display()

{



for(i=0;i<=top;i++)

{

printf("%d\n",stack[i]);
}

}

