#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

struct stack {
	int size;
	int items[100];
};

int isEmpty(struct stack *pt) { 
	return pt->size==0?1:0; 
}

void push(struct stack *pt, int x) { 
	if (pt->size < 100) pt->items[pt->size++] = x; 
}

int pop(struct stack *pt) { 
	if (!isEmpty(pt)) return pt->items[--pt->size]; 
	return INT_MIN;
}

int peek(struct stack *pt) { 
	if (!isEmpty(pt)) return pt->items[pt->size-1]; 
	return INT_MIN;
}

int main() {
	
	struct stack s;
	s.size=0;
	int n;
	scanf("%d", &n);
	fflush(stdin);

	char buf[100];
	int in;
	while (n-- > 0) {
		scanf("%s", buf);
		if (strcmp(buf,"push")==0) {
			scanf(" %d", &in);
			push(&s, in);
		}
		else if (strcmp(buf,"pop") == 0) {
			printf("%d\n", pop(&s));
		}
		else if (strcmp(buf,"peek") == 0) {
			printf("%d\n", peek(&s));
		}
		else if (strcmp(buf,"isEmpty") == 0) {
			printf(isEmpty(&s) ? "Empty\n" : "Not Empty\n");
		}
	}

	return 0;
}
