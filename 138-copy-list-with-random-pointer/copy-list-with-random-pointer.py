class Solution:
    def __init__(self):
        self.mp  = {}
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if head is None:
            return None
        if head in self.mp:
            return self.mp[head]
        
        copy = Node(head.val)
        self.mp[head] = copy
        copy.next = self.copyRandomList(head.next)
        copy.random = self.mp.get(head.random)
        return copy