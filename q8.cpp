#include<iostream>
using namespace std;
class coords3D
{
    double x,y,z;
    public:
    coords3D()
    {
        x=y=z=0;
    }
    coords3D(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void display()
    {
        cout<<"\nx = "<<x;
         cout<<"\ny = "<<y;
          cout<<"\nz = "<<z;
    }
    // overloading comma operator
    coords3D operator,(coords3D obj)
    {
        coords3D tmp;
        tmp.x = obj.x;
        tmp.y = obj.y;
        tmp.z = obj.z;
        return tmp;
    }
};
int main()
{
    double x,y,z;
    coords3D c1(1,3,4);
    coords3D c2(3,4,5);
    coords3D c3;
    c3 = (c1,c2); // c1.operator,(c2);
    c3.display();
     
     cout<<endl;
    
     return 0;
}