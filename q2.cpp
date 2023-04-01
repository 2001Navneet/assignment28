#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void setdata(int a, int b)
    {
       this->a= a;
       this->b = b;

    }
     void display()
     {
        cout<<a<<"+"<<b<<"i"<<endl;
     }
};
int main()
{
    complex c1,c2;
    c1.setdata(5,4);
    c2.setdata(9,8);
    c1.display();
    c2.display();
    return 0;
}