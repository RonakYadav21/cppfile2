#include<iostream>
using namespace std;
class A{
    int no;
    protected:
    int id; 
    public:
    void setmark(){
      cout<<"enter the no "<<endl;
      cin>>no ;
    }
    void display(){
        cout<<" no is "<< no;
    }
};
class B:public A{
    protected :
    float cost ;
    public:
    void set(int i,float cst ){
        // setmark();
        // cout<<"enter the id "<<endl;
        // cin>>id;
        id=i;
        cost=cst;
        // cout<<"enter the cost "<<endl;
        // cin>>cost;
    }
    void show(){
        //  display();
        cout<<"id is "<<id<<endl;
        cout<<"cost is "<<cost<<endl;
    }
};
int main (){
    B b;
    b.setmark();
    b.set(45, 78.5);
    b.show();
    b.display();
    return 0;
}