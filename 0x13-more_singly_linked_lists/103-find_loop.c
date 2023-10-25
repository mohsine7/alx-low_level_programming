#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list (if it exists).
 * @head: A pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow_ptr = head;
    listint_t *fast_ptr = head;

    if (head == NULL)
        return NULL;

    while (fast_ptr != NULL && fast_ptr->next != NULL)
    {
        slow_ptr = slow_ptr->next;       // Move the slow pointer one step.
        fast_ptr = fast_ptr->next->next; // Move the fast pointer two steps.

        // If there's a loop, the slow and fast pointers will eventually meet.
        if (slow_ptr == fast_ptr)
        {
            slow_ptr = head; // Reset the slow pointer to the head.
            while (slow_ptr != fast_ptr)
            {
                slow_ptr = slow_ptr->next;
                fast_ptr = fast_ptr->next;
            }
            return fast_ptr; // Return the starting node of the loop.
        }
    }

    return NULL;
}
