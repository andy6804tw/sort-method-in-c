#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
};
struct node *head,*head2;
int main(){
	
	//Brutus
	struct node *ptr;
	int num;
	ptr=(struct node*)malloc(sizeof(struct node));
	head=ptr;
	ptr->next=NULL;
	
	while(scanf("%d",&num)){
		if(num==0)
			break;
		insert(num,0); 
	}
	printf("Brutus=> ");
	show(0);
	
	//Calpurnia
	struct node *ptr2;
	int num2;
	ptr2=(struct node*)malloc(sizeof(struct node));
	head2=ptr2;
	ptr2->next=NULL;
	
	while(scanf("%d",&num2)){
		if(num2==0)
			break;
		insert(num2,1); 
	}
	printf("Calpurnia=> ");
	show(1);	
	
	//The merge
	printf("\n\n\nThe merge=>");
	ptr=head->next;
	ptr2=head2->next;
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
void insert(int ins,int index)
{
    struct node *current, *prev, *ptr;
    if(index==0)
    	prev=head;
    else
    	prev=head2;
    current=prev->next;
	while(current != NULL && current->value < ins) {
	    prev=current;
		current=current->next;
    }

	if ((current != NULL) && (current->value == ins)) {
      	printf("\n	Document '%d' existed!\n",ins);
      	return;
    }
      
    if ((ptr = (struct node *) malloc(sizeof(struct node))) == NULL) {
      	printf("\nNot enough memory\n");
      	return;
    }
      
    /* construct link list */
    ptr->value = ins;
    ptr->next = prev->next;
    prev->next = ptr;
      
    printf("\n	Document '%d' inserted OK\n",ins);
}

void show(int index)
{
    struct node *current;
    int count;
    if(index==0)
    	current=head->next;
	else
		current=head2->next;
    for (count=0; current!=NULL; current=current->next,count++)
        printf("%d ",current->value);
    printf("\n");
}
