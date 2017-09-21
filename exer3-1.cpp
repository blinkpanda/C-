#include<iostream>
using namespace std;
int main(void)
{
	int x;
	cout<<"请输入一个整数x:"<<endl;
	cin>>x;
	if(x<5)
	cout<<x<<":小于5.\n";
	else
	if(5<=x<10)
	cout<<x<<":大于等于5小于10.\n";
	else
	if(10<=x<99)
	cout<<x<<":大于等于10小于99.\n";
	else
	if(100<=x)
	cout<<x<<":大于等于100.\n" ;
}
