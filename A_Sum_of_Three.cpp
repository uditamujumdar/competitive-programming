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
        int n;
        cin>>n;

        if(n<=6 || n==9){
            cout<<"NO"<<endl;
        }
        
        else{
            if(n%3==0 && n!=12){
                cout<<"YES"<<endl;
                cout<<2<<" "<<5<<" "<<n-7<<endl;
            }
            else if(n==12){
                cout<<"YES"<<endl;
                cout<<1<<" "<<4<<" "<<7<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<1<<" "<<2<<" "<<n-3<<endl;
            }
        }
    }
}