#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct stack {
	int size;
	char items[100];
};

int isEmpty(struct stack *pt) { 
	return pt->size==0?1:0; 
}

void push(struct stack *pt, char x) { 
	if (pt->size < 100) pt->items[pt->size++] = x; 
}

char pop(struct stack *pt) { 
	if (!isEmpty(pt)) return pt->items[--pt->size]; 
	return 0;
}

char peek(struct stack *pt) { 
	if (!isEmpty(pt)) return pt->items[pt->size-1]; 
	return 0;
}

int main() {
	
	int n;
	struct stack s;
	s.size = 0;
	scanf("%d", &n);
	fflush(stdin);

	while (n-- > 0) {
		char buf[100];
		scanf("%s", buf);
		for (int i=0; i<strlen(buf); i++) {
			if (buf[i] == ')' && peek(&s) == '(') pop(&s);
			else push(&s,buf[i]);
		}
		if (isEmpty(&s)) printf("Balanced\n");
		else printf("Not balanced\n");
		s.size = 0;
	}
	return 0;
}
