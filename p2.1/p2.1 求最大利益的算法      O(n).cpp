#include <iostream>
using namespace std;
int main()
{
	int max,min=0,i,n,price;
	cin>>n;
	cin>>price;
	min=price;
	max=-2000000000;/*这里可以设max为足够大的数
	                  也可设max为第二个数与第一个数之差*/ 
	for(i=1;i<n;i++) {
		cin>>price;
		if(price-min>max) {
			max=price-min;
		}
		if(price<min) {
			min=price;
		}
	}
	cout<<max;
	return 0;
}
