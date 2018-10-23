#include<iostream>
#include"stack.h"
int main(int argc, char const *argv[])
{
    Stack<int> s;
    int a=1;
    int b=2;
    s.push(a);
    s.push(b);
    s.push(b);
    s.push(b);
    while(s.isEmpty()!=true)
    {
        std::cout<<s.getTop();
        s.pop();
    }
    return 0;
}
