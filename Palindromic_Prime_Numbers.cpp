#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1){
	        cout<<0<<" "<<1<<endl;
	    }
	    
	    else if(n>=5){
	        cout<<1<<" "<<n-1<<endl;
	    }
	    
	    else{
	        cout<<0<<" "<<n<<endl;
	    }
	}
	return 0;
}
