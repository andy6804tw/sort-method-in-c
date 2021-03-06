#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int arr[100000],i,j;
	arr[0]=-1;
	srand(time(NULL));
	for(i=1;i<100000;i++){
		arr[i]=rand();
	}
	for(i=2;i<100000;i++){
		int temp=arr[i];
		for(j=i;temp<=arr[j-1];j--){
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
	}
	
	for(i=0;i<100000;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	return 0;
	system("psuse");
} 
