#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int index;
	struct node * next;
} List;

List * allPeople(List * h, int n) {
	int i;
	List *p = h, *q;

	q = p;

	for(i = 2; i <= n; i++) {
		p->next = (List*) malloc(sizeof(List));
		p->next->index = i;
		p->next->next = q;
		p = p->next;
	}

	return q;
}

int numPeople(List * h) {
	List * p = h;
	int count;

	do {
		count++;
		p = p->next;
	} while(p != h);

	return count;
}

List * theLast(List * head, int s) {
	List *p, *q;
	while(numPeople(p) > 1) {
		
	}
}

List * freeAll(List * h) {
	List * p = h;
	List * q = p->next;

	do {
		free(p);
		p = q;
		q = q->next;
	} while(q != NULL);
}

void printList(List * h) {
	List * p = h;

	do {
		printf("%d ", p->index);
		p = p->next;
	} while(p != h);
	printf("\n");

	return NULL;
}

int main() {
	List * head;
	int cases, nPeople, steps, i;

	scanf("%d", &cases);

	for(i = 1; i <= cases; i++) {
		head = (List*) malloc(sizeof(List));

		head->index = 1;
		head->next = head;

		scanf("%d %d", &nPeople, &steps);

		head = allPeople(head, nPeople);

		head = theLast(head, steps);

		printf("Case %d: %d\n", i, head->index);
		head = freeAll(head);
	}
	//printList(head);

	free(head);

	return 0;
}
