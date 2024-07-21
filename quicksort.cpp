#include<iostream>
using namespace std;
int partition(int arr[],int l,int r){
int pivot=arr[l];
int i=l;
int j=r;
while(i<j){
while(arr[i]<=arr[pivot] ){
    i++;
}

while(arr[j]>arr[pivot] ){
    j--;
}

if(i<j){
    swap(arr[i],arr[j]);
}
}
swap(arr[j],arr[pivot]);

return j;
}
void quicksort(int arr[],int l,int r){
    if(l>r){
        return;
    }
    int pindex=partition(arr,l,r);
     quicksort(arr,l,pindex-1);
   quicksort(arr,pindex+1,r);
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