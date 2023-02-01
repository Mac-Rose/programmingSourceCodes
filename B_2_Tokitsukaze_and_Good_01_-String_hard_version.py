# """
# This is the interface that allows for creating nested lists.
# You should not implement it, or speculate about its implementation
# """
#class NestedInteger:
#    def isInteger(self) -> bool:
#        """
#        @return True if this NestedInteger holds a single integer, rather than a nested list.
#        """
#
#    def getInteger(self) -> int:
#        """
#        @return the single integer that this NestedInteger holds, if it holds a single integer
#        Return None if this NestedInteger holds a nested list
#        """
#
#    def getList(self) -> [NestedInteger]:
#        """
#        @return the nested list that this NestedInteger holds, if it holds a nested list
#        Return None if this NestedInteger holds a single integer
#        """

class NestedIterator:
    def _init_(self, nestedList):
        self.cnt=0
        l1=[]
        def solve(l, i):
            if i == len(l):
                return
            if type(l[i]) == list:
                solve(l[i], 0)
            else:
                l1.append(l[i])
            solve(l, i + 1)

        solve(nestedList, 0)
        self.l=l1.copy()
        self.n = len(self.l)
        # print(self.l)
    def next(self):
        self.cnt += 1
        return self.l[self.cnt-1]
    def hasNext(self):
        if self.cnt<self.n:
            return True
        else:
            return False
# Your NestedIterator object will be instantiated and called as such:
i, v = NestedIterator(), []
while i.hasNext():
    v.append(i.next())
print(v)