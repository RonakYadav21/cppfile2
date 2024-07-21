#include <iostream>
using namespace std;
int getmax(int arr[], int n)
{
    int max = arr[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void countsort(int arr[], int n, int pos)
{
    int arrb[n], i;
    int count[10] = {0};
    for (i = 0; i < n; i++)
    {
        ++count[(arr[i] / pos) % 10];
    }
    for (i = 1; i < 10; i++)
        count[i] = count[i] + count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        arrb[--count[(arr[i] / pos) % 10]] = arr[i];
        // count[(arr[i] / pos) % 10]--;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = arrb[i];
    }
}
void radixsort(int arr[], int n)
{
    int max = getmax(arr, n);
    int pos;
    for (pos = 1; max / pos > 0; pos*= 10)
    {
        countsort(arr, n, pos);
    }
}
void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main()
{

    int array[] = {34, 567, 123, 45, 222};
    int  n = 5;
    print(array,n);
    radixsort(array, n);
    print(array, n);
    
    return 0;
}