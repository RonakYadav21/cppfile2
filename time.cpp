#include<iostream>
using namespace std;
class time{
    int  hour;
    int min;
    public:
    time(){
       
    }
    // time (time a,time b )
    time(int h,int m){
        hour=h;
        min=m;
    }
    void display(){
        cout<<hour<<"hour"<<min<<"min"<<endl;;

    }
 friend time operator+ (time,time );
};
  time operator+ (time t1,time t2 ){
      time temp;
temp.hour= t1.hour+t2.hour;
  temp.min= t1.min+t2.min;
  {
   temp. hour+=temp.min/60;
    temp.min+=temp.min%60;
  }
   return temp;
}
int main(){
    time a(4,75);
    time b(6,60);
    time c=a+b;
    a.display();
    b.display();
    c.display();
    return 0;
}
i 