#include<iostream>
using namespace std;
int main (){
	int x,y,c;
	cin>>x>>y>>c;
	if(x+y==c||x+c==y||c+y==x){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
