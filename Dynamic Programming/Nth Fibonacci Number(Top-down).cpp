#include <bits/stdc++.h>
using namespace std;
#define fl(i, a, b) for (long long int i = (a); i < (b); i++)
#define flr(i, a, b) for(long long int i = (a); i >=(b); i--)
#define itr(i, A) for(auto i=A.begin(); i != A.end(); ++i)
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef long long int ll;
typedef vector<int> VI;
ll mod1=1000000007;
ll mod2=67280421310721;
ll mod3=998244353;
ll INF=1e18;
 
ll fib(int n,ll dp[]){
    if(n<=1)
        return n;
    
    if(dp[n]!=0)
        return dp[n];
        
    ll ans; 
    ans = fib(n-1,dp) + fib(n-2,dp);
    
    return dp[n] = ans%mod1;
}

int main(){
ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    ll t;
    cin>>t;
    while(t-- > 0)
    {
        int n;
        cin>>n;
        ll dp[1001] = {0};
        cout<<fib(n,dp)<<"\n";
    }
	return 0;
}
