/*

Author : Zishan Khan
Problem : Count of Matches in Tournament
Difficulty : Easy
Problem Link : https://leetcode.com/problems/count-of-matches-in-tournament/description/?envType=daily-question&envId=2023-12-05

*/

class Solution {
public:
    int numberOfMatches(int n) {

      
      int count=0,M=0;

      if(n==1)
      {
          return count;
      }
      
      while(n!=2)
      {
          if(n%2==0)
          {
              M=n/2;
              n=M;
          }
          else
          {
              M=(n-1)/2;
              n=M+1;
          }
          count +=M;
          
      }
      return count+1;
    }
};
