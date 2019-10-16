#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

int main(){
  struct brunch item1;
  item1 = randomMenuItem();
  printBrunchItem(item1);

  item1 = changeTo("bagel", 2);
  printBrunchItem(item1);
}
