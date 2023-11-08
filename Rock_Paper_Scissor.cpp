#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    
	    long long int chef=0;
	    long long int chefi=0;
	    
	    for(int i=0;i<n;i++){
	        if((a[i]=='R'&&b[i]=='S')||(a[i]=='S'&&b[i]=='P')||(a[i]=='P'&&b[i]=='R')){
	            chef++;
	        }
	        else if(a[i]==b[i]){
	            continue;
	        }
	        else if((b[i]=='R'&&a[i]=='S')||(b[i]=='S'&&a[i]=='P')||(b[i]=='P'&&a[i]=='R')){
	            chefi++;
	        }
	        else{
	            continue;
	        }
	    }
	    
	    if(chef>chefi){
	        cout<<0<<endl;
	    }
	    else{
	        cout<<(chefi-chef)/2 +1<<endl;
	    }
	    
	}
	return 0;
}
