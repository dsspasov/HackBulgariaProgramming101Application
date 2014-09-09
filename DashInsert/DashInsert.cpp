#include <iostream>  
#include <string>
using namespace std;

//long long num,long long numRe,unsigned counter,unsigned index,
string DashInsert(long long num){
	long long numRe=0;//num reverse
	unsigned counter=1;
	while(num/10!=0){
		numRe=numRe*10+num%10;
		num=num/10;
		counter++;
	}
	numRe=numRe*10+num;
	char*result = new char[counter+counter+1];//counter in the number of digits in numRe(i.e 999->counter=3),so i need
											  //two more position for '-'(i.e 9-9-9 size=5) and one more for '\0'=>size=6
											  //(note: size is the size of result). And when the number is negative i need
											  //one more position for the sign.
	unsigned index;
	if(numRe>0){//if the number is possitive
		index = 0;
		while(counter){
			if(((numRe%10)%2!=0)&&(((numRe/10)%10)%2!=0)){
				result[index]=char(numRe%10+48);
				result[index+1]= '-';
				index++;
			}
			else{
				result[index]=char(numRe%10+48);
			}
			numRe=numRe/10;
			index++;
			counter--;
		}
	}
	else{// if the number is negative
		index = 1;
		numRe=numRe*(-1);
		result[0]='-';
		while(counter){
			if(((numRe%10)%2!=0)&&(((numRe/10)%10)%2!=0)){
				result[index]=char(numRe%10+48);//the code of the number(0=>48,1=>49,....)
				result[index+1]= '-';
				index++;
			}
			else{
				result[index]=char(numRe%10+48);//the code of the number(0=>48,1=>49,....)
			}
			numRe=numRe/10;
			index++;
			counter--;
		}
	}
	result[index]='\0';
	string str(result);
	delete []result;
	return str;
}
int main ()
{
	long long myNumber;
	cout<<"enter your number=";
	cin>>myNumber;
	cout<<DashInsert(myNumber)<<endl;
	return 0;
}

