class Solution:
    def isValid(self, s: str) -> bool:
        result = [] # stack
        for p in s:
            if len(result) < 1:
                result.append(p)
                continue
            if result[-1] == '[' and p == ']':
                result.pop()
            elif result[-1] == '{' and p == '}':
                result.pop()
            elif result[-1] == '(' and p == ')':
                result.pop()
            else:
                result.append(p)
            print('p: ' + p)
            print('result: ' + str(result))
        return len(result) == 0