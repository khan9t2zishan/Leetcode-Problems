/*

Author : Zishan Khan
Problem : Excel Sheet Column Title
Difficulty : Easy
Problem Link : https://leetcode.com/problems/excel-sheet-column-title/description/

*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
     
     string ans="";

     while(columnNumber!=0)
     {
         int offset = (columnNumber-1)%26;
         ans = char(int('A')+offset) + ans;
         columnNumber = (columnNumber-1)/26;
     }
       
       return ans;
        
    }
};
