#include <iostream>
using namespace std;
int main(){
	float n,i,res=0,fact=1;
	cout<<"Enter a number";
	cin>>n;
	for (i=1;i<n;i++)
	fact=fact*i;
	res=i/fact;
	cout<<"The sum of series"<<res<<endl;
	return 0;
}