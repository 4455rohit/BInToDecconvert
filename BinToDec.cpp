#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int BinToDec(int n)
{
	return pow(2,n);
}
int checker(string s){
	int num=0;
	if(s[0]=='1')
		num=1;
		
	for(int i=1;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			num+=BinToDec(i);
		}
		
	}
	cout<<num;
}
int main()
{
	string s;
	cout<<"Enter a binary string";
	cin>>s;
	checker(s);
	
	
	return 0;
}
