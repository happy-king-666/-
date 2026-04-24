//指针遍历数组
#include <stdio.h>

void bianli (int *n ,int len){
for(int *p=n;p<n+len;p++){
    printf("%d",*p);
}
}

int main(){

    int arr[9]={1,2,3,4,5,6,999,8,00};
    int len;
    int len =sizeof(arr)/sizeof(arr[0]);
    bianli (arr,len);
    return 0;
}