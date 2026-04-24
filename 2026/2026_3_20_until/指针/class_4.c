//指针实现两数交换
#include<stdio.h>
int jiaohuan(int a, int b){
    printf("交换前是a=%db=%d\n",a,b);
    int c=0;
    c=a;
    a=b;
    b=c;
    printf("交换后是a=%d,b=%d\n",a,b);
    return 0;
}
int jiaohuan2(int *a, int *b){
    printf("交换前是a=%db=%d\n",*a,*b);
    int c=*a;
    *a=*b;
    *b=c;
    printf("交换后是a=%d,b=%d\n",*a,*b);
    return 0;
}
int main(){
    int a=10;
    int b=5;
    int c=99;
    int d=11;
    jiaohuan(a,b);
    printf("a=%db=%d\n",a,b);
    jiaohuan2(&c,&d);
    printf("c=%dd=%d\n",c,d);
}
