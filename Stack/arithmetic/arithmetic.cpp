//根据

#include<iostream>
#include"stack.h"

int main(int argc, char const *argv[])
{
    Stack<char> s1,s2;   //
    std::string a;  //表达式字符串
    std::cin>>a;     
    std::cout<<a;   //输入并显示表达式
    int i=0;
    while(i<a.length()){
         if(a[i]=='-'||a[i]=='+'){

         }
         if(a[i]=='*'||a[i]=='/'){

         }
         if(a[i]=='('){
             
         }
    }
    return 0;
}
