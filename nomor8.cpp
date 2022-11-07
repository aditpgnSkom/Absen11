#include<iostream>
using namespace std;

int main() {
  int a = 1, b;

  do {
    b = a;
    cout << endl;
    do {
      cout << " a ";
      b++;
    }while(b <= 5);
    a++;
  }while(a <= 5);
}
