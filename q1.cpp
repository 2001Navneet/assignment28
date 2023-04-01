#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex()
    {

    }
    // void setdata(int a, int b)
    // {
    //     this->a = a;
    //     this->b = b;
    // }
    // overloading >> operator
    friend void operator>>(istream &in, complex &t)
    {
        cout<<"enter the value of a =\n";
        in>>t.a;
        cout<<"enter the value of b = \n";
        in>>t.b;
    }
    friend void operator<<(ostream &out, complex &t)// overloaded << operator
    {
        out<<"\na = "<<t.a<<"\nb = "<<t.b<<endl;
    }

};
int main()
{
    complex t;
      cin>>t;
    cout<<t;
    return 0;

}