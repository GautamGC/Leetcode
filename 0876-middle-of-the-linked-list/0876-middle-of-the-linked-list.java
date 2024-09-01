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
    public ListNode middleNode(ListNode head) {
        ListNode current=head;
        int c=0;
        while(current!=null){
            c++;
            current=current.next;
        }
        c=c/2;
        current=head;
        for(int i=0;i<c;i++){
            current=current.next;
        }
        return current;
    }
}