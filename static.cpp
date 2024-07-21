#include <iostream>
using namespace std;
class student
{
    int id;
     static int count;
// on the place of static we can also write as count =0
public:
    //  void count ();
    void setdata();
    void getdata()

    {
        cout << " the id of student is  " << id <<"this is student  no "<< count<<endl;
    }
};
void student ::setdata()
{
    cout << " the id of the student  is " << endl;
    cin >> id;
    count++;
}
int student:: count;
int main()
{
    student s1, s2;
    s1.setdata();
    s1.getdata();   
    s2.setdata();
    s2.getdata();
    return 0;
}