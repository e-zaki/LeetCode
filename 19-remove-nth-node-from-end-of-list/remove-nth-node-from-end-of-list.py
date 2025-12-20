class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        first = head
        later = dummy
        while n > 0:
            first = first.next
            n -= 1

        while first:
            later = later.next
            first = first.next

        later.next = later.next.next
        return dummy.next