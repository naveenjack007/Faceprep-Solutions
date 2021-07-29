#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int start = 0;
	    int end = n-1;
	    int cnt = 0;
	    while(start < end){
	        if(v[start] == v[end]){
                start++;
                end--;
	        }
	        if(v[start]>v[end]){
	            v[end-1] = v[end-1]+v[end];
	            end--;
	            cnt++;
	            continue;
	        }
	        else if(v[start]<v[end]){
	            v[start+1] = v[start+1]+v[start];
	            start++;
	            cnt++;
	            continue;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
