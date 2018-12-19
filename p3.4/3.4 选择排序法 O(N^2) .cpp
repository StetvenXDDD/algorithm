#include <stdio.h>
void selectionSort(int A[],int N);
int main()
{
	int A[100],N,i;
	scanf("%d",&N);
	for(i=0;i<N;i++) {
		scanf("%d",&A[i]);
	}
	selectionSort(A,N);
	for(i=0;i<N;i++) {
		printf("%d",A[i]);
	}
	return 0;
}
void selectionSort(int A[],int N) {
	int i,j,t,sw,min,k;
	for(i=0;i<N;i++) {
		min=A[i];
		k=i;
		for(j=i+1;j<N;j++) {
			if(A[j]<min) {
				k=j;
				min=A[j];
			}
		}
		t=A[k];
		A[k]=A[i];
		A[i]=t;
	}
}
