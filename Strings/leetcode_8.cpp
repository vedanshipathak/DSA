// conver string to integer generate atoi function
// // implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

// The algorithm for myAtoi(string s) is as follows:

// Whitespace: Ignore any leading whitespace (" ").
// Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity is neither present.
// Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
// Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.
// Return the integer as the final result.


// APPROACH
// ignore ny white space if found and after the white spaces check for the sign if neg the sign will get multipies in the ans
// now check for the rest if the remaining part is digit add it to the ans
// in the end check if they over flowor not ie if they exceed the int max then return intmax else if int min se km so int min o or in the end return the ans
// do till they are the digits if they encounter the character stop their only 
#include<bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
   int i=0;//for traversing the str
   int sign=1;//for sign
   int ans=0;
   while(s[i]==' ')
   i++;
   if(s[i]=='+'||s[i]=='-')
   {
   sign=(s[i]=='-')?-1:1;
   i++;
   }
   while(i<s.length() && isdigit(s[i]))
   {
    ans=ans*10+(s[i]-'0');
    if(ans*sign>INT_MAX)
    return INT_MAX;
    if(ans*sign<INT_MIN)
    return INT_MIN;

   }
   return sign*ans;
}
int main()
{
  //test cases
  string s="  -042";
  cout<<myAtoi(s)<<endl;
}