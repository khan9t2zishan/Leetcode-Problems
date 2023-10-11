/*

Author : Zishan Khan
Problem : Reverse Integer
Difficulty : Easy
Problem Link : https://leetcode.com/problems/reverse-integer/

*/

class Solution {
public:
    int reverse(int x) {

      long double rem,rev=0;
      while(x!=0)
      {
      rem=x%10;
      rev=rem+rev*10;
      x=x/10;
      }
      long double min= pow(-2,31);
      long double max=pow(2,31)-1;
      if(rev>=min && rev<=max)
       return rev;
      else
       return 0;
    }
};
