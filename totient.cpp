#include <iostream>
using namespace std;

// Function to return gcd of a and b
int greatestcommon_d(int num1, int num2){
    if (num1 == 0){
        return num2;
    }
    return greatestcommon_d(num2 % num1, num1);
}

int phi(unsigned int n)
{
    unsigned int result = 1;
    for (int i = 2; i < n; i++)
        if (greatestcommon_d(i, n) == 1)
            result++;
    return result;
}

// A simple method to evaluate Euler Totient Function
int main(){
    int n;
    cin >> n;


    cout << "the result is: " << phi(n) << endl;


    return 0;