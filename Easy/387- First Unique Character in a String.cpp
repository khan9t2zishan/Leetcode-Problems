/*

Author : Zishan Khan
Problem : First Unique Character in a String
Difficulty : Easy
Problem Link : https://leetcode.com/problems/first-unique-character-in-a-string/description/?envType=daily-question&envId=2024-02-05

*/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
		for(char c : s) v[c - 'a']++;
		for(int i = 0; i < s.length(); i++){
			if(v[s[i] - 'a'] == 1) return i;
		}
		return -1;
    }
};
