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
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int to_pour=abs(a-b)/2;

        int ans=to_pour/c;

        if(to_pour%c!=0 || abs(a-b)%2!=0){
            ans++;
        }

        cout<<ans<<endl;

    }
}