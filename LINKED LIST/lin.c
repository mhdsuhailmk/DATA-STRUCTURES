#include<stdio.h>  
#include<stdlib.h>  

struct node   
{  
    int data;  
    struct node *next;   
};
  
struct node *head;  
  
void b_insert ();   
void l_insert ();  
void rnd_insert();

void b_delete();  
void l_delete();
//void rnd_delete();

void display();  
void search();  

void main ()  
{  

    int choice =0,ag;  


do {        
	printf("\nLINKED LIST\n");
        printf("\nENTER YOUR CHOICE: ...\n");  
 
        printf("1.INSERT IN BEGINNING\n" "2.INSERT AT LAST\n""3.INSERT AT A POSITION\n" "4.DELETE FROM BEGINNING\n"  
        "5.DELETE FROM LAST\n" "6.DELETE FROM A POSITION\n" "7.SEARCH\n""8.DISPLAY\n""9.EXIT\n");  
             
        scanf("%d",&choice);  

     switch(choice)  
        {
  
            case 1:  
            b_insert();      
            break;

            case 2:  
            l_insert();         
            break;       
        	
	    case 3:
	    rnd_insert();
	    break;

            case 4:  
            b_delete();       
            break; 
 
            case 5:  
            l_delete();        
            break;  
           
	    case 6:
	   // rnd_delete();
            break;

            case 7:  
            search();         
            break;
  
            case 8:  
            display();        
            break; 
 
            case 9:  
            exit(0);  
            break; 

            default:  
            printf("PLEASE ENTER A VALID CHOICE !");  
         } 

printf("\nDO YOU WANT TO CONTINUE?:1/0 \n");
scanf("%d",&ag);

   }

while(ag!=0);

}  
 




void b_insert()  
{  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  

    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  

    else  
    {  
        printf("\nENTER THE VALUE:\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nINSERTED\n");  
    }  
      
}  



void l_insert()  
{  
    struct node *ptr,*temp;  
    int item;     
    ptr = (struct node*)malloc(sizeof(struct node));  
   
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");     
    }  

    else  
    {  
        printf("\nENTER THE VALUE:\n");  
        scanf("%d",&item);  
        ptr->data = item;
 
          if(head == NULL)  
           {  
             ptr -> next = NULL;  
             head = ptr;  
             printf("\nINSERTED\n");  
           }
  
         else  
           {  
            temp = head;
  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nINSERTED\n");  
          
           }  
     }  
}  









void rnd_insert()
{

struct node *ptr,*temp;  
    int item,i,pos,loc;     
    ptr = (struct node*)malloc(sizeof(struct node));  


if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");     
    }  



else {

printf("ENTER THE POSITION:\n");
scanf("%d",&pos);
loc=pos+1;
printf("ENTER THE ITEM TO BE INSERTED:\n");
scanf("%d",&item);

ptr->data=item;
temp=head;

for(i=0;i<loc;i++)
{
temp=temp->next;

if(temp==NULL)
{printf("CAN'T INSERT!\n");
return;}


}

ptr->next=temp->next;
temp->next=ptr;
printf("NODE INSERTED AT THE POSTION%d",pos);


}



}















 
void b_delete()  
{  
    struct node *ptr;  
    if(head == NULL)  
     {  
      printf("\nEMPTY LIST!\n");  
     }  
    else   
     {  
       ptr = head;  
       head = ptr->next;  
       free(ptr);  
       printf("\nNODE DELETED...\n");  
     }  
}  



void l_delete()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
     {  
        printf("\nLIST iS EMPTY\n");  
     }  
    else if(head -> next == NULL)  
     {  
        head = NULL;  
        free(head);  
        printf("\nLIST CLEARED ...\n");  
     }  
          
    else  
     {  
        ptr = head;   
        while(ptr->next != NULL)  
         {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
         }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDELETED ...\n");  
     }     
}  
 



void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEMPTY LIST\n");  
    }  
    else  
    {   
        printf("\nENTER THE ITEM TO BE SEARCHED:\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("ITEM FOUND AT LOCATION %d !",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("ITEM NOT FOUND!\n");  
        }  
    }     
          
}  
  


void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("EMPTY\n");  
    }  
    else  
    {  
        printf("\nPRINTING. . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     
