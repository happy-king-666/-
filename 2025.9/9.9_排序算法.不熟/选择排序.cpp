//选择排序
#include<stdio.h>
#include<iostream>
void xh (int arr[] ,int len){
	for(int i=0;i<len;i++){
		printf("该数字为%d\n",arr[i]);
	}
}

using namespace std;
void  px (int arr[],int len){
	for(int i=len-1;i>0;--i){
		for(int j=0;j<i;j++){
		if(arr[i] < arr[j]){
			int temp=0;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			
		}
		}
	}	
}
main(){
	int arr[8]={20,82,18,997,53,465,271,10};
	int len=sizeof (arr)/sizeof(arr[0]);
	px (arr,len);
	xh (arr,len);
}
