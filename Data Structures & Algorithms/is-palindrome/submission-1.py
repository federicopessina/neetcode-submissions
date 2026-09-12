class Solution:
    def isPalindrome(self, s: str) -> bool:
        word = s.lower()
        word = ''.join(char for char in word if char.isalnum())
        word = ''.join(word.strip())
        return word == word[::-1]