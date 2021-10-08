
#include <iostream>
#include <stack>
using namespace std;


void printPrevSmaller(int arr[], int n)
{
	
	stack<int> S; // S: 0 2

	for (int i=0; i<n; i++)  // 1 3 0 2 5
	{
		while (!S.empty() && S.top() >= arr[i])
			S.pop();

		if (S.empty())
			cout << "_, "; // _ 1 _ 0 2
		else 
			cout << S.top() << ", ";

		S.push(arr[i]);
	}
}


int main()
{
	int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	printPrevSmaller(arr, n);
	return 0;
}
