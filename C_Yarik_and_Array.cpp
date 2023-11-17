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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int maxi=INT_MIN;
        int sum=0;
        int flag=-1;

        for(int i=n-1;i>=0;i--){
            if(abs(v[i])&1){
                if(flag==1){                   
                    sum=0;
                    sum+=v[i];
                    maxi=max(sum, maxi);
                }
                else{
                    flag=1;
                    if(sum<0){
                        sum=0;
                        sum+=v[i];
                    }
                    else
                    sum+=v[i];
                    maxi=max(sum, maxi);
                }
            }

            else{
                if(flag==0){
                    sum=0;
                    sum+=v[i];
                    maxi=max(sum, maxi);
                }
                else{
                    flag=0;
                    if(sum<0){
                        sum=0;
                        sum+=v[i];
                    }
                    else
                    sum+=v[i];
                    maxi=max(sum, maxi);
                }
            }
        }

        cout<<maxi<<endl;
    }
}