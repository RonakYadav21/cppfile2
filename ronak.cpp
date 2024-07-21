#include <iostream>
using namespace std;
 
// add is the short name for address
void compare(int a, int b, int add_great, int add_small)
{
    if (a > b) {
 
        // a is stored in the address pointed
        // by the pointer variable *add_great
        add_great = a;
        add_small = b;
    }
    else {
        add_great = b;
        add_small = a;
    }
}
 
// Driver code
int main()
{
    int great, small, x, y;
 
    cout << "Enter two numbers: \n";
    cin >> x >> y;
 
    // The last two arguments are passed
    // by giving addresses of memory locations
    compare(x, y, &great, &small);
    cout << "\nThe greater number is " << great << " and the smaller number is "
      << small;

    return 0;
}




























// Modified program using array
#include <iostream>
using namespace std;
 
// Store the greater element at 0th index
void findGreaterSmaller(int a, int b, int arr[])
{
 
    // Store the greater element at
    // 0th index of the array
    if (a > b) {
        arr[0] = a;
        arr[1] = b;
    }
    else {
        arr[0] = b;
        arr[1] = a;
    }
}
 
// Driver code
int main()
{
    int x, y;
    int arr[2];
 
    cout << "Enter two numbers: \n";
    cin >> x >> y;
 
    findGreaterSmaller(x, y, arr);
 
    cout << "\nThe greater number is " << arr[0]  << " and the "
           "smaller number is " << arr[1];
 
    return 0;
}



















      // Modified program using structures
#include <stdio.h>
struct greaterSmaller {
    int greater, smaller;
};
 
typedef struct greaterSmaller Struct;
 
Struct findGreaterSmaller(int a, int b)
{
    Struct s;
    if (a > b) {
        s.greater = a;
        s.smaller = b;
    }
    else {
        s.greater = b;
        s.smaller = a;
    }
 
    return s;
}
 
// Driver code
int main()
{
    int x, y;
    Struct result;
 
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
 
    // The last two arguments are passed
    // by giving addresses of memory locations
    result = findGreaterSmaller(x, y);
    printf("\nThe greater number is %d and the"
           "smaller number is %d",
           result.greater, result.smaller);
 
    return 0;

 
}
