#include<iostream>
using namespace std;
int main (){
	int d,m,y,t,q;
	cin>>d;
	m=d/1000;
	y=d%1000/100;
	t=d%1000%100/10;
	q=d%1000%100%10;
	if(m<5){
		cout<<m;
	}
	if(y<5){
		cout<<y;
	}
	if(t<5){
		cout<<t;
	}
	if(q<5){
		cout<<q;
	}
	else{
		cout<<m<<y<<t<<q;
	}
	return 0;
}
