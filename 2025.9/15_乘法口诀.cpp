//Ç¶Ì×³Ë·¨¿Ú¾÷±í
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
main(){
	for(int i=0;i<=9;i++){
		for(int j=1;j<=i;j++){
			int sum=i*j;
			printf("%d*%d=%d\t",i,j,sum);
			
		}
		printf("\n");
		
	}
} 
