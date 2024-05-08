#include<iostream>
using namespace std;
class stack
{
 public : int top;
          int arr[5];
 
 public : 
         stack()
         {
          top= -1;
         }
 
         void push(int value)
          {
          if(top==5-1)
          {
           cout<<"stack is overflow"<<endl;
          }
          
        
           arr[++top]=value;
           cout<<"pushed value:"<<value<<endl;
           
          
          }
           void pop()
          {
           if(top== -1)
           {
            cout<<"stack underflow"<<endl;
           }
           int poppedvalue=arr[top--];
           cout<<"pop value:"<<poppedvalue<<endl;
          }
         void display()
         {
          cout<<"top of stack is:"<<endl;
          cout<<arr[top]<<endl;
         }
};
class queue
{
 public: int front,rear,arr[10];
 
 public:queue()
         {
         front=-1;
         rear=-1;
         }
         
         void enqueue(int value)
         {
          if(rear ==10-1)
          {
           cout<<"queue is overflow"<<endl;
          }
          if(front ==-1)
          {
           front=0;
          }
        arr[++rear]=value;
        cout<<"enqueued to the queue :"<<value<<endl;
         }
         
         void dequeue()
         {
          if(front==-1 || front>rear)
          {
           cout<<"queue undreflow"<<endl;
          }
          int dequeuevalue=arr[front++];
          cout<<"dequeueed from the queue :"<<dequeuevalue<<endl;
         }
 
};

int main()
{
 stack s;
 s.push(5);
 s.push(10);
  s.pop();
  s.display();
 queue q;
 q.enqueue(5);
 q.enqueue(10);
 q.dequeue();
 
 
}






