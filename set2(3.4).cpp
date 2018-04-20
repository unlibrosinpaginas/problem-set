#include <iostream >
#include <cstdlib > // contains some math functions

int difference( const int x, const int y) {//Una variable declarada const no se puede cambiar

    return abs(x-y); // abs(n) returns absolute value of n
    }

int main() {
    std::cout << difference(24, 1238);
    return 0;
	}
