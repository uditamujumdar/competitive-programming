#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    int sum=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        sum+=v[i];
	    }
	    
	    if(sum%n!=0){
	        cout<<"No"<<endl;
	    }
	    
	    else{
	        int flag=1;
	        int fnl= sum / n;
            for (int i = 0; i < n; i++){
                int diff = v[i]-fnl;
                
                if (diff % 2 != 0) {
                    cout<<"No"<<endl;
                    flag=0;
                    break;
                }

                else{
                    continue;
                }
            }
            
            if(flag==1){
                cout<<"Yes"<<endl;
            }
        }


	    
	}
	return 0;
}