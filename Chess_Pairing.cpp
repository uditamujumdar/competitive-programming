#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x==0 || x<=n){
	        cout<<0<<endl;
	    }
	    else if(x==2*n){
	        cout<<2*n<<endl;
	    }
	    else if(x>n && x<2*n){
	        cout<<2*(x-n)<<endl;
	    }
	   
	}
	return 0;
}
