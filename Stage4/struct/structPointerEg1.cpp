#include <iostream>
using namespace std;
struct student
{
    int id_num;
    char name[10];
};
int main()
{
    student mike={123,{'m','i','k','e','\0'}};
    student *one=&mike;
    cout<<mike.id_num<<" "<<mike.name<<endl;
    cout<<(*one).id_num<<" "<<(*one).name<<endl;
    cout<<one->id_num<<" "<<one->name<<endl;
    return 0;
}
