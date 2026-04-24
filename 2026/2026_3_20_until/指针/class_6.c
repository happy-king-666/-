//动态内存分配
#include <stdio.h>
#include<stdlib.h>

void printfarr(int *arr,int len){
    for(int n=0;n<len;n++){
        printf("%d\n",arr[n]);
    }
     return ;
}
int main(){
    int n=0 ;
    printf("输入数组");
    scanf("%d",&n);
    int *arr =(int *)malloc(n * sizeof(int));
    if(arr==0){
        printf("内存申请失败");
    }else{
   printf("内存申请成功");   
     printf("请输入 %d 个整数：\n", n);
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
       
    // 4. 打印数组（传入我们自己保存的长度 n）
    printf("数组内容：");
    printfarr(arr, n);

    // 5. 释放内存（必须做！避免内存泄漏）
    free(arr);
    arr = NULL; // 避免野指针
        }
  return 0;
}



