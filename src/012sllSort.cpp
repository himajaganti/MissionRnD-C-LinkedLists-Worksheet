/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/


#include <stdio.h>
#include <malloc.h>
#include<stddef.h>
struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int var, len = 0, i, j;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;

	}
	temp = head;

	for (i = 0; i < len; i++)
	{
		temp = head;
		for (j = 0; j<len - 1; j++)
		{
			if (temp->data>temp->next->data)
			{
				var = temp->data;
				temp->data = temp->next->data;
				temp->next->data = var;
			}
			temp = temp->next;
		}

	}

}





