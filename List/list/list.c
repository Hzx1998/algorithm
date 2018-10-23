#include <stdio.h>
#include <stdlib.h>
int length=0;
typedef struct Node
{
    int data;
    struct Node *next;
} List, *list;
/*创建空链表*/
list creatHead(list L)
{
    L = (list)malloc(sizeof(List));
    L->next = NULL;
    return L;
}
/*创建链表*/
list creatList()
{
    list a;
    a = creatHead(a);
    printf("请选择方法创建链表(1)头插法(2)尾插法");
    int b;
    scanf("%d", &b);
    //头插法创建链表
    if (b == 1)
    {
        int data1;
        while (scanf("%d", &data1) != EOF)
        {
            list p;
            p = (list)malloc(sizeof(List));
            p->data = data1;
            p->next = a->next;
            a->next = p;
            length++;
        }
    }
    //尾插发创建链表
    else if (b == 2)
    {

        int data2;
        list p = a;
        while (scanf("%d", &data2) != EOF)
        {
            list q;
            q = (list)malloc(sizeof(List));
            q->data = data2;
            p->next = q;
            p = q;
            length++;
        }
    }
    //输入错误
    else
    {
        printf("输入错误！");
        exit(0);
    }
    return a;
}
//输出函数
void printList(list a)
{
    if (a->next == NULL)
    {
        printf("链表为空\n");
    }
    list p;
    for (p = a; p->next != NULL; p = p->next)
    {
        printf("%d ", (p->next)->data);
    }
}
/*插入算法*/
void insertList(list a)
{
    int n;
    int po;
    int data3;
    list q=a;
    list p = (list)malloc(sizeof(List));
    printf("输入插入结点的数据：\n");
    scanf("%d", &data3);
    p->data=data3;
    printf("选择插入方式1-3表头，表尾，指定位置：");
    scanf("%d",&n);
    switch(n){
    //在表头插入
       case 1:
           p->next=a->next;
           a->next=p;
           break;
    //在表尾插入
        case 2:
           while(q->next!=NULL)
           {
               q=q->next;
           }      
          q->next=p;
          p->next=NULL;
          break;
    //在指定位置插入
         case 3:
        printf("请输入要插入结点的位置");
        scanf("%d",&po);
        if(po>length){
           printf("位置无效！");
        }
        else{
            for(int i=0;i<po-1;++i){
                q=q->next;
            }
            p->next=q->next;
            q->next=p;
        }
        break;
    default:printf("没有这种方式！");break;
    }
}
/*删除指定位置节点*/
void delNode()
{
  
}
/*清空链表*/
void clearList(list a)
{
    list p=a->next;
    while(a->next!=NULL)
    {
       a->next=p->next;
       free(p);
       p=a->next;
    }
    free(a);
}
/*修改节点*/
void modList(list a){

}
//程序出口
int main(int argc, char const *argv[])
{
    list l;
    l = creatList();
    printList(l);
    insertList(l);
    printList(l);
    clearList(l);
    printList(l);
    return 0;
}
