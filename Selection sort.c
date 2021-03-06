#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
  int i,j,temp,arr[100000],min;
  srand(time(NULL));
  for(i=0;i<100000;i++)
    arr[i]=rand();

    for(i=0;i<100000-1;i++){
    	min=i;
    	for(j=i+1;j<100000;j++)
    	if(arr[j]<arr[min])min=j;
    	
    	temp=arr[min];
    	arr[min]=arr[i];
    	arr[i]=temp;
    } 
    for(i=0;i<100000;i++)
    	printf("%d ",*(arr+i));
    printf("\n");
  

	
	return 0;
	system("pause");
}

