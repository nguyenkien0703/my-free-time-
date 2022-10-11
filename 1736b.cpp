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
ll n;
ll gcd(ll a,ll  b){
    if(a==0){
        return b;
    }else {
        return gcd(b, a % b);
    }
}
void solve(){
    cin >> n;
    ll a[n + 10];
    FOR(i,1,n){
        cin >> a[i];
    }
    int ok = 1;

    if(n>=3){
        ll p = 1ll*a[1] * a[2] / __gcd(a[1], a[2]);
        for (int i = 3; i <= n;i++){
            int x = a[i] * a[i-1] /__gcd(a[i],a[i-1]);
            if(gcd(x,p)!=a[i-1]){
                ok = 0;
                break;
            }
            p = x;
        }
    }
    cout << (!ok ? "NO" : "YES");
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
