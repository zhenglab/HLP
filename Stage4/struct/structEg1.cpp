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
    mike.id_num=20130000+mike.id_num;
    for(int i=0;mike.name[i]!='\0';i++)
	mike.name[i]=toupper(mike.name[i]);
    cout<<mike.id_num<<" "<<mike.name<<endl;
    return 0;
}
