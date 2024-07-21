#include<iostream>
using namespace std;
int main (){
// float qnty ,price,totalcost;
// cout<<"enter the  quantity cost";
// cin>>qnty;
// price=qnty*100;
// if (price>1000){
//     cout<<"10 percent discount is given"<<endl;
//     totalcost = (qnty*100)-(qnty*100*.1);
//     cout<<"total cost is "<<totalcost;
// }
// else {
//     cout<<"no discount is given";
// }
// char c;
// int i;
// for(i=0;i<=255;i++){
//     c=i;
//     cout<<c<<endl;
// }
int n,i, arr[n],sum=0;
float avg;
cout<<"enter n"<<endl;
cin>>n;
cout<<"enter the no "<<endl;
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++){
    sum=sum+arr[i];
}
    avg=sum/n.0;
    cout<<"avg is "<<avg<<endl;
    cout<<"sum"<<sum;

    return 0;

}