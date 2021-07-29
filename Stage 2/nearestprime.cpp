#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
bool prime(ll n){
	if(n<=1)
      return 0;
	if(n==2)
      return 1;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0)
          return 0;
	}
	return 1;
}
int main(){
	ll i,j,k,t,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(i=n,j=n;;i--,j++){
			if(i>=0 and prime(i)==1){
				printf("%lld\n",i);
				break;
			}else if(prime(j)==1){
				printf("%lld\n",j);
				break;
			}
		}
	}
}
