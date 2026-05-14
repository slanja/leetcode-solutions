struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *next = NULL;

    while (curr != NULL) {
        next = curr->next; // Store the next node before changing the current node's next pointer
        curr->next = prev; // Reverse the current node's pointer to point to the previous node
        prev = curr;       // Move the previous pointer to the current node
        curr = next;       // Move to the next node in the original list (which is stored in next)
    }
    return prev;
}