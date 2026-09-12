"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def canAttendMeetings(self, intervals: List[Interval]) -> bool:
        for l in range(0, len(intervals)):
            for r in range(l + 1, len(intervals)):
                if intervals[r].start >= intervals[l].start and intervals[r].start < intervals[l].end:
                    return False
        return True