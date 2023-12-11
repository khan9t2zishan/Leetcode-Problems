/*

Author : Zishan Khan
Problem : Element Appearing More Than 25% In Sorted Array
Difficulty : Easy
Problem Link : https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/?envType=daily-question&envId=2023-12-11

*/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
          int n = arr.size();
        int freq = n/4;
        
        for(int i = 0; i<n-freq; i++) {
          
            if(arr[i] == arr[i+freq]) {
                return arr[i];
            }   
          
        }
        return -1;
    }
};
