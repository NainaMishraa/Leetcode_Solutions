class Solution {
public:
    const int mod = 1e9+7;
    int binExp(long long a , long long b){
        if(b==0) return 1;
        int res = binExp(a,b/2);
        if(b%2) return(a*1ll*(res*1ll*res)%mod)%mod;
        return (res*1ll*res)%mod;
    }
    int countGoodNumbers(long long n) {
        long long e = (n+1)/2, o=n/2;
        long long ans = (binExp(5,e) * 1ll * binExp(4,o)) % mod;
    return ans;
    }
};