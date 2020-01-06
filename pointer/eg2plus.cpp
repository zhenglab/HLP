#include <iostream>
using namespace std;

int main()
{
  int a = 100;
  char str[20] = "vision.ouc.edu.cn";
  char st[100] = "hello";
  char s[200];
  string stringEg1 = "hello";
  string stringEg2 = "vision.ouc.edu.cn | ouc.ai";
  cout<<hex<<&a<<", "<<hex<<str<<endl;
  cout<<"sizeof int: "<<sizeof(a)<<", sizeof str[20]: "<<sizeof(str)<<endl;
  cout<<"sizeof st[100]: "<<sizeof(st)<<endl;
  cout<<"sizeof s[200]: "<<sizeof(s)<<endl;
  cout<<"sizeof stringEg1: "<<sizeof(stringEg1)<<endl;
  cout<<"sizeof stringEg2: "<<sizeof(stringEg2)<<endl;

  cout<<endl;
  cout<<str<<endl;
  cout<<&str[0]<<endl;
  cout<<(char *)str<<endl;

  cout<<(double *)str<<endl;
  cout<<(float *)str<<endl;
  cout<<(bool *)str<<endl;
  cout<<(void *)str<<endl;
  cout<<&str<<endl;

  return 0;
}




/*
   The sizeof keyword gives the amount of storage, in bytes, associated with a variable or a type (including aggregate types). This keyword returns a value of type size_t.
   函数类型：在编译阶段会被函数返回值的类型取代
   指针问题：C++内存地址采用32位实地址寻址、C中segment:offset模式
   由于C++标准库中的I/O类对<<操作符重载，
   因此在遇到字符型指针的时候会将其作为字符串名进行处理，
   输出指针所指的字符串。
   通过强制类型转换让其不被认为是“字符型指针”。
   
   C编译器字节对齐：#pragma pack (n)
*/
