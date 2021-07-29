#include<iostream>
#include<string.h>
using namespace std;
void leftrotation(char *a, char *b, int lr)
{
	int len = strlen(a),i;
	for(i=0;i<len;i++)
		b[(len-lr+i)%len]=a[i];
		b[len]='\0';
}
void rightrotation(char *a, char *b, int rr)
{
	int len = strlen(a),i;
	for(i=0;i<len;i++)
		b[(i+rr)%len]=a[i];
		b[len]='\0';
}
int main()
{
	char a[1000],b[1000];
	cin>>a;
	int n;
	cin>>n;
	char d;
	cin>>d;
	if(d=='L')
	{
		leftrotation(a,b,n);
	}
	else if(d=='R')
	{
		rightrotation(a,b,n);
	}
	cout<<b;
}
