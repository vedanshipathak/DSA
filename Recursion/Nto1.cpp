#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
  if(n==0)
  return;
  cout<<n<<" ";// to pint 5 4 3 2 1
  func(n-1);
  cout<<n<<" ";//to print 1 2 3 4 5 when popping out of the stack
}
int main()
{
  int n=5;
  func(n);
  return 0;
}