#include<iostream>
using namespace std;
int main()
{
	int x,i=0;
	cout<<"������һ������";
	cin>>x;
	while(x!=0)
	{
		x/=5;
		i++;
		
	}
	switch(i)
	{
		case 0:
	    case 1:cout<<"С��5\n";break;
		case 2:cout<<"5~10\n";break;
		case 3:cout<<"10~99\n";break;	
	    default:cout<<"����100\n";
		}
	    
}
