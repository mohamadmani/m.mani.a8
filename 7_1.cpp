#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int m,n;
	int s;
	cout<<"please enter your number:";
	
	cin>>m;
	cin>>n;
	for(s=1;n>0;n--)
	{
		
		s=s*m;
		
	}
	cout<<s;
};