#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define ll long long

void f(){
    int x,y;
    cin>>x>>y;

    // if(x%10==x && y%10==y){
    //     if(y-x==1){
    //         cout << "Yes" << endl;
    //     }
    //     else{
    //         cout << "No" << endl;
    //     }
    //     return;
    // }

    if(x%9==0 && y==1){
        cout << "Yes" << endl;
        return;
    }

    if(x<y && y-x==1){
        cout << "Yes" << endl;
        return;
    }

    while(x > 0){
     x -= 9;
      if(x + 1 == y){
      cout << "Yes" << endl;
      return;
      }
    }
    cout << "No" << endl;
}

int main(){
    tc(){
        f();
    }
}