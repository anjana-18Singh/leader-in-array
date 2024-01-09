#include <iostream>
#include <vector>

using namespace std;
vector<int> printleader(int arr[], int n) {
  vector<int> ans;

  // last element of the array is always a leader//
  int max = arr[n - 1];
  ans.push_back(max);

  // start checking from the end whether a number is greater than the max no
  // from right, hence leader//

  for (int i = n - 2; i >= 0; i--)
    if (arr[i] > max) {
      ans.push_back(arr[i]);
      max = arr[i];
    }
  return ans;
}

int main() {
  int n = 6;
  int arr[] = {10, 22, 12, 3, 0, 6};
  vector<int> ans = printleader(arr, n);

  for (int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i] << " ";
  }
}