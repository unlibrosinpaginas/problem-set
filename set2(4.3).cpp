#include <iostream>

using namespace std;

int sum( const int x,  	const int 	y, 	const int z)
    {   return x + y + z;}

int sum( const int a, const int	b, 	const int c,const int 	d)
    {   return a + b + c + d;}

int main()
{
     std::cout << sum(4,5,6)<<endl;
     std::cout << sum(4,5,6,5)<<endl;

}
