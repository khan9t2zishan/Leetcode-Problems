/*

Author : Zishan Khan
Problem : My Calendar II
Difficulty : Medium
Problem Link : https://leetcode.com/problems/my-calendar-ii/description/?envType=daily-question&envId=2024-09-27

*/

class MyCalendarTwo {
public:
    map<int, int> eventCount;

    MyCalendarTwo() {}

    bool book(int start, int end) {
        eventCount[start]++;
        eventCount[end]--;

        int ongoingEvents = 0;
        for (auto &[time, change] : eventCount) {
            ongoingEvents += change;
            if (ongoingEvents >= 3) {
                eventCount[start]--;
                eventCount[end]++;
                return false;
            }
        }
        return true;
    }
};


/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
