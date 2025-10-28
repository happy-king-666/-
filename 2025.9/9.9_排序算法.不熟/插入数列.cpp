//插入排序
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
void  insert_sort(int arr[],int len) {
	int temp;
	for( int i=1;i<len;i++){
		if(arr[i]<arr[i-1]){
			temp= arr[i];
			int j;
			for(j=i-1;arr[j]>temp;j--){
				arr[j+1]=arr[j];	//其中[j+1]=[i]在数组的序列上是			
			} arr[j+1]=temp;		//此处[j+1]是插入到比temp小的数前方 
		}
	}
}
void dy  (int arr[],int len){
	for(int i=0;i<len ;i++){
		printf("%d\n",arr[i]);
	}
}
main(){
	int arr[5]={65,72,10,24,46};
	int len = sizeof(arr)/ sizeof(arr[0]);
	dy (arr,len);
	printf("\n");
	insert_sort ( arr,len);
	dy (arr,len);
} 
