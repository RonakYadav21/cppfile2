#include <iostream>
using namespace std;
// #define size 8    /* for static  stack implement */
class stack
{
    int size;
    int *arr; 
    // int arr[size] ;     /* at run time array will creat    */

public:
    int top;

    stack(int size)
    {
        this->size = size;          /* new will creat arr of given size */
        top = -1;           //top is not a pointer
        arr=new int(size);
    }
    void push(int element)
    {
        if (top -size<0 )
        {
            top++;
            arr[top] = element;
            cout<<"pushed element is "<<arr[top]<<endl;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            cout<<"poped element is :"<<arr[top]<<" "<<endl;
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];    //*value at arr top
        }
        else
        {
            return -1;
        }
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display(){
        if(isempty()){
            cout<<"empty"<<endl;
        }
        else{
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" "<<endl;
        }
        }
    }
};
int main()
{
    // stack st;      /*for static stack */
    stack st(5);      /* dynamically allocation of stack ,5 is the size of the stack in  which memory is allocated like a arrary */
    st.push(44);
    st.push(6);
    st.push(10);
    st.push(10);
    st.push(1);
    st.display();

    // st.push(3);
    // st.push(3);
    // st.push(3);
    // st.push(3);
    // st.push(3);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    // st.pop();
    cout << "top value is " << st.peek() << endl;
    // cout<<"stack is empty:"<<st.isempty()<<endl;
    if (st.isempty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty";
    }

    return 0;
}