#include<stdio.h>
#include<iostream>
#include<ctime> 
#include<time.h>
using namespace std;
main(){
	printf("输入100以内随机数字");
	srand((unsigned int)time(NULL));
	int s=rand()%100+1;
	while(true){
	int i; 
	cin>> i;
	if(i>s){
	printf("猜大了")		;
	}else if(i<s){printf("猜小了"); 
	}else{printf("猜中了"); 
	}} 
}
