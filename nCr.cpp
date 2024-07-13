
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N  2000006
#define mod  1000000007
ll n, m;
ll fact[N];
///Modular m.Inverse calculate
//log(n)
ll powerMod(ll a, ll b){
    if(b==0)return 1;

    if(b%2==0){
        ll x = powerMod(a, b/2);
        return (x*x)%mod;
    }
    else{
        ll x = powerMod(a, b/2);
        return ((x*x)%mod * a)%mod;
    }

    return 0;
}

ll inverseMod(ll a){
    return powerMod(a, mod-2);
}

//nCr
ll nCrMod(ll n, ll r){

    if(r==0) return 1;
    if(r>n)return 0;

    return (fact[n] * inverseMod((fact[r] * fact[n-r])%mod)) % mod;

}


int main(){

    fact[0]=1;
    for(int i=1; i<N; i++){
        fact[i]=(fact[i-1]*i)%mod;
    }

    cin>>n>>m;

    cout<<nCrMod(n+m-1, n-1)<<endl;

    return 0;
}
