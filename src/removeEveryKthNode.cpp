/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/
#include<stddef.h>
#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};
struct node * func(struct node *head, int K, int len)
{
	int i = 1;
	struct node *temp;
	temp = head;
	if (K == len)
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = NULL;

	}

	else if ((K>1) && (K<len))
	{

		while (i != K - 1)
		{
			temp = temp->next; i++;
		}
		temp->next = temp->next->next;

	}
	return head;


}
struct node * removeEveryKthNode(struct node *head, int K) {
	int i = 1, len = 0, n, j = 1, s, d;
	n = K; s = K - 1;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;

	}
	if (K > len)
	{
		return head;
	}

	if (K <= 1)
	{
		return NULL;
	}

	while (K <= len)
	{
		K += n;
	}
	if (K > len)
	{
		K -= n;
	}
	n = K;
	while (K <= len)
	{

		head = func(head, K, len);
		if (K == 0) break;
		n = n - 1; d = j*s; j++;
		K = n - d;

	}
	return head;
}