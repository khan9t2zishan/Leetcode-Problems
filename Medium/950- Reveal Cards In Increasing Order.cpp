/*

Author : Zishan Khan
Problem : Reveal Cards In Increasing Order
Difficulty : Medium
Problem Link : https://leetcode.com/problems/reveal-cards-in-increasing-order/?envType=daily-question&envId=2024-04-10

*/
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        int n = deck.size();
        std::sort(deck.begin(), deck.end());
        std::deque<int> st;
        st.push_front(deck[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            st.push_front(st.back());
            st.pop_back();
            st.push_front(deck[i]);
        }
        std::vector<int> revealed;
        for (int i = 0; i < n; i++) {
            revealed.push_back(st.front());
            st.pop_front();
        }
        return revealed;
    }
};
