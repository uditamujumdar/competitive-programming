#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,m;
	    cin>>n>>m;
	    long long int x,y;
	    cin>>x>>y;
	    
	    long long int total = n*m;
	    long long int a,b,c,d,c1,c2,c3;

        a = x*m;        
        b = (n-x+1)*m; 
        c = y*n;        
        d = (m-y+1)*n;   
        c1 = min(a,b);
        c2 = min(c,d);
        c3 = min(c1,c2);

        cout << total-c3 << endl;
    }
}