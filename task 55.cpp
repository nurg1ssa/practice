#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int x,y,c,d=0;
	cin>>x>>y>>c;
    if(x>0){
    	d++;
	}
	if(y>0){
    	d++;
	}
	if(c>0){
    	d++;
	}
	cout<<d;
	return 0;
}
