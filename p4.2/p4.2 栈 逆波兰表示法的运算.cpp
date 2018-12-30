#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top=0,P[1000];

void push(int x) {
	P[++top]=x;	
}

int pop() {
	top--;
	return P[top+1];
}

int main() 
{
	char s;
	int a,b;
	while(scanf("%s",&s)!=EOF) {
		if(s=='+') {
			a=pop();
			b=pop();
			push(b+a);
		}
		else if(s=='-') {
			a=pop();
			b=pop();
			push(b-a);
		}
		else if(s=='*') {
			a=pop();
			b=pop();
			push(b*a);
		}
		else {
			push(atoi(&s));
		}
	}
	printf("%d",pop());
	return 0;
}

