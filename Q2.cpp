#include<iostream>
using namespace std;
void find(int a)
{
  cout<<3.14*a*a;
  cout<<2*3.14*a;
  cout<<2*a;
}
int main()
{
  int a;
  cin>>a;
  find(a);
  return 0;
}
