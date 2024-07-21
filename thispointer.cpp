#include<iostream>
using namespace std;
class A {
    int a;
    public:
    void set(int a){    //local variable
      this->a=a;
    }
    void getdata(){
      cout<<"the value of a is "<<a<<endl;
    }
} ;
int main (){
  A a;
  a.set(34);
  a.getdata();
  return 0;
}