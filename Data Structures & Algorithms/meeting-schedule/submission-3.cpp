/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        const int num = intervals.size();
        for (int i = 0; i < num; i++) {
            for (int j = i + 1; j < num; j++) {
                if (isOverlapping(intervals[i], intervals[j])) {
                    return false;
                }
            }
        }
        return true;
    }

private:
    bool isOverlapping(Interval int1, Interval int2) {
        return int1.start < int2.end && int2.start < int1.end;
    }
};
