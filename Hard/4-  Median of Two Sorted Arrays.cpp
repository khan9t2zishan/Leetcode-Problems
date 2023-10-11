/*

Author : Zishan Khan
Problem : Median of Two Sorted Arrays
Difficulty : Hard
Problem Link : https://leetcode.com/problems/median-of-two-sorted-arrays/description/

*/

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m=nums1.length();
         int n=nums2.length();
         int a[]=new int [m+n];
         int i=0,j=0,k=0;
         while(i<m && j<n)
         {
             if(nums[i]<nums[j])
             {
                 a[k]=nums1[i];
                 i++;
             }
             else
             {
                 a[k]=nums2[j];
                 j++;
             }
             k++;
             
             while(i<m)
             {
                 a[k]=nums[i];
                 k++;
                 i++;
             }
             while(j<n)
             {
                 a[k]=nums[j];
                 k++;
                 j++;
             }

             if((m+n)%2!=0)
             {
                 return a[(m+n)/2];
             }
             else
             {
                 int x=(m+n)/2;
                 double p=a[x];
                 double q=a[x-1];
                 return (p+q)/2;

             }
    }
}
