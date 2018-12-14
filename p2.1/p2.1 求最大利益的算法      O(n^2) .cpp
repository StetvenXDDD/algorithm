#include <iostream>
using namespace std;
int main()
{
	int max,i,n,j;
	cin>>n;
	int a[n+1];
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
	max=a[1]-a[0];
	for(i=0;i<n;i++) {
		for(j=n-1;j>i;j--) {
			if(a[j]-a[i]>max) {
				max=a[j]-a[i];
			}
		}
	}
	cout<<min;
	return 0;
}
