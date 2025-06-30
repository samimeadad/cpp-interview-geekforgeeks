// C++ Program to toggle string
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    string str;

    cout<<"Enter the string: ";
    cin>>str;
/*
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
*/

    for(int i = 0; str[i] != '\0'; i++){
    	if(str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
	else if(str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
    }

    cout << "Toggled string: " << str << endl;

    return 0;
}
