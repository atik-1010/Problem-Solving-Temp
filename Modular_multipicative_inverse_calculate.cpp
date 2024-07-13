

///Modular m.Inverse calculate
//log(n)
ll powerMod(ll a, ll b, ll p){
    if(b==0)return 1%p;

    if(b%2==0){
        ll x = powerMod(a, b/2, p);
        return (x*x)%p;
    }
    else{
        ll x = powerMod(a, p/2, p);
        return ((x*x)%p * a)%p;
    }

    return 0;
}

ll inverseMod(ll a, ll b){
    return powerMod(a, p-2, p);
}
