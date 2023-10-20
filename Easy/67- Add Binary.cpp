/*

Author : Zishan Khan
Problem : Add Binary
Difficulty : Easy
Problem Link : https://leetcode.com/problems/add-binary/description/

*/

class Solution {
public:
    string addBinary(string a, string b) {
     int l,i=0,carry=0;
     string sum;
     int len_a=a.size();
     int len_b=b.size();
     string ans;
     while(i<len_a || i<len_b || carry!=0)
     {
         int x=0;
         if(i<len_a && a[len_a-i-1]=='1')
         {
             x=1;
         }
         int y=0;
         if(i<len_b && b[len_b-i-1]=='1')
         {
             y=1;
         }
         ans=to_string((x+y+carry)%2)+ans;
         carry=(x+y+carry)/2;
         i++;
     }
     return ans;
    }
};
