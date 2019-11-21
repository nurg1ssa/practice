#include<iostream>
using namespace std;
int main (){
	int d,m,y,t,q;
	cin>>d;
	m=d/1000;
	y=d%1000/100;
	t=d%1000%100/10;
	q=d%1000%100%10;
	if(m==q && y==t){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
