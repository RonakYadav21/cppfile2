#include<iostream>
using namespace std;
class base {
    protected:
    
    int var_base;
    public:
     void setdata (int var){
        var_base=var;
    }
     virtual void display (){
        cout<<"the value of variable is"<<var_base<<endl;
     }
};
class derived:public base{
    public:
    int var_derived=98;
    void display(){
        cout<<" 2 the value of the  variable is "<<var_base<<endl;
        cout<<" 2 the value of the  variable is "<<var_derived<<endl;
    }
};
int main(){
       base *base_class_pointer;
       derived*derived_class_pointer;
       base obj_base;
       derived obj_derived;
       base_class_pointer = & obj_derived;
       base_class_pointer->setdata(34);
    //    derived_class_pointer->var_derived=45;
       base_class_pointer->display();

       return 0;
}