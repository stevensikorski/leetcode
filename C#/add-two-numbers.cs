// @file       add-two-numbers.cs
// @author     stevensikorski
// @date       December 27 2022
// @brief      2. Add Two Numbers

public class ListNode
{
    public int val;
    public ListNode next;
    public ListNode(int val = 0, ListNode next = null)
    {
        this.val = val;
        this.next = next;
    }
}

public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) 
    {
        ListNode l3 = new ListNode(0); // Empty third list that is the result
        ListNode result = l3; // Address of the head that we will return

        int carry = 0;
        int sum = 0;
        int l1val = 0;
        int l2val = 0;

        while (l1 != null || l2 != null) // Iterate through linked list and add nodes, account for carrying over a 1 (ex: 9+8 = 7 carry 1)
        {
            l1val = (l1 != null) ? l1.val : 0;
            l2val = (l2 != null) ? l2.val : 0;
            sum = l1val + l2val + carry;
            carry = sum / 10; // (Ex: 19/10 = 1 always round down)
            l3.next = new ListNode(sum % 10); // (Ex: 19 % 10 = 9 modulo operator)

            if (l1 != null) l1 = l1.next; // Iterate to next node in linked list...
            if (l2 != null) l2 = l2.next;
            if (l3 != null) l3 = l3.next;
        }

        if (carry > 0) l3.next = new ListNode(carry); // Account for the last node in the list if it has any carry over still
        
        return result.next; // Address we saved of the head that was a placeholder, so we get the next node that represents the start of the linked list
    }
}