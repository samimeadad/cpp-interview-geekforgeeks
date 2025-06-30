#include<iostream>

using namespace std;

int main(){
	string str;
	int len = 0;
	int i = 0;

	cout<<"Enter a string: ";
	cin>>str;

	for(i=0; str[i]!='\0'; i++){
		len++;
	}

	cout<<"The length of the string "<<str<<" = "<<len<<endl;

	return 0;
}
