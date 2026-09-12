class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            for c in s:
                res += str(c)
            res += "|"
        return res

    def decode(self, s: str) -> List[str]:
        res = []
        local_res = ""
        for c in s:
            if c == '|':
                res.append(local_res)
                local_res = ""
            else:
                local_res += str(c)
        return res