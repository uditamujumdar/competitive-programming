#include <iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<map>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define read(type) readInt<type>()
#define ll long long
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define loop(n) for(int i = 0;i<n;i++)
#define SUM(x) accumulate(all(x),0ll)
#define COUNT(x,u) count(all(x), u)
#define MOD 1000000007
#define MIN INT_MAX
#define MAX INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if((n & (n-1)) == 0) return true;else return false;}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define set_bits(x) __builtin_popcountll(x)
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

int main(){
    int n;
    cin>>n;
    
    while(n>5){
        n=n/2;
        n-=2;
    }

    if(n==1)cout<<"Sheldon"<<endl;
    if(n==2)cout<<"Leonard"<<endl;
    if(n==3)cout<<"Penny"<<endl;
    if(n==4)cout<<"Rajesh"<<endl;
    if(n==5)cout<<"Howard"<<endl;

}