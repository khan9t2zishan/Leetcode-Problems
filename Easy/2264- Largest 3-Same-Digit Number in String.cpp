/*

Author : Zishan Khan
Problem : Largest 3-Same-Digit Number in String
Difficulty : Easy
Problem Link : https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/?envType=daily-question&envId=2023-12-04
*/

class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        string lar="";

        for(int i=0;i<num.size();i++)
        {
            int j=i+1;
            int k=j+1;

            if(k<num.size() && num[i]==num[j] && num[j]==num[k])
            {
                ans+=num[i];
                ans+=num[j];
                ans+=num[k];

                lar=max(ans,lar);
                ans="";
            }
        }
        return lar;
    }
};
