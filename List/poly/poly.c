#include <stdio.h>
#include <stdlib.h>
typedef struct Poly{
    float coe;
    float index;
    struct Poly *next;
} polylist,*poly;
poly creatpoly(poly head){
    int n;
    float coe;
    float index;
    head=(poly)malloc(sizeof(polylist));
    if(head==NULL){
        printf("创建链表失败！");
    }
    poly p=head;
    printf("请输入多项式项数：");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        poly q=(poly)malloc(sizeof(polylist));
        printf("请输入系数：");
        scanf("%f",&coe);
        q->coe=coe;
        printf("请输入指数：");
        scanf("%f",&index);
        q->index=index;
        p->next=q;
        p=q;
    }
    return head;
}
void printPoly(poly head){
    poly p=head->next;
    while(p!=NULL){
        printf("%.2fx^%.2f",p->coe,p->index);
        if(p->next!=NULL){
            printf("+");
        }
        p=p->next;
    }
    printf("\n");
}
poly addPoly(poly a,poly b){
    poly c;
    poly p=a;
    poly q=b;
    c=(poly)malloc(sizeof(polylist));
    poly r=c;
    while(p!=NULL&&q!=NULL){

    }
    return c;
}
int main(int argc, char const *argv[])
{
     poly a,b;
     a=creatpoly(a);
     printPoly(a);
     b=creatpoly(b);
     printPoly(b);
    return 0;
}
