/*

Author : Zishan Khan
Problem : Find All Duplicates in an Array
Difficulty : Medium
Problem Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/?envType=daily-question&envId=2024-03-25

*/

class Solution {
    std::vector<int> numCount;
public:

    vector<int> findDuplicates(vector<int>& n)
    {
        vector<int> duplicates;
        
        for(int i=0;i<n.size();i++)
        { 
            // evaluate index of selected element if array would have been sorted..
            int indexOfElem = abs(n[i]) - 1;
            
            // negate the element
            n[indexOfElem] = - n[indexOfElem];
            
            // if this element is positive means double negation had happened which 
            // means we editied this element twice.
            if(n[indexOfElem]>0)
                duplicates.push_back(indexOfElem+1);
            
        }
        return duplicates;
    }
};
