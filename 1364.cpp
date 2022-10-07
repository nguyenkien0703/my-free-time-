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
const ll  maxn = 100009  ;

ll n, k;

void solve(){
    cin >> n>>k;
    ll sum = 0;
    ll a[n + 10];
    for (int i = 0; i < n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    ll ans = -1e9;
    if(sum%k!=0){
        ans = fmax(ans, n);
    }
    for (int i = 0; i < n;i++){
        if(a[i]%k!=0){
            ans = fmax(ans, i);
            ans = fmax(ans, n-1-i);
        }
    }
    cout << (ans == -1e9 ? -1 : ans);
    el;
}
int main()
{
    
    faster;
    int t =1;
    cin>> t ;
    while(t--){
        solve();
    }
    

}
