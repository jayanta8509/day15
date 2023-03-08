// Write a program to identify if the number is Strong number or not
#include <iostream>
using namespace std;
void strong(int a) {
  int fact, rem, i;
  int sum = 0;
  int temp = a;
  while (a) {
    i = 1, fact = 1;
    rem = a % 10;
    while (i <= rem) {
      fact = fact * i;
      i++;
    }
    sum = sum + fact;
    a = a / 10;
  }
  if (sum == temp) {
    cout << "Strong number" << endl;
  } else {
    cout << "Not a strong number" << endl;
  }
}

int main() {
  int ok = 145;
  strong(ok);
  int ok8 = 121;
  strong(ok8);
}