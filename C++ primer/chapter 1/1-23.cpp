#include "Sales_item.h"
#include <iostream>
using namespace std;
int main(){

   Sales_item item1, item2, book;
   while(cin >> book){
      if(book.isbn() == item1.isbn())
         item1 += book;
      if(book.isbn() == item2.isbn())
         item2 += book;
   }

   return 0;

}
