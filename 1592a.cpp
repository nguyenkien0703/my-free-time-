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
int n, h;
/**
 * 
 * 
 * vì h/(m1+m2) nên du thuộc đoạn [0,m1+m2-1],
*/
void solve(){
    cin >> n >> h;
    ll a[n];
    for(int i=0;i<n;i++){cin >> a[i];}
    sort(a, a + n, greater<ll>());
    int m1 = a[0], m2 = a[1];
    int cnt = h/(m1+m2);
    int du = h%(m1 +m2);
    if(du==0){
        cout << 2 * cnt;
    }else if(du <=m1){
        cout << 2 * cnt + 1;
    }else {
        cout << 2 * cnt + 2;
    }
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
