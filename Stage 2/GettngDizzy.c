#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	int count=1;
  	int round=ceil((double)n/2);
  	for(i=0;i<round;i++)
  	{	 
     	for(j=i;j<=n-i-1;j++)
	 	{
            cout<<a[i][j]<<" ";
     	}
     	for(j=i+1;j<=n-i-1;j++)
	 	{
            cout<<a[j][n-i-1]<<" ";
	 	}	
   		for(j=n-i-2;j>=i;j--)
   		{
 			cout<<a[n-i-1][j]<<" ";
   		}
   		for(j=n-i-2;j>i;j--)
   		{
          	cout<<a[j][i]<<" ";
    	}
  	}
}
