#include<iostream>
using namespace std;
int main (){
	int d,m,y,t,q,r,i,p;
	cin>>d>>q;
	m=d/100;
	y=d%100/10;
	t=d%100%10;
	r=q/100;
	i=q%100/10;
	p=q%100%10;	
	cout<<m<<y<<t<<r<<i<<p;
	return 0;
}
