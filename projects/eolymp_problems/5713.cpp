#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,c;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			sum++;
		}
	}
	cout<<sum;
}