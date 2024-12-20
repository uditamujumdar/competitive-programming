#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

int main(){
    tc(){
        ll n;
        cin>>n;
        vector<string>v(n);
        map<char,int>a,b;
        map<string,int>mp;

        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            a[v[i][0]]++;
            b[v[i][1]]++;
        }
        ll cnt=0;

        for(int i=0;i<n;i++){
            //how many strings have the same first char, excluding the curr string
            ll temp=a[v[i][0]]-mp[v[i]];
            cnt+=temp;
            //how many strings have the same second char, excluding the curr string
            temp=b[v[i][1]]-mp[v[i]];
            cnt+=temp;
            mp[v[i]]--;
            a[v[i][0]]--;
            b[v[i][1]]--;
        }
        cout<<cnt<<endl;
    }
}

