#include<iostream>
using namespace std;
class base {
    public:
    int var_base;
      virtual void display (){
        cout<<"the vaslue of variable is"<<var_base<<endl;
     }
};
class derived:public base{
    public:
    int var_derived=76;
    void display(){
        cout<<" 1 the value of the  variable is "<<var_base<<endl;
        cout<<" 2 the value of the  variable is "<<var_derived<<endl;
    }
};
int main(){
       base *base_class_pointer;
       derived*derived_class_pointer;
       base obj_base;
       derived obj_derived;
       base_class_pointer = & obj_derived;
       base_class_pointer->var_base=45;
      //  derived_class_pointer->var_derived=45;
       base_class_pointer->display();
      //  base_class_pointer->display();
   //   derived a;
   //   a.var_base=4;
   //   a.display();
       return 0;
}