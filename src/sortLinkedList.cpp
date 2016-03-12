/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
#include <malloc.h>
#include<stddef.h>
struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head){
	int var, len = 0, i, j;
	struct node *temp;
	temp = head;
	if (temp == NULL)
	{
		return NULL;
	}
	while (temp != NULL)
	{
		len++;
		temp = temp->next;

	}
	temp = head;

	for (i = 0; i < len; i++)
	{
		temp = head;
		for (j = 0; j<len- 1; j++)
		{
			if (temp->num>temp->next->num)
			{
				var = temp->num;
				temp->num = temp->next->num;
				temp->next->num = var;
			}
			temp = temp->next;
		}

	}
	return head;
}





