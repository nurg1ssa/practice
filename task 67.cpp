#include<iostream>
#include<cmath>
using namespace std;	
int main(){
	int a[4],max=0,min=0;
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
		for(int i=0;i<4;i++){
		if(a[i]>max){
			a[i]=max;
		}
		if(a[i]<min){
			a[i]=min;
		}
	}
	swap(min,max);
	cout<<a[i];
}
