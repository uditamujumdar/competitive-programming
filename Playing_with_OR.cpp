#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    
	    int count=0;
	    
        for(int i = 0;i<n-k+1;i++){
            bool flag=false;
            for(int j = i;j<k+i;j++){
                if(v[j]&1){
                    flag=true;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
}