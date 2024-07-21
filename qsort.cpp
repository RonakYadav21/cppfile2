#include<iostream>
using namespace std;
int part(int arr[],int low,int high){
int pivot=arr[high];
int i,temp;
int j=low-1;
for(i=low;i<high;i++){
    if(arr[i]<pivot){
    j++;
    // swap(arr[j],arr[i]);
    temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}
}
//swap(arr[j+1], pivot);/
j++;
temp=arr[j];
arr[j]=pivot;
arr[high]=temp;
return (j);
}
void quicksort(int arr[],int low,int high){
    if(low>high){
        return;
    }
    int partition=part(arr,low,high);
     quicksort(arr,low,partition-1);
   quicksort(arr,partition+1,high);
}
void display(int arr[],int n){
int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main (){
    int n,i;
    cout<<"n"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter array eleement "<<endl;
    for(i=0;i<n;i++){
    cin>>ar[i];
    }
    quicksort(ar,0,n-1);
    cout<<"array after quick sort"<<endl;
    display(ar,n);
    return 0;

}