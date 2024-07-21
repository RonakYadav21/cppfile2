#include<iostream>
using namespace std;
class car
{    
    protected:
    string model;
    string brand;
    int year;
    public:
    car(string m, string b, int y)
    {
        model = m;
        brand = b;
        year = y;
    }
        void display (){
    cout << "c model no is " << model << endl;
    cout << "c brand is " << brand << endl;
    cout << "c year  is " << year << endl;

    }
};
class derived_car:public car{
    float cost ;
    public:
    derived_car(string m,string b,int y,float cst):car(m,b,y){
        cost=cst;
    }
        void display (){
    cout << "car model no is " << model << endl;
    cout << "car brand is " << brand << endl;
    cout << "car year  is " << year << endl;
    cout << "car cost is " << cost << endl;
        }

};

int main()
{
    string model;
    string brand;
    int year;
    float cost;
     model="xc3";
     brand="bmw";
     year=2023;
     cost=900000.0;
    // car*bptr;
    // car c;
    derived_car   c1;
    // bptr=&c1;
    c1.(model,brand,year,cost);
    c1.display();
    return 0;
}