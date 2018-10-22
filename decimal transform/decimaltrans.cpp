#include<iostream>
#include"stack.h"
int main(int argc, char const *argv[])
{
    Stack <int> s;
    int dec;
    int n;
    std::cout<<"请输入要转化的数"<<std::endl;
    std::cin>>dec;
     while(dec>0){
        int m=dec%2;
        s.push(m);
        //std::cout<<s.getTop(); 
        dec/=2;
    }
     while(!s.isEmpty()){
        std::cout<<s.getTop();
        s.pop();
    }
     
    return 0;
}
