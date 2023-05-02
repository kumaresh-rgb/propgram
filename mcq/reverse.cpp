// C++ program to reverse a string
// using first to last approach
// 'for' loop
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();
    cout<<n<<endl;

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++){
        cout<<i<<" ";
        swap(str[i], str[n - i - 1]);
        cout<< str<<endl;
    }
		
}

// Driver program
int main()
{
	string str="kumaresh" ;
    reverseStr(str);
	cout << str;
	return 0;
}


// reverse a number
// #include <stdio.h>

// int main() {

//   int n, reverse = 0, remainder;

//   printf("Enter an integer: ");
//   scanf("%d", &n);

//   while (n != 0) {
//     remainder = n % 10;
//     reverse = reverse * 10 + remainder;
//     n /= 10;
//   }

//   printf("Reversed number = %d", reverse);

//   return 0;
// }