#include<bits/stdc++.h>
using namespace std;
int reverse(int x)
{
  int sign=1;
  if(x<0)
  sign=-1;
  else
  sign=1;
  string s=to_string(abs(x));
  reverse(s.begin(),s.end());
  if(stoi(s)>=INT_MAX||stoi(s)<=INT_MIN)
  return 0;
  return stoi(s)*sign;


}
int main()
{
  int x=-120;
  cout<<reverse(x);
  return 0;
}