#include<iostream>

using namespace std;

int main(void){
	int x, y, z;
	
	cout<<"Enter three (3) numbers: ";
	cin>>x>>y>>z;
	
	if(x>y && x>z)
		cout<<x<<" is the greates number"<<endl;
	else if(y>x && y>z)
		cout<<y<<" is the greates number"<<endl;
	else
		cout<<z<<" is the greates number"<<endl;

	return 0;
}
