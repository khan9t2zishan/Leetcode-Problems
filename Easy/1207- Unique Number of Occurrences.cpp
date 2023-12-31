/*

Author : Zishan Khan
Problem : Unique Number of Occurrences
Difficulty : Easy
Problem Link : https://leetcode.com/problems/unique-number-of-occurrences/description/

*/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         vector<int> ans;
         int size=arr.size();
         sort(arr.begin(),arr.end());
         int i=0;
         while(i<size)
          {
            int count=1;
             for(int j=i+1;j<size;j++)
             {  
               if(arr[i]==arr[j])
               {
               count++;
               }
               else
                 {
                 break;
                 }
        }
        ans.emplace_back(count);
        i=i+count;
     }
          size=ans.size();
     sort(ans.begin(),ans.end());
     for(i=0;i<size-1;i++)
     {
        if(ans[i]==ans[i+1])
        {
        return false;
        }
     }  
     return true;
    }
};
