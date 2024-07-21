#include<iostream>
using namespace std;
int main(){
int n,i ,young,old;
cout<<"enter n";
cin>>n;
float age[n];
cout<<"enter the ages ";
for(i=0;i<n;i++){
    cin>>age[i];
}
for(i=0;i<n;i++){
    cout<<age[i]<<"\n";
    }
 
 young=age[0];
 old=age[0];
 for(i=0;i<n;i++)
{
if(age[i]>age[0]){
    young=age[i];
}
if(age[i]<age[0]){
    old=age[i];
}
 
 }
cout<<"younger is "<<young<<endl;
cout<<"older is "<<old<<endl;
 
 
return 0;
}
