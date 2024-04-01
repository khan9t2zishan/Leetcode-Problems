/*

Author : Zishan Khan
Problem : Length of Last Word
Difficulty : Easy
Problem Link : https://leetcode.com/problems/length-of-last-word/solutions/?envType=daily-question&envId=2024-04-01

*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int siz=s.size(),kount=0,flag=0;
        for(int i=siz-1;i>=0;i--){
            if(s[i]==' '&&flag)break;
            if(s[i]!=' '){
                flag=1;
                kount++;
            }
        }
        return kount;
    }
};
