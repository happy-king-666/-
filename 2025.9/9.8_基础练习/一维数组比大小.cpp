//一维数组比大小 
#include<stdio.h>
#include<iostream>
using namespace std;
main(){
	int arr[6]={96,12,384,216,75,64} ;
//	for(int i=0;i<6;i++){
//		if(arr[i]>arr[i+1]){
//			int tremp;
//			tremp=arr[i];
//			arr[i]=arr[i+1];
//			 arr[i+1]=tremp;
//		} 
//	}
//	printf("%d\n",arr[6]);
	//方法二
	int  Max=arr[0]; 
	for(int l=0;l<6;l++){
		if(arr[l]>Max){
			Max=arr[l];
		}
	}
	printf("%d\n",Max);
} 
