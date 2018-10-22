template<typename T>
class Stack{
    private:
        T *item;
        int top;
        int maxsize;
        int addsize;
    public:
        Stack();
        ~Stack();
        bool isEmpty();
        bool isFull();
        T getTop();
        void addLength();
        void push(const T &a);
        void pop();
};
template<typename T>
Stack<T>::Stack(){
      maxsize=10;
      addsize=5;
      item=new T [maxsize];
      top=-1;
}
template<typename T>
Stack<T>::~Stack(){
      
}
template<typename T>
bool Stack<T>::isEmpty(){
     if(top<0)
        {return true;}else{
            return false;
        }
}
template<typename T>
bool Stack<T>::isFull(){
     if(top==maxsize-1)
       {return true;}else{
           return false;
       }
}
template<typename T>
T Stack<T>::getTop(){
     return item[top];
}
template<typename T>
void  Stack<T>::addLength(){
     T * ptr=item;
     item=new T[maxsize+addsize];
     int i=0;
     while(i<maxsize){
        item[i]=ptr[i];
        ++i;
     } 
     maxsize+=addsize;
}
template<typename T>
void Stack<T>::push(const T &a){
     if(isFull()){
         addLength();
     }
     ++top;
     item[top]=a;
     
}
template<typename T>
void Stack<T>::pop(){
     --top;
}