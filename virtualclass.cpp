#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;

public:
    void setdata()
    {
        cout << "enter the rollno of the student ";
        cin >> rollno;
    }
    void display()
    {
        cout << "roll no of the student is " << rollno << endl;
    }
};

class test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    float set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print()
    {
        cout << "maths marks are" << maths << endl;
        cout << "physics marks are" << physics << endl;
    }
};
class sport : virtual public student
{
    // protected:
public:
    float score;

    // public:
    void score_data()
    {
        cout << "enter  the score of a student " << endl;
        cin >> score;
    }
    void print_score()
    {
        cout << "score is " << score << endl;
    }
};
class result : public test, public sport
{
    float total;

public:
    void display_data()
    {

        total = maths + physics;
        // display();
        // print();
        //  print_score();
        cout << "total is " << total;
    }
};
int main()
{
    result r;
    r.setdata();
    // r.display();
    r.set_marks(78.8, 90.8);
    r.score_data();
    r.display();
    r.print();
    r.print_score();

    r.display_data();
    return 0;
}
