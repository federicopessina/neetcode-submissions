class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        container = list()
        # add chars from t to container
        for char in t:
            container.append(char)

        #print("container = " + str(container)) # DEBUG
        # parse s
        for char in s:
            if char in container:
                container.remove(char)
                #print("char in s = " + str(char))
                #print("container removed = " + str(container))
            else:
                return False
        # end of parsing of s 
        if container == []:
            return True
        return False