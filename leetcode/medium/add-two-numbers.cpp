// 🔹 Problem: Add Two Numbers
// 🔹 Platform: LeetCode
// 🔹 Date: 16 March 2026
// 🔹 Language: C++
// 🔹 Tags: Linked List, Math, Simulation
// 🔹 Approach: Digit-wise addition with carry
// ======================================================

/*
Problem:
Given two non-empty linked lists representing non-negative integers,
where digits are stored in reverse order, add the two numbers and
return the result as a linked list.
*/

/*
Example:
Input:  l1 = {2,4,3}, l2 = {5,6,4}
Output: {7,0,8}
Explanation: 342 + 465 = 807
*/

// Approach:
// Traverse both lists simultaneously.
// Add corresponding digits along with carry.
// Create new nodes for each digit of the result.

// Complexity:
// Time: O(max(n, m))
// Space: O(max(n, m))

// Edge Cases:
// - Different length lists
// - Carry remains after traversal
// - One or both lists contain 0

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);           // stack allocation (cleaner than new)
        ListNode* current = &dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy.next;
    }
};
