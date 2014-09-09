#include<iostream>
#include<string>
using namespace std;
bool AB_check(string str){
	unsigned int index=0;
	while(index<(str.length()-4)){	
		if((str[index]=='a')&&(str[index+4]=='b')){
			return true;
		}
		else 
			if((str[index]=='b')&&(str[index+4]=='a')){
			return true;
			}
		index++;
	}
	return false;
}
int main()
{
	string myString;
	cout<<"enter your string = ";
	getline(cin,myString);
	if(AB_check(myString))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}