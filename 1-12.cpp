#include<iostream>
using namespace std;
int main(){
	int d,s,h,m ;
	int n;
	cin>>n;
	d=n/(24*3600);
	n%=(24*3600);
	h=n/3600;
	n%=3600;
	m=n/60;
	n%=60;
	s=n;
	cout<<d<<" "<<h<<" "<<m<<" "<<s<<" ";
	
}
