#include <iostream>
using namespace std;
void trace(int a[],int n);
void insertionSort(int a[],int n);
int main()
{
	int n,i;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	insertionSort(a,n);
	trace(a,n);
	return 0;
}

void insertionSort(int a[],int n) {
	int i,j,t;
	for(i=1;i<n;i++) {
		j=i-1;
		t=a[i];
		while(j>=0&&a[j]>t) {
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
}

void trace(int a[],int n) {
	int i;
	for(i=0;i<n;i++) {
		if(i>0) {
			cout<<" ";
		}
		cout<<a[i];
	}
	cout<<"\n";
} 
