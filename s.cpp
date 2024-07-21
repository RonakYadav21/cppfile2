#include<iostream>
using namespace std;
class stack{
    int size;
    // int top;
    int*arr;
    public:
    int top;
    stack(int size){
        this->size=size;
        int top=-1;
        arr=new int[size];
    }
    void push(int element){
        if(top==size){
            cout<<"stack is full";
        }
        else if (top==-1){
            top++;
            arr[top]=element ;
        }
        else top++;
        arr[top]=element;
    }
  void pop(){
    if(top>=0){
        top--;
        
    }
    else {
        cout<<"stack is empty";
    }

  }
  int peek(){
    if(top>=0){
        return arr[top];
    }
  }   
};
int main(){
    stack s(7);
    s.push(5);
    // s.push(55);
    // s.push(51);
   cout<< s.peek();
    // s.push(5);
    // s.push(5);
    // s.push(5);
    // s.push(5);
    s.pop();
    return 0;

}
