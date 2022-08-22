#include <iostream>
#include <cstring>

using namespace std;
// Primes = 2, 3, 5, 7, 11, 13, 17, 19, 23, 29...
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for(int p = 2; p*p <= n; p++) {
        if(prime[p]) {  
            for(int i = p*p; i <= n; i += p) {
                prime[i] = false;
            }
        } 
    }
    for(int p = 2; p <=n; p++) {
        if(prime[p] == true) {
            cout << p << " ";
        }
    }
}
int main() {
	
	// your code here
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    SieveOfEratosthenes(n);

	return 0;
}