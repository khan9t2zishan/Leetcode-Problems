/*

Author : Zishan Khan
Problem : Palindrome Number
Difficulty : Easy
Problem Link : https://leetcode.com/problems/palindrome-number/description/

*/

class Solution {
public:
    bool isPalindrome(int x) {
      
      string a =  to_string(x);
      string b = to_string(x);
      reverse ( begin (a), end(a));

      if( a == b){
          return true;
      }else{
          return false;
      }
    }
};
