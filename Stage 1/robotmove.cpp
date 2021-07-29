#include <iostream>
using namespace std;

int total_ways(int cr, int cc, int r, int c)
{
    if(cr > r || cc > c)
    {
        return 0;
    }
    if(cr == r && cc == c)
    {
        return 1;
    } 
    return total_ways(cr, cc+1, r, c) + total_ways(cr+1, cc, r, c);
}
int main() 
{
	int m,n;
	cin>>m>>n;
	
	cout<<total_ways(0,0,m-1,n-1);
	return 0;
}
