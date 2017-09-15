#include<iostream>
using namespace std;
void arm(int n)
{
  int i=1,s=0;
  while(i<=n)
  {
    int m=i,k=0;
    while(m)
    {
        m/=10;
        k++;
    }
    m=i;
    s=0;
    while(m)
    {
      s+=pow(m%10,k);
      m/=10;
     }
    if(s==i) cout<<s<<" is Armstrong";
    i++;
   }
}
int main()
{
  int n;
  cin>>n;
  arm(n);
  return 2;
}
