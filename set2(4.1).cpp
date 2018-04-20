#include <iostream >
int sum( const int &x, const int &y) {
return x + y;
}

double sumar( const double &x, const double &y) {
return x + y;
	}
int main(){

   const int x=4;
   const int y=5;
   sum(&x,&y);
    return 0;
    }
