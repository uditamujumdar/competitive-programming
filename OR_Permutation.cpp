#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v;
	    
	    v.push_back(1);
	    
	    for(int i=n;i>=2;i--){
	        v.push_back(i);
	    }
	    
	    for(int i=0;i<n;i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
