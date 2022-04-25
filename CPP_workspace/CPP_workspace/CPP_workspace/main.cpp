#include <iostream>
using namespace std;

float add(float a=0,float b=0); // default values only in prototype
string add(string a="",string b="");

int main()
{

  cout << add(1,1.1) << endl;
  cout << add("Jaydip"," Patel") << endl;
  //cout<<add()<<endl; //ambiguous error
  
  return 0;
}

float add(float a,float b)
{
  return a + b ;  
}
string add(string a,string b)
{
    return a + b;
}