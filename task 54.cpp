#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int x,y,c;
	cin>>x>>y>>c;
	if(x<5 && y<5 && c>=5|| x<5 && y>=5 && c<5 || x>=5 && y<5 && c<5){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
