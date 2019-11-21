#include<iostream>
using namespace std;
int main (){
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	if(y2>y1 || y2==y1 && m2>m1 || y2==y1 && m2==m1 && d2>d1){
		cout<<"yes";
}
else {
	cout<<"no";
}
	
}
