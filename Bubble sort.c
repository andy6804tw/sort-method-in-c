#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int arr[100000],i,j;
	srand(time(NULL));
	for(i=0;i<100000;i++){
		arr[i]=rand();
	}
	for(i=0;i<100000-1;i++){
		for(j=i+1;j<100000;j++){
			if(arr[i]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for(i=0;i<100000;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	return 0;
	system("psuse");
} 
