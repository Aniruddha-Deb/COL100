#include <stdlib.h>
#include <stdio.h>

typedef struct List {
	int *A;
	int cap;
	int head;
} List;

List* new_list(int cap) {
	List *l = malloc(sizeof(List));
	l->cap = cap;
	l->A = malloc(sizeof(int)*l->cap);
	l->head = 0;
	return l;
}

void destroy_list(List *l) {
	free(l->A);
	free(l);
}

void remove_from_list(List *l, int e) {
	int j = 0;
	for (int i=0; i<l->head; i++) {
		if (i == e) continue;
		else l->A[j++] = l->A[i];
	}
	l->head--;
}

void push_to_list(List *l, int a) {
	if (l->head >= l->cap) {
		l->A = realloc(l->A, sizeof(int)*l->cap*2);
		l->cap = l->cap*2;
	}
	l->A[l->head++] = a;
}

void insert_into_list(List *l, int e, int i) {
	push_to_list(l,l->A[l->head-1]);
	for (int j=l->head-2; j>i; j--) {
		l->A[j] = l->A[j-1];
	}
	l->A[i] = e;
}

void print_list(List *l) {
	for (int i=0; i<l->head; i++) {
		printf("%d ", l->A[i]);
	}
	printf("\n");
}
