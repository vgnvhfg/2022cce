#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a%400==0)
	cout<<"Yes";
	else if(a%100==0)
	cout<<"No";
	else if (a%4==0)
	cout<<"Yes";
	else
	cout<<"No";
}
