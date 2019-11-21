#include<iostream>
using namespace std; 
int main(){
    int h,m;
    double result;
	cin>>h>>m; 
    h %= 12;
    m %= 60;
    result = 30*h + 0.5*m;
 
    cout<<result/h<< '\xF8';
    return 0;
 
}
