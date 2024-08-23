/*

Author : Zishan Khan
Problem : Fraction Addition and Subtraction
Difficulty : Medium
Problem Link : https://leetcode.com/problems/fraction-addition-and-subtraction/description/?envType=daily-question&envId=2024-08-23

*/

#include <string>
#include <vector>
class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0, denominator = 1;
        int i = 0, n = expression.size();

        while (i < n) {
            int sign = 1;
            if (expression[i] == '+' || expression[i] == '-') {
                if (expression[i] == '-') sign = -1;
                i++;
            }

            int num = 0;
            while (i < n && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            num *= sign;

            i++;

            int den = 0;
            while (i < n && isdigit(expression[i])) {
                den = den * 10 + (expression[i] - '0');
                i++;
            }

            numerator = numerator * den + num * denominator;
            denominator *= den;

            int gcdVal = gcd(abs(numerator), denominator);
            numerator /= gcdVal;
            denominator /= gcdVal;
        }

        return to_string(numerator) + "/" + to_string(denominator);
    }
};