#include<iostream>

using namespace std;

int main(void){
	char ch;

	cout<<"Enter the character: ";
	cin>>ch;

	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		cout<<ch<<" is vowel"<<endl;
	else
		cout<<ch<<" is consonent"<<endl;

	return 0;
}
