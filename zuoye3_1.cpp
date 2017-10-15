#include<iostream> 
using namespace std;
int main()
{
	int x;
	cout<<"输入一个整数x:"<<endl;
	cin>>x;
	if (x<10)
	cout<<x<<":小于10.\n";
	else
	  if (10<=x<100)
	  cout<<x<<":大于等于10小于100.\n";
	  else
	    if (100<=x<1000)
	    cout<<x<<":大于100小于1000.\n";
	    else
	    cout<<x<<":大于1000.\n";
	    
}

