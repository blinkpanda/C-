#include<iostream.h>
#include<stdio.h>
void main()
{
	char a[100],b[100],c[100],*p=a,*q=b,*t=c;
	int n;
	cout<<"输入数组a:"<<endl;
	gets(a);
	cout<<"输入插入第n位数:"<<endl;
	cin>>n;
	cout<<"输入数组b:"<<endl;
	gets(b);
	p=p+n;
	for(;*p!='\0';)
	{
		*t=*p;
		p++;
		t++;
	}
	*t='\0';
	p=a+n;
	for(;*q!='\0';)
	{
		*p=*q;
		p++;
		q++;
	}
	*p='\0';
	t=c;
	for(;*t!='\0';)
	{
		*p=*t;
		p++;
		t++;
	}
	*p='\0';
	cout<<"插入字符串后的数组:"<<endl;
	puts(a);
}