// Peter wants to generate some prime numbers for his cryptosystem. Help him! 
// Your task is to generate all prime numbers between two given numbers!

// Input
// The input begins with the number t of test cases in a single line (t<=10).
// In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) 
// separated by a space.

// Output
// For every test case print all prime numbers p such that m <= p <= n, one number per line,
// test cases separated by an empty line.

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
// Primes = 2, 3, 5, 7, 11, 13, 17, 19, 23
using ll = long long;

void primeGenerator(ll m, ll n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;

    for(ll p = 2; p*p <= n; p++) {
        if(prime[p]) {  
            for(ll i = p*p; i <= n; i += p) {
                prime[i] = false;
            }
        } 
    }
    for(ll p = m; p <=n; p++) {
        if(prime[p] == true) {
            cout << p << "\n";
        }
    }
}
int main() {
	
	// your code here
    ll test_cases = 0;

    int num = 0;
    cin >> test_cases;
    
    vector<ll> m(test_cases);
    vector<ll> n(test_cases);
     
    for(ll i = 0; i < test_cases; i++) {
        cin >> m[i] >> n[i];
    }
    cout << endl;
    for(ll i = 0; i < test_cases; i++) {
        primeGenerator(m[i], n[i]);
        cout << endl;
    }
    
	return 0;
}