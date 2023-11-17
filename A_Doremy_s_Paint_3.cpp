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
        vector<int>v(n);
        vector<int>vec;
        map<int, int>mp;

        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }

        if(mp.size()==1){
            cout<<"Yes"<<endl;
        }

        else{
            for(auto i:mp){
             vec.push_back(i.second);
            }

            if(vec.size()==2){
                if(abs(vec[0]-vec[1])<=1){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }

            else{
             cout<<"No"<<endl;
            }
        }
    }
}