#include<iostream>
using namespace std;
int main(){
	int c,tip,tax;
	cin>>c;
	tax=c*0.18;
	tip=c*0.5;
	cout<<c+tax+tip;
}
