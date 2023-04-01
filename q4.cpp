//create a student class and overload new and delete operator as a member function of the class
#include<iostream>
#include<stdlib.h>
using namespace std;
class student
{
    string name;
    int age;
    public:
    student()
    {
        cout<<"default constructor is called\n";
    }
    student(string n ,int a)
    {
        this->name = n;
        this->age = a;
    }
    void display()
    {
        cout<<"\nname = "<<name;
        cout<<"\n age = "<<age;

    }
  
  // overloading new and delete operator
  void* operator new(size_t size)
  {
    cout<<"overloading new operator with size = "<<size<<endl;
    void *p = malloc(size);
    return p;
  }
  // overloadding delete operator
  void  operator delete(void *p)
  {
    cout<<"\noverloading delete operator\n";
    free(p);
  }
};
int main()
{
    student *p = new student("navneet",21);
    p->display();
    delete p;
    return 0;
}