#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Enter the number : ";
	cin>>n;
	m = n/100;
	n %= 100;
	if(m == 1)
		cout<<"One";
	else if(m == 2)
		cout<<"Two";
	else if(m == 3)
		cout<<"Three";
	else if(m == 4)
		cout<<"Four";
	else if(m == 5)
		cout<<"Five";
	else if(m == 6)
		cout<<"Six";
	else if(m == 7)
		cout<<"Seven";
	else if(m == 8)
		cout<<"Eight";
	else if(m == 9)
		cout<<"Nine";
	cout<<" Hundred";
	
	m = n/10;
	n %= 10;
	if(m == 1)
	{
		if(n == 1)
			cout<<" Eleven";
		else if(n == 2)
			cout<<" Twelve";
		else if(n == 3)
			cout<<" Thirteen";
		else if(n == 4)
			cout<<" Forteen";
		else if(n == 5)
			cout<<" Fifteen";
		else if(n == 6)
			cout<<" Sixteen";
		else if(n == 7)
			cout<<" Seventeen";
		else if(n == 8)
			cout<<" Eighteen";
		else if(n == 9)
			cout<<" Nineteen";
		else if(n == 0)
			cout<<" Ten";
		
	}	
	else 
	{
		if(m == 2)
			cout<<" Twenty";
		else if(m == 3)
			cout<<" Thirty";
		else if(m == 4)
			cout<<" Fourty";
		else if(m == 5)
			cout<<" Fifty";
		else if(m == 6)
			cout<<" Sixty";
		else if(m == 7)
			cout<<" Seventy";
		else if(m == 8)
			cout<<" Eighty";
		else if(m == 9)
			cout<<" Ninety";
	
		if(n == 1)
			cout<<" One";
		else if(n == 2)
			cout<<" Two";
		else if(n == 3)
			cout<<" Three";
		else if(n == 4)
			cout<<" Four";
		else if(n == 5)
			cout<<" Five";
		else if(n == 6)
			cout<<" Six";
		else if(n == 7)
			cout<<" Seven";
		else if(n == 8)
			cout<<" Eight";
		else if(n == 9)
			cout<<" Nine";
	}
	return 0;
}
















