#include "Sales_item.h"
#include <iostream>
using namespace std;
int main(){
   Sales_item sum, book;
   while (cin >> book)
      sum += book;
   cout << book << endl;
   return 0;
}
