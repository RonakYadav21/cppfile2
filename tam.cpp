#include<iostream>
using namespace std;
template<class T,int s >
class array{
    T a[s];
    // int s;
    public:
    // int s=size;
    array( T a[],int s){
        for(i=1;i<s;i++)
        cin>>a[i];
    }
    void display(){
        for(i=1;i<s;i++)
        cout<<a[i];
    }
};
int main (){
    // int arr[6]={4,7,9,3,4,2};
    array<int,6>a1;
    a1.display:
    return 0;
}
