#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int bin(int l,int r, int n, ll x)
{
 if(l>r)
 return 0;
 int mid=(l+r)/2;
 int i;ll p=1,sum=0;
 for(i=0;i<=n;i++)
 {
  sum=sum+p;
  p=p*mid;
 }
 if(sum==x)
 return mid;
 else if(sum>x)
 return bin(l,mid-1,n,x);
 else
  return bin(mid+1,r,n,x);
}
int main()
{
 int t;
 cin >> t;
 while(t--)
 {
  ll n;
  cin >> n;
  int i,p;
  for(i=2;i<=(int)log2(n);i++)
  {
   double d=(int)ceil(pow(1e18,1.0/i));
   p=bin(2,d,i,n);
   if(p)
   break;
  }
  if(i>(int)log2(n))
  cout << n-1 << " " << 1 << "\n";
  else
  cout << i << " " << p << "\n";
 }
}