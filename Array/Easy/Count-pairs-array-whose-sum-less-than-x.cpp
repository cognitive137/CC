#include<bits/stdc++.h> 
using namespace std; 

int findPairs(int arr[],int n,int x) 
{ 
  int l = 0, r = n-1; 
  int result = 0; 
  while (l < r) 
  { 
    if (arr[l] + arr[r] < x) 
    { 
      result += (r - l); 
      cout << "Result now: " << result << endl;
      cout << " l=" << l << " r=" << r << endl;
      l++; 
    } 
    else
    {
      // Initially till lower bound r
      // Every time l++ fails the if
      r--; 
    }
  } 
  return result; 
}

int main() 
{
  // Easy
  // https://www.geeksforgeeks.org/count-pairs-array-whose-sum-less-x/
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
  int n = sizeof(arr)/sizeof(int); 
  int x = 7; 
  int result = findPairs(arr, n, x);
  cout << endl << "Total pairs:" << result << endl;
  return 0; 
}
