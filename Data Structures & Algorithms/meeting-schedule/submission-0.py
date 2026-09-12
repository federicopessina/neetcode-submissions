"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def canAttendMeetings(self, intervals: List[Interval]) -> bool:
        # sort by start time
        intervals.sort(key=lambda tup: tup.start, reverse=False)
        # check if intervals are conflicting
        len_intervals = len(intervals)
        for i in range(len_intervals - 1):
            if intervals[i].end > intervals[i + 1].start:
                return False
        return True