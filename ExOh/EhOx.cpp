#include<iostream>
#include<string>
using namespace std;
bool ExOh(string str)
{
	unsigned int i=0,countX=0,countO=0;
	while(i<str.length()){
		if(str[i]=='x')
			countX++;
		else
			countO++;
		i++;
	}
	if(countX==countO)
		return true;
	else
		return false;
}

int main()
{
	string myString;
	cout<<"enter your string=";
	cin>>myString;
	bool result=ExOh(myString);
	if(result)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}