//draft 

#include<stdio.h>
void input();
void output();
void set_union();
void set_intersection();
void set_diff();

int a[]={0,0,0,0,0,0,0,0,0,0}, b[]={0,0,0,0,0,0,0,0,0,0};

int main()

{

int choice,ext;

do{


 printf("ENTER YOUR CHOICE\n");
 
 printf("1.INPUT\n" "2.OUTPUT\n" "3.UNION\n" "4.INTERSECTION\n" "5.DIFFERENCE\n");

 scanf("%d",&choice);
 
 switch(choice)

 {

	case 1:
	{
         input();
	 break;
	}

	case 2:
	{
         output();
	 break;
	}

	case 3:
	{
         set_union();
	 break;
	}
	
	case 4:
	{
         set_intersection();
	 break;
	}

	case 5:
	{set_diff();
	 break;
	}

		
	default:
	{
	 printf("ENTER A VALID CHOICE");
	 break;}
 }


printf("DO YOU WANT TO CONTINUE?:(1/0)");
scanf("%d",&ext);

}

while(ext==1);


}




void input()
{
int size,val,i;
printf("ENTER THE SIZE OF THE FIRST SET:");
scanf("%d",&size);

printf("ENTER THE ELEMENTS:\n");

for(i=0;i<size;i++)
{
scanf("%d",&val);
a[val-1]=1;
}


printf("ENTER THE SIZE OF THE SECOND SET:");
scanf("%d",&size);

printf("ENTER THE ELEMENTS:\n");

for(i=0;i<size;i++)
{
scanf("%d",&val);
b[val-1]=1;
}

//printing...


printf("THE FIRST SET IS:\n");

for(i=0;i<9;i++)
 { printf("%d",a[i]); }


printf("THE SECOND SET IS:\n");

for(i=0;i<9;i++)
 { printf("%d",b[i]); }

//end_of_print


}



void output(int c[])
{
int i; 
printf("THE SET IS:");
for(i=0;i<9;i++)
{
  if(c[i]!=0)
   printf("%d",i+1);
  
}


}



void set_union()
{
 int i,c[10];
for(i=0;i<9;i++)
{
  if(a[i]!=b[i])
    c[i]=1; 
  else 
    c[i]=a[i];
}
 

for(i=0;i<9;i++)
{
printf("%d",c[i]);
}

output(c);

}



void set_intersection()
{

int i,c[10];

for(i=0;i<9;i++)
{
 if(a[i]==b[i])
  c[i]=a[i];
 else
  c[i]=0;

}

for(i=0;i<9;i++)
{
printf("%d",c[i]);
}

output(c);
}


void set_diff()
{

int i,c[10];
 for(i=0;i<9;i++)
 {
   if(a[i]==1&&b[i]==0)
    c[i]=1;
 
   else
    c[i]=0;
 }


 for(i=0;i<9;i++)
   { printf("%d",c[i]); }
  

output(c);
}






