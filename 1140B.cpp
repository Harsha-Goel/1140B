#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX
int main(int argc,char const * argv[]){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll a=0,b=0;

        loop(i,0,n-1){
            if(s[i]=='>'){
                break;
            }
            a++;
        }
        loopr(i,n-1,0){
            if(s[i]=='<'){
                break;
               
            }
            b++;
        }
        cout<<min(a,b) nn;
    }
    
    return 0;
}