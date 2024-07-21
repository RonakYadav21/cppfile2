#include <iostream>
using namespace std;
void fact(int n)
{
    if (n == 1)
    {
        return;
    }
    cout << "n" << n << endl;
    fact(n - 1);
}
void name(int n)
{
    if (n < 1)
        return;
    cout << "ronak" << endl;
    name(n - 1);
}
void number(int n)
{
    if (n <= 0)
    {
        return;
    }
    cout << n << endl;
    number(n - 1);
    cout << n << endl;
}

void reverse(int arr[],int n, int i)
{
    if (i >=n)
    {
        return;
    }
    reverse(arr,n, i + 1);
    cout << arr[i]<<" ";
}
void rever( int a[],int i,int n){
    if(i>n/2){
        return;
    }
    swap(a[i],a[n-i]);
    rever( a,i+1,n);
    }
    void reswap(int arr[],int s,int e){
        if(s>e){
            return ;
        }
        swap(arr[s],arr[e]);
       reswap(arr,s+1,e-1);
    }

int main()
{
    int n, i;
    cout << "enter n";
    cin >> n;
    // fact(n);
    // name(n);
    // number(n);
    int ar[n];
    cout << "enter element of an array";
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // reverse(ar, n, 0);
    // rever( ar,0,n-1);
    // for(i=0;i<n;i++){
    //     cout<<ar[i]<<" ";
    // }
    reswap(ar,0,n-1);
    for(i=0;i<=n-1;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}