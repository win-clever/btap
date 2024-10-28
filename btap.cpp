#include <bits/stdc++.h>
#include <ctime>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define MAXN 1005
#define MOD 100007
#define FOR(i, l, r) for (int i = l; i <= r; ++i)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof(a))
#define rep(i, n) for (int i = 0, _n = (n); i < _n; ++i)
#define eb emplace_back



int main(){
    vector<int> a;
    vector<ll> b(MAXN);
    string s;
    cin>>s;
    for (char i:s) a.eb(i-'0');

    int n,k;
    cin>>n>>k;
    int len=0;
    if (n<1000000){
        rep(i,s.length()) b[i]=pow(a[i],n);
        int i=0;
        while (len<k){
            len+=b[i];
            i++;
        }
        i--;
        cout<<a[i];
    }
    else{
        int i=0;
        while (a[i]==1 && i<k-1 )
            i++;
        cout<<a[i];
    }



    return 0;
}
