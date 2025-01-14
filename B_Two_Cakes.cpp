#include <bits/stdc++.h>
using namespace std;

long long n, m, x , y, l, s;
vector <int> b[100500];
int main(){
	cin >> n;
	x=1;
	y=1;
	for(int i=1;i<=n*2;i++){
		cin>>l;
		b[l].push_back(i);
	}
	for(int i=1;i<=n;i++){
		s+=min(abs(b[i][0]-x)+abs(b[i][1]-y), abs(b[i][0]-y)+abs(b[i][1]-x));
		x=b[i][1];
		y=b[i][0];
	}
	cout<<s;
}
