#include<iostream.h>
#define M 10
void main()
{
	int a[M],*p=a,*q=a;
	cout<<"??��?��?10??��y:";
	for(int i=0;i<M;i++)
		cin>>a[i];
	q=q+i-1;
	for(i=0;;i++)
	{
		int t;
		t=*p;
		*p=*q;
		*q=t;
		p++;
		q--;
		if(p>=q) break;
	}
	cout<<"����D����?��?:";
	for(i=0;i<M;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}