#include<iostream>
using namespace std;
void find(int a)
{
  if(a%2) cout<<"Odd"
   else cout<<"Even";
}
int main()
{
  int a;
  cin>>a;
  find(a);
  return 0;
}
