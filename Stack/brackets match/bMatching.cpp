#include<iostream>
#include"stack.h"
int main(int argc, char const *argv[])
{
     Stack<char> s;
     char c;
     std::cout<<"please input"<<std::endl;
     while((c=getchar())!=EOF){
         if(c=='('||c=='{'||c=='['){
                  s.push(c);
         }if(c==')'||c=='}'||c==']'){
               if(c==')'&&s.getTop()=='('){
                   s.pop();
               }if(c==']'&&s.getTop()=='['){
                   s.pop();
               }if(c=='}'&&s.getTop()=='{'){
                   s.pop();
               }
         }
     }
     if(s.isEmpty()){
         std::cout<<"匹配成功"<<std::endl;
     }else{
         std::cout<<"匹配失败"<<std::endl;
     }
     
    return 0;
}
