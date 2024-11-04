/*

Author : Zishan Khan
Problem : String Compression III
Difficulty : Medium
Problem Link : https://leetcode.com/problems/string-compression-iii/description/?envType=daily-question&envId=2024-11-04

*/

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int cnt = 1, n = word.size();
        char ch = word[0];
        for(int i=1;i<n;i++){
            if(word[i] == ch && cnt < 9)cnt++;
            else{
                comp.push_back(cnt+'0');
                comp.push_back(ch);
                ch = word[i];
                cnt = 1;
            }
        }
        comp.push_back(cnt+'0');
        comp.push_back(ch);
        return comp;
    }
};
