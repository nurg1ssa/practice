#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int d,m,y,t;
	cin>>d;
	m=d/100;
	y=d%100/10;
	t=d%100%10;
	  cout<<t<<y<<m;
	  	return 0;	
	}

