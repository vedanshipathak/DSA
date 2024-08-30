#include<bits/stdc++.h>
using namespace std;
int sumtoDig(int n)
{
  //base case smallest possible ans
  if(n>=0 && n<=9)
  return n;
  int d=n%10;
  return d+sumtoDig(n/10);
}
int prodtoDig(int n)
{
  //base case smallest possible ans
  if(n>=0 && n<=9)
  return n;
  int d=n%10;
  return d*sumtoDig(n/10);
}
int main()
{
  cout<<sumtoDig(12342343);
  cout<<endl;
  cout<<prodtoDig(0234);
  return 0;
}