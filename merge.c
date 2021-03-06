#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
};
struct node *head;
int main(){
	
	//Brutus
	struct node *ptr,*newnode;
	
	int num;
	scanf("%d",&num);
	ptr=(struct node*)malloc(sizeof(struct node));
	head=ptr;
	ptr->value=num;
	ptr->next=NULL;
	
	while(scanf("%d",&num)){
		if(num==0)
			break;
		newnode=(struct node*)malloc(sizeof(struct node));
		ptr->next=newnode;
		ptr=newnode;
		ptr->value=num;
		ptr->next=NULL;
	}
	printf("Brutus=> ");
	ptr=head;
	while(ptr!=NULL){
		printf("%d ",ptr->value);
		ptr=ptr->next;
	}
	printf("\n");
	
	//Calpurnia
	struct node *ptr2,*head2,*newnode2;
	
	int num2;
	scanf("%d",&num2);
	ptr2=(struct node*)malloc(sizeof(struct node));
	head2=ptr2;
	ptr2->value=num2;
	ptr2->next=NULL;
	
	while(scanf("%d",&num2)){
		if(num2==0)
			break;
		newnode2=(struct node*)malloc(sizeof(struct node));
		ptr2->next=newnode2;
		ptr2=newnode2;
		ptr2->value=num2;
		ptr2->next=NULL;
		
	}
	printf("Calpurnia=> ");
	ptr2=head2;
	while(ptr2!=NULL){
		printf("%d ",ptr2->value);
		ptr2=ptr2->next;
	}
	printf("\n");
	
	//The merge
	printf("\n\n\nThe merge=>");
	ptr=head;
	ptr2=head2;
	while((ptr!=NULL)&&(ptr2!=NULL)){
		if(ptr->value>ptr2->value)
			ptr2=ptr2->next;
		else if(ptr->value<ptr2->value)
			ptr=ptr->next;
		else if(ptr->value==ptr2->value){
			printf("%d ",ptr->value);
			ptr=ptr->next;
			ptr2=ptr2->next;
		}
	}
	
		
	return 0;
	system("psuse");
}

