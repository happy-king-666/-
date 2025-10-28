#include<stdio.h>
#include<iostream>
using namespace std; 
main(){
	int i,sum;
//	cin>>i; 
	for(int i=0;i<1000;i++){
	int	g=i%10;566
	int	s=i/10%10;
	int	b=i/100;
	sum=g*g*g+s*s*s+b*b*b;
		if(i==sum){
		printf("该数为水仙花数%d\n",sum);
		}
	} 
	
} 
