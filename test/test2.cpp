#include<iostream>
using namespace std;

int main ( ) {
int n1,n2;
cin >>n1>>n2;
if(n1== n2)
 cout <<"equal"<<endl;
else
 cout <<"not equal"<<endl;
if(n1!=n2)
 cout <<"not equal"<<endl;
if(n1>n2)
 { cout <<n1<<"great than";
  cout <<n2<<endl;}
if (n1<=n2)
 { cout <<n1<<"less than"<<n2<<endl;
 cout <<n1<<"or equal"<<n2<<endl;}
else
{ cout <<n1<<"great than"<<n2<<endl;
 cout <<n1<<"not equal"<<n2<<endl;}
 return 0;
 }