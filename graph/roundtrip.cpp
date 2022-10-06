/*
kiểm tra chu trình và in cái chu trình đó ra 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair<ll, ll> 
#define vii vector<pii> 
#define pb push_back 
#define fi first 
#define el cout<<endl
#define oo 1000000008
#define se second 
#define sz(a) a.size();
#define all(x) (x).begin(), (x).end()
#define vll vector<ll> 
#define vi vector<int >
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
#define f0(a) for(ll i = 0; i < (a); i++)
#define f1(a) for(ll i = 1; i <= (a); i++)
#define ms(a,n) memset(a,n,sizeof(a))
#define FOR(i,a,b) for(ll i=a;i<=b;i++)
#define FOD(i,b,a) for(int i=b;i>=a;i--)
#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
const ll MOD = 1e9 + 7;
const ll maxn = 100006;
ll n, m;
vll ke[maxn];
ll used[maxn];
ll p[maxn];
vll ans;
void dfs(int u ,int pu=-1){
	p[u] = pu;
	used[u] = 1;
	for (auto  v : ke[u]){
		if(v== pu){
			continue;
		}
		if(used[v]){
			int u2 = u;
			while(v^u){
				ans.pb(u);
				u = p[u];
			}
			ans.pb(v);
			ans.pb(u2);
			cout << ans.size();
			el;
			for(auto x  : ans){
				cout << x<< ' ';
			}
			el;
			exit(0);
		}else{
			dfs(v, u);
		}
	}
}
void solve(){
	cin >> n >> m;
	FOR(i,0,m-1){
		int x, y;
		cin>>x>>y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
	ms(used, 0);
    for (int i = 1; i <= n;i++){
        if(used[i]==0){
			dfs(i);
		}
    }
	cout << "IMPOSSIBLE\n";
}
int main()
{
	
	faster;
	int t =1;
	// cin>> t ;
	while(t--){
		solve();
	}
	

}
