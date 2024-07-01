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
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
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

bool is_sorted(vector<int>&a)
{
    int j=a.size();
    
    for(int i=0;i<j-1;i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
      
        vector<int>gm;
        
        for(int i=0;i<n-1;i++)
        {
            gm.push_back(__gcd(v[i],v[i+1]));
        }
        
        int ind=-1;
        
        for(int i=0;i<gm.size()-1;i++)
        {
            if(gm[i]>gm[i+1])
            {
                ind=i;
                break;
            }
        }
        if(ind==-1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        vector<int>a1,a2,a3;
        
        for(int i=0;i<n;i++)
        {
            if(i!=ind)
            {
                a1.push_back(v[i]);
            }
            if(i!=ind+1)
            {
                a2.push_back(v[i]);
            }
            if(i!=ind+2)
            {
                a3.push_back(v[i]);
            }
        }
        vector<int>k1,k2,k3;
        
        for(int i=0;i<a1.size()-1;i++)
        {
            k1.push_back(__gcd(a1[i],a1[i+1]));
            k2.push_back(__gcd(a2[i],a2[i+1]));
            k3.push_back(__gcd(a3[i],a3[i+1]));
        }

        if(is_sorted(k1)==true || is_sorted(k2)==true || is_sorted(k3)==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}