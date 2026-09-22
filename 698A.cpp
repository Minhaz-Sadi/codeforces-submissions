//////////////////////////////////////////////////////////
///////////////////// Minhaz_Sadi ////////////////////////
//////////////////////////////////////////////////////////
#include <bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define test                                                                   \
    int tc;                                                                    \
    cin >> tc;                                                                 \
    while (tc--)
#define gcd __gcd
#define lcm(a, b) ((a) * 1LL * (b)) / __gcd((a), (b))
#define sz(n) (int)(n).size()
#define vi vector<int>
#define vl vector<long long>
#define vs vector<string>
#define vc vector<char>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define ll long long
#define sp " "
#define ff first
#define ss second
#define eps 1e-9
using namespace std;
ll sq(ll x) {
    ll lo = 0, hi = 1e10 + 10;
    while (hi - lo > 1) {
        ll mid = (hi + lo) / 2;
        if (mid * mid > x) {
            hi = mid;
        } else
            lo = mid;
    }
    return lo;
}
double sqd(double x) {
    double lo = 0, hi = 1e10 + 10;
    for (int i = 0; i < 100; i++) {
        double mid = (hi + lo) / 2;
        if (mid * mid > x) {
            hi = mid;
        } else
            lo = mid;
    }
    return lo;
}
void printBinary(int num) {
    for (int i = 31; i >= 0; --i) {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
string binString(int num, int n) {
    string s = "";
    for (int i = n - 1; i >= 0; --i) {
        s += ((num >> i) & 1) + '0';
    }
    return s;
    //__builtin_popcount(x)
    //__builtin_popcountll(x)
    // set bit -> a | (1<<x)
    // unset bit -> a & ~(1<<x)
    // power of 2 -> (n%(n-1))->no
}
bool compDouble(double a, double b) { return abs(a - b) < 1e-6; }

bool cmpPair(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

bool cmpSet(set<int>& a, set<int>& b) { return a.size() < b.size(); }
// Sieve
const int SN = 1e3 + 10;
vector<bool> is_prime(SN, 1);
vector<int> hp(SN, 0), lp(SN, 0);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < SN; i++) {
        if (is_prime[i] == true) {
            hp[i] = lp[i] = i;
            for (int j = 2 * i; j <SN; j += i) {
                is_prime[j] = false;
                // highest and lowest prime
                hp[j] = i;
                if (lp[j] == 0) {
                    lp[j] = i;
                }
            }
        }
    }
}

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
vector<pair<int, int>> movements = {
    {1, 0}, {0, -1},
    {0, 1}, {-1, 0}
};
const int N = 210;
const int INF = 1e9+10;




void solve() {


    test{
      
        
        
    }
}

   


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}

 