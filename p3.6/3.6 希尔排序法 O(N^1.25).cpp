#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int l;
int A[1000000];
int n;
vector<int>G; //declare a dynamic array
//insertion sort with a given interval g
void insertionSort(int A[],int n,int g){
	for(int i=g;i<n;i++) {
		int v=A[i];
		int j=i-g;
		while(j>=0&&A[j]>v) {
			A[j+g]=A[j];
			j-=g;
		}
		A[j+g]=v;
	}
}

void shellSort(int A[],int n) {
	//create a sequence G={1,4,13,40...} as the interval g
	for(int h=1;;) {
		if(h>n) break;
		G.push_back(h);//put number in the dynamic array G
		h=3*h+1;
	} 
	for(int i=G.size()-1;i>=0;i--) {
		insertionSort(A,n,G[i]);
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) {
		scanf("%d",&A[i]);//using scanf which has higher running speed
	}
	shellSort(A,n);
	for(int i=0;i<n;i++) {
		printf("%d ",A[i]);
	}
}


