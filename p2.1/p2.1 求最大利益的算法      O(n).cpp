#include <iostream>
using namespace std;
int main()
{
	int max,min=0,i,n,price;
	cin>>n;
	cin>>price;
	min=price;
	max=-2000000000;/*���������maxΪ�㹻�����
	                  Ҳ����maxΪ�ڶ��������һ����֮��*/ 
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
