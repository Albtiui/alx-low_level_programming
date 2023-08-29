#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the nodes where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;
if (!head)
return (NULL);
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
fast = fast->next;
slow = slow->next;
}
return (fast);
}
}
return (NULL);
}
