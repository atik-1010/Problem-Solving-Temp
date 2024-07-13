
#define mod = 1000000007
#define N = 1000006

///Modular m.Inverse calculate
//log(n)
ll powerMod(ll a, ll b){
    if(b==0)return 1%mod;

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

ll inverseMod(ll a, ll b){
    return powerMod(a, mod-2);
}




