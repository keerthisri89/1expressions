#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float area,s,s1,s2,s3;
    cin>>s1>>s2>>s3;
    s=(s1+s2+s3)/2;
    area= sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<area;
}
