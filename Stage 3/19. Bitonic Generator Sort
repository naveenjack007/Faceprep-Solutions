#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> even,odd;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        for(int i=0;i<even.size();i++)
        {
            cout<<even[i]<<" ";
        }
        for(int i=0;i<odd.size();i++)
        {
            cout<<odd[i]<<" ";
        }
        cout<<endl;
    }
}
