#include <iostream>
using namespace std;
int excel_number=0;
void excel_count(float score)
{
    if(score>85)
    {
	excel_number++;
    }
}
int main()
{
    float score=0;
    for(int i=0;i<5;i++)
    {
	cin>>score;
	excel_count(score);
    }
    cout<<endl<<excel_number<<endl;
    return 0;
}
