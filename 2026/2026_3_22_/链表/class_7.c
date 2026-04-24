//新建链表
#include <stdio.h>
#include <stdlib.h>
//创建节点 
struct Node
{
    int data;
    struct Node *  nect;    
};

//创建新节点
struct Node* createNode(int val)
{
    struct Node* newnode =(struct Node*)malloc(sizeof (struct Node));
    newnode->data=val;
    newnode->nect=NULL;
    return newnode;
};



//尾部添加节点






//遍历打印列表








struct node 
{
    int date ;
    struct node *next; 
};













//销毁链表
struct node
{
int date;
struct  node *next;
    /* data */
};
