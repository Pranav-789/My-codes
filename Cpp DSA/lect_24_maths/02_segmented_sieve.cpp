#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> simplesieve(long long limit){
    vector<bool> isPrime(limit +1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for(long long p = 2; p*p < limit; p++){
        if(isPrime[p] = true){
            for(long long i = p*p; i<limit; i = i+p){
                isPrime[i] = false;
            }
        }
    }

    for(long long p = 2; p < limit; p++){
        if(isPrime[p]){
            primes.push_back(p);
        }
    }
    return primes;
}

void segmentedsieve(long long L, long long H){
    long long limit = sqrt(H) + 1;
    vector<int> primes = simplesieve(limit);

    vector<bool> isPrime(H-L + 1, true);

    for(long long prime: primes){
        long long start = max(prime * prime, (L + prime - 1)/ prime* prime);
        start = max(start, prime * prime);

        for (long long j = start; j <= H; j += prime) {
            isPrime[j - L] = false;
        }
    }

    if (L == 1) isPrime[0] = false;

    for (long long i = 0; i < H - L + 1; i++) {
        if (isPrime[i]) {
            cout << (i + L) << " ";
        }
    }
    cout << endl;
}

int main(){
    long long L, H;
    cout << "Enter range [L, H]: ";
    cin >> L >> H;

    cout << "Primes in range [" << L << ", " << H << "]: ";
    segmentedsieve(L, H);

    return 0;
}