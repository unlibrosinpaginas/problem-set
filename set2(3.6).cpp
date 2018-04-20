#include <iostream >
const int ARRAY_LEN = 10;

int main() {
int arr[ARRAY_LEN] = {10}; // Note implicit initialization of  6 	// other elements
int *xPtr = arr, *yPtr = arr + ARRAY_LEN - 1;
std::cout << *xPtr << " " <<*yPtr; // Should output 10 0  9 	return 0;
}
