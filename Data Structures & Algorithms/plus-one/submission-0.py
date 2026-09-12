class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        str_digits = ""
        for digit in digits:
            str_digits += str(digit)

        int_digits = int(str_digits)
        print("int_digits:" + str(int_digits))
        int_digits += 1
        print("int_digits +1:" + str(int_digits))
        
        str_digits_2 = str(int_digits)

        result = []
        for str_digit in str_digits_2:
            result.append(int(str_digit))

        return result