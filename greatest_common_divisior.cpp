#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b){
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0){
        a = a % b;
        int t = a; a = b; b = t;
    }
    return a;
}
