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

bool matches(struct stack *pt, char c) {
	if (c == ')' && peek(pt) == '(') return true;
	if (c == '}' && peek(pt) == '{') return true;
	if (c == ']' && peek(pt) == '[') return true;
	return false;
}

bool contains(struct stack *pt, char c) {
	for (int i=pt->size-1; i>=0; i--) {
		if (pt->items[i] == c) return true;
	}
	return false;
}

int main() {
	
	int n;
	struct stack S;
	struct stack T;
	S.size = 0;
	scanf("%d", &n);
	fflush(stdin);

	while (n-- > 0) {
		char buf[100];
		scanf("%s", buf);
		bool inv = false;
		for (int i=0; i<strlen(buf); i++) {
			if (buf[i] == '{' && (contains(&S,'[') || contains(&S,'('))) {
				inv = true;
				break;
			}
			if (buf[i] == '[' && contains(&S,'(')) {
				inv = true;
				break;
			}
			if (matches(&S,buf[i])) pop(&S);
			else push(&S,buf[i]);
		}
		if (isEmpty(&S)) printf("Balanced\n");
		else printf("Not balanced\n");
		S.size = 0;
	}
	return 0;
}
