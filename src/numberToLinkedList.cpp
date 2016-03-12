/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/




#include <stdio.h>
#include <malloc.h>
#include<stddef.h>
struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {

	struct node *temp, *newnode, *head = NULL;
	int rem = 0, r;
	if (N<0)
	{
		N = -1 * N;
	}
	
	while (N != 0)
	{
		r = N % 10;
		rem = rem * 10 + r; 
		N = N / 10;
	}
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->num = (rem % 10);
	newnode->next = NULL;
	head = newnode;
	temp = head;
	rem = rem / 10;
	while (rem!= 0)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode->num = (rem % 10);
		newnode->next = NULL;
		temp->next = newnode;
		temp = temp->next;
		rem = rem / 10;

	}
	return head;

}







