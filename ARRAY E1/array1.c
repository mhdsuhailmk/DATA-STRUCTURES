
#include <stdio.h>

void insert(int size, int array[]);
void delete(int size, int array[]);
int search(int size, int array[]);
void display(int size, int array[]);


void main(){

	int array[100], size, choice = 0;

	printf("\nEnter size of the array : ");
	scanf("%d", &size);

	for(int i=0; i<size; i++){
		printf("Enter number %d : ", i+1);
		scanf("%d", &array[i]);
	}

	while(choice != 5){
		printf("\n\nEnter your choice : \n1.Display\n2.Insert an item to a position\n3.Delete an item\n4.Search\n5.Exit\n");
		scanf("%d", &choice);

		switch(choice){
			case 1: display(size, array);
				  break;
			case 2: insert(size, array);
				  size++;
				  break;
			case 3: delete(size, array);
				  size--;
				  break;
			case 4: search(size, array);
				  break;
			case 5: printf("\n Exiting :)");
				  break;

			default: printf("\nEnter a valid choice!");
		}
	}


}

void insert(int size, int *array){
	int num, index;
	printf("\nEnter a number : ");
	scanf("%d", &num);
	printf("\nEnter the location : ");
	scanf("%d", &index);

	if(size >= 100){
		printf("\nArray is full..!");
	}else{

		for(int i=size; i>=index; i--){
			*(array + i) = *(array + i - 1);
		}
		*(array + index) = num;
	}


}

void display(int size, int *array){

	printf("\n\nDisplay array\n-----\n");
	for(int i=0; i<size; i++){
		printf("%d   ", *(array + i));
	}
}

void delete(int size, int *array){

	int index;
	printf("\nEnter index of the item to delete : ");
	scanf("%d", &index);
    int deleted_item = *(array + index);
	for(int i=index; i<=size; i++){
		*(array + i) = *(array + i+1);
	}

	printf("%d is deleted from location %d", deleted_item, index);

}

int search(int size, int *array){
	int num;
	int index = -1;
	printf("\nEnter a number to search : ");
	scanf("%d", &num);

	for(int i=0;i<size;i++){

		if(*(array + i) == num){
			index = i;
			break;
		}
	}

	if(index == -1){
		printf("The given number not found!");
	}else{
		printf("\n Number %d found at location %d", num, index);
	}

	return (index);
}
