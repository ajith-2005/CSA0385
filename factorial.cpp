#include <iostream>
using namespace std;
int main(){
	int n,i,fact=1;
	cout<<"Enter a number:";
	cin>>n;
	
	for (i=1;i<n;i++)
	fact=fact*i;
	cout<<"The factorial of:"<<fact<<endl;
	return 0;
}