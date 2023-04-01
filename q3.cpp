#include<iostream>
using namespace std;
class array
{
    int a[100];
    const int size = 100;
    public:
    // default constructor
    array()
    {

    }
    void setdata(int n, int index)
    {
        if(index>=size)
        {
            cout<<"array out of bound exception\n";
            exit(0);
        }
         a[index] = n;
    }

    
    // overloading [] operator
    int operator[](int index)
    {
        if(index>=size)
        {
            cout<<"array out of bound exception\n";
            exit(0);
        }
        return a[index];
    }
};
int main()
{
    array b;
    b.setdata(6,45);
    cout<<b[103];
    return 0;
}