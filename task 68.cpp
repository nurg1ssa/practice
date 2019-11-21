#include<iostream>
#include<cmath>
using namespace std;
int main (){
	double a,b,c,x,x1,d;
	cin>>a>>b>>c;
	d=sqrt(b*b-4*a*c);
	x=(-b-d)/(2*a);
	x1=(-b+d)/(2*a);
	cout<<x<<x1;
	return 0;
}
