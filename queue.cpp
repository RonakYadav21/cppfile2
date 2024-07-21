#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(3);
    q.push(8);
    q.pop();
    // q.pop();
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
   cout<<"front of the queue  " <<q.front();
    return 0;
}