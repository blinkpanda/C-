#include<iostream>
using namespace std;
int main(void)
{
	int x;
	cout<<"������һ������x:"<<endl;
	cin>>x;
	if(x<5)
	cout<<x<<":С��5.\n";
	else
	if(5<=x<10)
	cout<<x<<":���ڵ���5С��10.\n";
	else
	if(10<=x<99)
	cout<<x<<":���ڵ���10С��99.\n";
	else
	if(100<=x)
	cout<<x<<":���ڵ���100.\n" ;
}
