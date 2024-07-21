// queue implementation using array
#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int size;
    int rear;
    int front;

public:
    queue(int size)
    {
        this->size = size;
        arr = new int(size);
        rear = -1;
        front = -1;
    }
    int addq(int element)
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == size - 1))
        {

            cout << "queue is overflow" << endl;
        }
        else if((front ==-1)&&(rear==-1)){
            rear++;
            front=0;
            arr[rear]=element;
        }
        else
        {
            rear++;
            arr[rear] = element;
        }
    }
    void delq()
    {
        if (front == -1 && rear == -1)
        {
            cout << "queue is underflow" << endl;
        }
        else if (front == rear)
        {
            cout<<"deleted element is"<<arr[front]<<" "<<endl;
            front = rear = -1;
        }
        else
            cout<<"deleted element is"<<arr[front]<<" "<<endl;

            front++;
        {
        }
    }
    bool isempty()
    {
        if (rear=front=-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display(){
        if(front==-1&&rear==-1){
            cout<<"no element"<<endl;
        }
        else{
        int i;
        for(i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
    }
};
int main()
{
    queue q(5);
    q.addq(4);
    q.addq(6);
    q.addq(6);
    q.addq(1);
    q.display();
    q.addq(1);
    q.delq();
    q.delq();
    // q.delq();
    // q.delq();
    // q.pop();
    // q.pop();
    // q.addq(46);
    // q.addq(6);
    // q.addq(62);
    // q.push(6);
    // q.push(6);
    // q.push(6);
    // q.push(6);

    // q.push(6);
    // q.push(6);
    // q.push(6);
    // q.push(6);
    q.display();
    if (q.isempty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "queue is not empty" << endl;
    }
    return 0;
}
