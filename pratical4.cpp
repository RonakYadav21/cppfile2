#include<iostream>
using namespace std;
int main(){
    float attendence,classheld,classat,attend;
    cout<<"enter the no. of class held "<<endl;
    cin>>classheld;
    cout<<"classes taken by the student "<<endl;
    cin>>classat;
     cout<<"attendence percentage"<<endl;
     attendence=0.75*classheld;
     attend=0.75*classat;
     cout<<attendence<<endl;
     cout<<"student attendence percentage:"<<classat<<endl;
     if(classat >=75){
        cout<<"you are aligible to give exam"<<endl;
     }
     else {
        cout<<"you are not eligible for appearing exam";
     }
    return 0;
}