/*

Author : Zishan Khan
Problem : Find First Palindromic String in the Array
Difficulty : Easy
Problem Link : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/submissions/1174214654/?envType=daily-question&envId=2024-02-13

*/


class Solution {
public:
    bool check(string s){
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j])i++,j--;
            else return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(check(words[i]))return words[i];
        }
        return "";
    }
};
