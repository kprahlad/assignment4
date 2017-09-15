#include<iostream>
using namespace std;
void find(int a,int b)
{
  a>b? cout<<a:cout<<b;
}
int main()
{
  int a,b;
  cin>>a>>b;
  find(a,b);
  return 0;
}
