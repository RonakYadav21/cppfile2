#include <iostream>
using namespace std;
class product
{
private:
    int code;
    int cost;
public:
    void setdata(int cd,int cst);
    void displaydata()
    {
        cout << "the code of the item is " << code << endl;
        cout << "the cost of the item is " << cost << endl;
    }
};
void product::setdata(int cd,int cst)
{

    cost=cst;
    code=cd;
}

int main()
{
    int a,b,i;
    product *ptr= new product[3];
    product *ptrtemp=ptr;
    for(i=1;i<=3;i++){
    cout<<"enter the value of code and cost"<<endl;
    cin>>a>>b;
    (*ptr).setdata(a,b);
    ptr++;
    }
    for(i=1;i<=3;i++){
    ptrtemp->displaydata();
    ptrtemp++;
    }
    return 0;
}