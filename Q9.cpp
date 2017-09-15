#include<iostream>
using namespace std;
void per(int n)
{
  int i=1,s=0;
  for(int m=1;m<=n;m++)
  {
    i=1;
    s=0;
    while(i<m)
    {
      if(m%i==0) s+=i;
      i++;
    }
    if(s==m) cout<<m<<" is Perfect";
  }
}
int main()
{
  int n;
  cin>>n;
  per(n);
  return 1;
}
