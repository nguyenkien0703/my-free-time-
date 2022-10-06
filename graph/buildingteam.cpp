/*
từ đồ thị đã cho, chia thành hai team sao cho bất kì 2 người trong tim ko có quan hệ cha con 


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
const ll  maxn =  100009 ;

ll n, m;
vll ke[maxn];
ll used[maxn];
ll p[maxn];
bool bfs(int u ){
    queue<int> q;
    q.push(u);
    used[u] = 1;
    while(!q.empty()){
        int  u = q.front();
        q.pop();
        for (auto x : ke[u]){
            if(used[x]){
                if(p[u]==p[x]){
                    return false;
                }
            }else {
                used[x] = 1;
                q.push(x);
                p[x] = (p[u] + 1) % 2;
            }
        }
    }
    return true;
}
void solve(){
    cin >> n >> m;
    FOR(i,1,m){
        ll x, y;
        cin>>x>>y;
        ke[x].pb(y);
        ke[y].pb(x);
    }
    ms(used, 0);
    FOR(i,1,n){
       if(!used[i]){
           used[i] = 1;
           if(!bfs(i)){
               cout << "IMPOSSIBLE\n";
               return;
           }
       }
    }
    for (int i = 1; i <=n;i++){
        cout << p[i]+1 << ' ';
    }
    el;
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
