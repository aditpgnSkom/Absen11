#include<iostream>
using namespace std;

int main()
{
	int i = 1, value = 0;
  while (i <= 20) {
    if (i % 2 == 0 && i <= 10)
      value = value + i * i;
    else if (i % 2 == 0 && i > 10)
      value = value + i;
    else
      value = value - i;
    i++;
  }
  cout << "value = " << value << endl;

  return 0;
}
