#include <iostream>
using namespace std;
int main() {
  long int i, j, x, n1, n2, temp;
  cout << "n1 & n2: " << endl;
  cin >> n1;
  cin >> n2;
  cout << "- - - - - - - - - - - - - - - - - - - -" << endl;
  if (n1 > n2) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  }
  for (i = n1; i <= n2; i++) {
    x = 1;
    for (j = 2; j <= i / 2; j++)
      if (i % j == 0) {
        x = 0;
        break;
      }
    if (x)

      cout << "\n" << i;
  }
  return 0;

}
