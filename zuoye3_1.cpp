#include<iostream> 
using namespace std;
int main()
{
	int x;
	cout<<"����һ������x:"<<endl;
	cin>>x;
	if (x<10)
	cout<<x<<":С��10.\n";
	else
	  if (10<=x<100)
	  cout<<x<<":���ڵ���10С��100.\n";
	  else
	    if (100<=x<1000)
	    cout<<x<<":����100С��1000.\n";
	    else
	    cout<<x<<":����1000.\n";
	    
}

