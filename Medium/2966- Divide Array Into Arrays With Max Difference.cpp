/*

Author : Zishan Khan
Problem : Divide Array Into Arrays With Max Difference
Difficulty : Medium
Problem Link : https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/?envType=daily-question&envId=2024-02-01

*/

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& v, int k) {
        vector<vector<int>>ans;
        int n=v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<n/3;i++) {
            int a=v[i*3+0];
            int b=v[i*3+1];
            int c=v[i*3+2];
            if(c-a<=k) {
                vector<int>t;
                t.push_back(a);
                t.push_back(b);
                t.push_back(c);
                ans.push_back(t);
            } else {
                ans.clear();
                return ans;
            }
        }
        return ans;
    }
};
