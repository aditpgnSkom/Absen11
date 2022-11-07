#include<iostream>
using namespace std;

int main() { 
  int A, max, i; 
  cout << "Input 10 buah bilangan"<<endl;
  cout << "Bilangan pertama: "; cin >> A; 
  max = A; 
  for(i=1; i<=9; i++) { 
    cout<<"Bilangan ke "<<i+1<<" : ";  
    cin>>A;  
    if (A > max)  
        max = A; 
  } 
  cout<<endl<<"Bilangan terbesar: "<<max; 
  return 0; 
}
