/*

Author : Zishan Khan
Problem : Split a String Into the Max Number of Unique Substrings
Difficulty : Medium
Problem Link : https://leetcode.com/problems/split-a-string-into-the-max-number-of-unique-substrings/description/?envType=daily-question&envId=2024-10-21

*/

class Solution {
public:
    void solve(int ind,int &n,string &s, unordered_map<string,int>&mp,int &maxi){
        if(ind == n){
            // the unique substrings is stored in map , so we calculate the size of map , update maxi
            int x = mp.size();
            maxi = max(maxi,x);
            return;
        }
        //this loop is to check all possible partitions
        for(int i=ind;i<n;i++){
            string temp = s.substr(ind,i-ind+1);
            //only partition if substring temp is not present
            if(mp.find(temp) == mp.end()){
                mp[temp]++;
                solve(i+1,n,s,mp,maxi);
                //backtracking
                mp[temp]--;
                if(mp[temp] == 0)mp.erase(temp);
            }
        }
    }
    int maxUniqueSplit(string s) {
        unordered_map<string,int>mp;//to store substrings
        int maxi = 1,n = s.size();
        solve(0,n,s,mp,maxi);
        return maxi;
    }
};
