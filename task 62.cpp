#include<iostream>
using namespace std;
int main (){
	int d,m,y,t,q,r;
	cin>>d;
	m=d/10000;
	y=d%10000/1000;
	t=d%10000%1000/100;
	q=d%10000%1000%100/10;
	r=d%10000%1000%100%10;
	cout<<m<<0<<t<<0<<r;
	return 0;
}
