#include<iostream>
#include<math.h>

using namespace std;
int main(){
	int p,r,t,ci;
	cin>>p>>r>>t;
	ci=p*pow((1+r/100),t);
	cout<<"for 1st year"<<ci<<endl;
	cout<<"for 2nd year"<<ci*0.4<<endl;
	cout<<"for 3rd year"<<ci*0.4*0.4<<endl;
}

