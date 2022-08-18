#include <iostream>
using namespace std;

int main() {
	
	// your code here
    int number = 0;
  
    cin >> number;
    while(number != 42) {
        cout << number << endl;
        cin >> number;
    }

	return 0;
}