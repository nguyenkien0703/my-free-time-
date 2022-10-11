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

void solve(){
    cin >> n;
    ll a[n + 10], c[n + 10];
    ll c1 = 0, c2 = 0;
    FOR(i,1,n){
        cin >> a[i];
        if(a[i]==1){
            ++c1;
        }
    }
    FOR(i,1,n){
        cin >> c[i];
        if(c[i]==1){
            ++c2;
        }
    }

    ll cnt = 0, ans = abs(c1 - c2);
    for (int i = 1; i <= n;i++){
        if(a[i]!=c[i]){
            ++cnt;
        }
    }
    if(cnt == ans ){
        cout << ans;
        el;
    }else {
        cout<< ans +1;
        el;
    }
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
