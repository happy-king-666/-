//枚举法举例输出含7的倍数 
#include<stdio.h>
#include<iostream>
main(){
	for(int i=0;i<100;i++){
		if(i%7==0){//7的倍数 
			printf("7的倍数有%d\n",i);
		}else if(i/10==7){
			printf("7的十位有%d\n",i);
		}else if(i%10==7) 
		printf("7的个位有%d\n",i);
	}
}
