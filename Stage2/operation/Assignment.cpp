#include<iostream>
using namespace std;

int main()
{
//    int a,b,c=5;
//    int a=b=c=5;
    int a,b,c;
    a=b=c=5;
    cout<<a<<" "<<b<<" "<<c<<endl;
    a=(b=4)+(c=6);
    cout<<a<<" "<<b<<" "<<c<<endl;
    a=12;
    a+=a-=a*a;
    cout<<a<<endl;

    cout<<endl;

    //两边类型不同时进行类型转换
    int int_i=64.12345;
    char char_i=int_i;
    float float_i=char_i;
    bool bool_i=float_i;
    cout<<showpoint<<int_i<<" "<<char_i<<
	" "<<float_i<<" "<<bool_i<<endl;

    cout<<endl;

    //长数赋给短数截取长数的低n位送给短数
    char char_a=' ';
    int int_a=0x361;
    cout<<hex<<int_a<<endl;
    char_a=int_a;
    cout<<char_a<<endl;

    cout<<endl;

    long int long_i=0x2AAAAAAA;
    cout<<dec<<long_i<<endl;
    short short_j=long_i;
    cout<<hex<<short_j<<endl;
    cout<<dec<<short_j<<endl;

    cout<<endl;

    //短数赋给长数保持不变
    short int x=-1;
    int y=x;
    cout<<x<<" "<<y<<" "<<endl;

    cout<<endl;

    short short_i=-123;
    cout<<hex<<short_i<<endl;
    int int_j=short_i;
    cout<<hex<<int_j<<endl;
    cout<<dec<<int_j<<endl;

    cout<<endl;

    //符号位的赋值处理直接搬运
    unsigned int unsigned_int_i=0xAAAAAAAA;
    cout<<unsigned_int_i<<endl;
    signed int signed_int_j=unsigned_int_i;
    cout<<hex<<signed_int_j<<endl;
    cout<<dec<<signed_int_j<<endl;
    
    cout<<endl;
    //表达式
    int i=0;
    cout<<(i=10)<<endl;
    cout<<(i=i+i)<<endl;

    return 0;
}
