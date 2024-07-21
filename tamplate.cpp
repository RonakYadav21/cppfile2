#include<iostream>
using namespace std;
template<class T>
class complex{
    T real;
    T img;
    public:
    complex(T r,T i){
        real=r;
        img=i;
    }
    void print();
    
};
 template<class T> void  complex<T>:: print(){
    cout<<real<<"+i"<<img<<endl ;
}
int main(){
    complex<int>c(5 ,7);
    c.print();
    complex<float>c1(5.5 ,7.1);
    c1.print();

    return 0;

}