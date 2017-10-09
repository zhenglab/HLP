#include <iostream>
using namespace std;
struct student
{
    int id_num;
    char name[10];
};
student newone()
{
    student one={20130123,{'M','I','K','E','\0'}};
    return one;
}
int main()
{
    student mike=newone();
    cout<<mike.id_num<<" "<<mike.name<<endl;
    return 0;
}
