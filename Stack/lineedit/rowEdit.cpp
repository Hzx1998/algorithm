#include<iostream>
#include"stack.h"
int main(int argc, char const *argv[])
{
    Stack<char> s,s1;
    char c;
    while((c=getchar())!=EOF){
         while(c!='\n'&&c!=EOF) {
              if(c!='#'&&c!='@'){
                     s.push(c);
               }
               if(c=='#'){
                   s.pop();
               }
               if(c=='@'){
                   s.clearStack();
               }
               c=getchar();
         }   
              s.push(c);
    }
    while(!s.isEmpty()){
        char a=s.getTop();
        s.pop();
        s1.push(a);
    }
    std::cout<<std::endl;
    while(!s1.isEmpty()){
        std::cout<<s1.getTop();
        s1.pop();
    }
    return 0;
}
