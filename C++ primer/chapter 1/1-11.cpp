#include<iostream>
using namespace std;
int main(){
   int v1, v2;
   cout << "enter two numers" << endl;
   cin >> v1 >> v2;
   
   while(v1< v2){
      cout << v1;
      v1++;
   }
   while(v2< v1){
      cout << v2;
      v2++;
   }
   cout << v1; 
   return 1;
}
