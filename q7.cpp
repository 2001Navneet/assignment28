#include<iostream>
using namespace std;
class integer
{
    int i;
    public:
    integer(int i)
    {
        this->i = i;
    }
    int operator!()
    {
        return -i;
    }
};
int main()
{
    integer x= 80;
    cout<<!x;
    return 0;
}