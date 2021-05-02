#include<iostream>
using namespace std;
int main(){
   int sum = 0;
   for (int i = 50; i<=100; ++i){
      sum += i;
   }
   cout << sum;
   for (int i = 10; i>=0; --i)
      cout << i;
   int v1, v2;
   cin >> v1 >> v2;
   for (; v1 < v2; ++v1)
      cout << v1;
   for (; v2 < v1; ++v2)
      cout << v2;
   cout << v1;
   return 1;
}
