
#include <iostream>
using namespace std;
#include<string.h>
 
int main() {
   char str[100], temp;
   int i=0, j = 0;
 
   cout<<"Enter a string"<<" ";
   cin>>str;
 
 
   j = strlen(str) - 1;
 
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 
   cout<< str;
   return (0);
}