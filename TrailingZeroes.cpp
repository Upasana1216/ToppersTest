
#include <iostream>
using namespace std;


int findTrailingZeros(int n)
{
	if (n < 0) 
		return -1;

	
	int count = 0;

	// Keep dividing n by powers of
	// 5 and update count
	for (int i = 5; n / i >= 1; i *= 5) //30/5=6, 
		count += n / i;

	return count;
}


int main()
{
	int n = 100;
	cout << "Count of trailing 0s in " << 100 << "! is "
		<< findTrailingZeros(n);
	return 0;
}
