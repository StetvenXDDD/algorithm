#include <cstdio>
#include <cstdlib>
#include <cstring>
struct Node {
	int key;
	Node *prev,*next;
};

Node *nil;

void init() {
	nil=(Node *)malloc(sizeof(Node));
	nil->next=nil;
	nil->prev=nil;
}

void insert(int key) {
	Node *x=(Node *)malloc(sizeof(Node));
	x->key=key;
	x->next=nil->next;
	nil->next->prev=x;
	x->prev=nil;
	nil->next=x;
}

Node* listSearch(int key) {
	Node *cur=nil->next;
	while(cur!=nil&&cur->key!=key) {
		cur=cur->next;
	}
	return cur;
}
void deleteNode(Node *x) {
	if(x==nil) return;
	x->prev->next=x->next;
	x->next->prev=x->prev;
	free(x);
}

void deleteFirst() {
	deleteNode(nil->next);
}

void deleteLast() {
	deleteNode(nil->prev);
}

void deleteKey(int key) {
	deleteNode(listSearch(key));
}

void Print() {
	int isf=0;
	Node *t=nil->next;
	while(t!=nil) {
		if(isf++>0) {
			printf(" ");
		}
		printf("%d",t->key);
		t=t->next;
	}
}

void deter(char a[],int key) {
	if(a=="insert") {
		insert(key);
	}
	else if(a=="delete") {
		deleteKey(key);
	}
	else if(a=="deleteFirst") {
		deleteFirst();
	}
	else {
		deleteLast();
	}
}

int main()
{
	int n,i,key;
	char a[20];
	init();
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%s%d",a,&key);
		if(a[0]=='i') {
			insert (key);
		}
		else if(a[0]=='d') {
			if(a[6]=='F') {
				deleteFirst();
			}
			else if(a[6]=='L') {
				deleteLast();
			}
			else if(a[6]=='\0') {
				deleteNode(listSearch(key));
			}
		}	
	}
	Print();
	return 0;
}
