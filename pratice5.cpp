#include<iostream>
using namespace std;
int main(){
    int x=2;
    int a=5;
    int z=0;
    cout<<(x==2)<<endl;
    cout<<(a!=5)<<endl;
    
int salary,totalsalary,y;
cout<<"enter the salary of the candidate"<<endl;
cin>>salary;
cout<<"enter the year of service"<<endl;
cin>>y;
if(y>5)
{
    cout<<"bonus is given "<<endl;
    totalsalary=(salary)+(salary*0.05);
    cout<<"total salary"<<totalsalary<<endl;
}
else{
    cout<<"no bounus is given ";
}

     return 0;
}