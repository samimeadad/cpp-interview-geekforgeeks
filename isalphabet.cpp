#include<iostream>

using namespace std;

int main(void){
	char ch;

	cout<<"Please input @ to exit!!!"<<endl;

	while(ch!='@'){
		
		cout<<"Enter the character: ";
		cin>>ch;

		if(ch=='@')
			cout<<"Goodbye!!! You enter @ to exit"<<endl;
		
		else if(int(ch)>=65 && int(ch)<=90)
			cout<<ch<<" is an alphabet"<<endl;
		
		else if(int(ch)>=97 && int(ch)<=122)
			cout<<ch<<" is an alphabet"<<endl;
		
		else
			cout<<ch<<" is NOT an alphabet"<<endl;

	}
	
	return 0;
}
