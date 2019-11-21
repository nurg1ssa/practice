#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int x,y,c,d;
	cin>>x>>y>>c;
	if(x<5 && y<5 && c%6==0 && d%3!=0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
