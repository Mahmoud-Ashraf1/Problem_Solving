/*
 * Problem link: https://codeforces.com/problemset/problem/467/C
 * */

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

// Data types/structures
#define ll long long
#define ull unsigned long long
#define V vector
#define VI vector<int>
#define VLL vector<ll>
#define PII pair<int,int>
#define PLL pair<ll,ll>

// Loops/ iterators
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fr(a,target) for (int a=0;a<target;a++)
#define frl(a,target) for (ll a=0;a<target;a++)
#define frr(a,start,target) for (int a=start;a<target;a++)

// input/output
#define cin(vec) for(auto& ____ : vec) cin >> ____
#define cout(vec) for(auto& ____ : vec) cout << ____ <<" "
#define in(i) int i;cin>>i
#define inl(i) ll i;cin>>i
#define ins(i) string i;cin>>i
#define cyes cout << "YES\n"
#define cno cout << "NO\n"

int dx[] = { 0,1,-1,0 };
int dy[] = { 1,0,0,-1 };

using namespace std;

///////// In the name of Allah the Almighty ////////
////////////////////// Mahmoud /////////////////////
#define int ll

void Ma7moud() {
    in(n);
    in(m);
    in(k);

    VI a(n);
    cin(a);

    VI prefix(n+1);
    frr(i,1,n+1){
        prefix[i] = a[i-1]+prefix[i-1];
    }

    V<VI> dp(n+1,VI(k+1));
    frr(i,m,n+1){
        frr(j,1,k+1){
            // take or not
            dp[i][j] = max(dp[i-1][j],
                           prefix[i] - prefix[i-m] +  dp[i-m][j-1]);
        }
    }
    cout << dp[n][k] << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);;

    Ma7moud();
}