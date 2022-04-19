#include <iostream>
using namespace std;
void Initials(string name)
{
	
	int i = 1;
    if (name.length() == 0)  //if string has zero value then it return empty string
    {
    	return;
	}    
    cout << (char)toupper(name[0]); //toupper is used for typecasting from char to integer
    while (i < name.length() - 1)
    {	
    	if (name[i] == ' ')
    	{
    		cout << (char)toupper(name[i + 1]) << " ";
		}
		i++;
	}
}
int main()
{
    string name;
    cout<<" Enter the name for initials \n";
	cin>>name;
    cout<<" The first initials of the given name is : "; 
	Initials(name);
    return 0;
}
