#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
  if(n==0)
  return n;
  int d=n%10;
  if(d==0)
   return 1+func(n/10);
   else
  return func(n/10);
}

// return func()
int main()
{
  int c=0;
  int n=120340;
  cout<<func(n);

}