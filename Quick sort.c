#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int arr[100000];
int Quick_Sort(int left,int right){
    if(left < right){
        int i = left + 1, j = right, splitting = arr[left], temp;
        do{
            while(i < right && arr[i] <= splitting) i++;   
            while(j > left && arr[j] > splitting) j--;
            if(i < j){
            temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;   //資料交換 
            }
        }while(i < j);
        temp = arr[j]; arr[j] = arr[left]; arr[left] = temp;   //當索引值交錯時最小值跟樞紐值(pivot)交換 
        Quick_Sort(left, j - 1);
        Quick_Sort(j + 1, right);
    }
}
int main(){
    int i, num=100000;
    srand(time(NULL));
	for(i=0;i<100000;i++){
		arr[i]=rand();
	}
    Quick_Sort(0, num - 1);
    for(i = 0; i < num; i++) printf("%d ", arr[i]);
        printf("\n");
    return 0;
}
