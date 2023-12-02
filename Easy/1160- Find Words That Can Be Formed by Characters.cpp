/*

Author : Zishan Khan
Problem : Find Words That Can Be Formed by Characters
Difficulty : Easy
Problem Link : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/?envType=daily-question&envId=2023-12-02

*/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> charCount(26, 0);
        
        for(char &ch : chars) {
            charCount[ch-'a']++;
        }
        
        int result = 0;
        
        for(string &word : words) {
            
            vector<int> wordCount(26, 0);
            for(char &ch : word) {
                wordCount[ch-'a']++;
            }
            
            bool ok = true;
            for(int i = 0; i < 26; i++) {
                if(wordCount[i] > charCount[i]) {
                    ok = false;
                    break;
                }
            }
            
            if(ok)
                result += word.size();
            
        }
        
        return result; 
    }
};
