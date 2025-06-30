#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string str;
	int vowelCount = 0;
	int aCount = 0;
	int eCount = 0;
	int iCount = 0;
	int oCount = 0;
	int uCount = 0;
	int i = 0;

	cout<<"Enter a string: ";
	getline(cin, str);

	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			vowelCount++;
	}

	cout<<"Total vowel in the string is "<<vowelCount<<endl;

	return 0;
}
