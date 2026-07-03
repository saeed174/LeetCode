/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode DeleteDuplicates(ListNode head) {
        if(head == null) return null;
        else
        {
            ListNode temp = head;
            while(temp.next != null)
            {
                if(temp.next.val == temp.val)
                {
                    temp.next = temp.next.next;
                }
                else if(temp.next != null) temp = temp.next;
            }

            return head;
        }
    }
}