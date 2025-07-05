/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2)
    {
        if(list1 == null && list2 == null)
        {
            return null;
        }
        List<Integer> list1_arr = new ArrayList<>();
        while(list1 != null)
        {
            list1_arr.add(list1.val);
            list1 = list1.next;
        }
        while(list2 != null)
        {
            list1_arr.add(list2.val);
            list2 = list2.next;
        }
        list1_arr = list1_arr.stream()
        .sorted().collect(Collectors.toList());
        ListNode total = new ListNode();
        ListNode temp = total;
        for(int i = 0; i < list1_arr.size(); i++)
        {
            if(i == list1_arr.size() - 1)
            {
                temp.val = list1_arr.get(i);
                temp.next = null;
            }
            else
            {
                temp.val = list1_arr.get(i);
                temp.next = new ListNode();
                temp = temp.next;
            }
        }

        return total;
    }
}