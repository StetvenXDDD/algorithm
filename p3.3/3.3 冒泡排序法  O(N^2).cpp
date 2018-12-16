#include <iostream>
using namespace std;
int bubbleSort(int A[],int n);
void swap(int *a,int *b);
int main()
{
	int n,i,cnt;
	int A[100];
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>A[i];
	}
	cnt=bubbleSort(A,n);
	for(i=0;i<n;i++) {
		if(i) {
			cout<<" ";
		}
		cout<<A[i];
	}
	cout<<endl;
	cout<<cnt;
	return 0;
}

int bubbleSort(int A[],int n) {
	int i,j,flag,t,cnt=0;
	flag=1;
	for(i=0;flag;i++) {
		flag=0;
		for(j=n-1;j>i;j--) {
			if(A[j]<A[j-1]) {
				swap(A[j],A[j-1]);
				flag=1;
				cnt++;
			}
		}
	}
	return cnt;
}

void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
