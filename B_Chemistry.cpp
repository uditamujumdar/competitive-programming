#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t,n,k;
  string s;
  cin >> t;
  while (t--)
  {
    cin>>n>>k>>s;
    map <int,int> mp;
    for(int i=0;i<n;i++){
      mp[s[i]]++;      
    }
    int odd=0,even=0;
    for(auto i:mp){
      if(i.second%2==1) odd++;
      else even++;
    }
    if((odd-1)<=k || odd==0) 
    cout<<"YES"<<endl;

    else
    cout<<"NO"<<endl;
  }
  return 0;
}