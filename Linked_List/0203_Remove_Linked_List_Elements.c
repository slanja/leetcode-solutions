struct ListNode* removeElements(struct ListNode* head, int val) {
    // check if head ins't value we want to delete
    while (head != NULL && head->val == val) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
    }

    struct ListNode *curr = head;

    while (curr != NULL && curr->next != NULL) {
        if (curr->next->val == val) {
            struct ListNode *temp = curr->next;
            
            // moving to the next element
            curr->next = curr->next->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }
    return head;
}