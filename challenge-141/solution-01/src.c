/*
* Challenge 141
* Linked list circle judgement
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Definition for singly-linked list.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int main(int argc, char const *argv[])
{

	/*Solution */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    while( fast != NULL && fast->next != NULL )
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return 0;
}

