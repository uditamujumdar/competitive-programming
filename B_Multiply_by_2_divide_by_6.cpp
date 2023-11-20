#include <iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>
#include<map>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define read(type) readInt<type>()
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(),(x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))

int main(){
    tc(){
        ll n;
        cin>>n;
        int ans=0;

        while (n != 1) {
            if (n % 3 != 0) {
                cout << -1 <<endl;
                break;
            }

            if (n % 6 == 0) n /= 6;

            else n *= 2;

            ans++;
        }

        if(n == 1) cout << ans <<endl;

    }
}