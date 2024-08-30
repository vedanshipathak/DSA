#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
  if(n%10==n)
  return n;
  return 10*reverse(n/10)+(n%10);
}
int main()
{
  int n=1234;
  cout<<reverse(n);
  return 0;
}