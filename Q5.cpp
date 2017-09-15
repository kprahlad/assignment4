#include<iostream>
using namespace std;
void prime(int n)
{
  int i=1,s=0;
  while(i<=n)
  {
    if(!(n%i)) s++;
    i++;
  }
  if(s==2) cout<<"Prime";
}
void arm(int n)
{
  int i,s=0,m=0;
  i=n;
  while(i)
  {
      m++;
      i/=10;
  }
  i=n;
  while(n)
  {
    s+=pow(n%10,m);
    n/=10;
  }
  if(s==i) cout<<"Armstrong";
}
void per(int n)
{
  int i=1,s=0;
  while(i<n)
  {
    if(n%i==0) s+=i;
    i++;
  }
  if(s==n) cout<<"Perfect";
}
int main()
{
  int n;
  cin>>n;
  prime(n);
  arm(n);
  per(n);
  return 0;
}
