/*

Author : Zishan Khan
Problem : K-th Smallest in Lexicographical Order
Difficulty : Hard
Problem Link : https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/description/?envType=daily-question&envId=2024-09-22

*/

class Solution {
private:
    int getReqNum(long a,long b,long &n){
        int gap=0; 
        while(a <= n){
            gap += min(n+1,b)-a;
            a*=10;
            b*=10;
        }
        return gap;
    }
public:
    int findKthNumber(long n, int k) {
        long num = 1;
        for(int i=1; i<k;){
            int req = getReqNum(num,num+1,n);
            if(i+req <= k){
                i+=req;
                num++;
            }else{
                i++;
                num *= 10;
            }
        }
        return num;
    }
};
