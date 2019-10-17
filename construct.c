#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

struct brunch brunchItem;

struct brunch{
  char* name;
  int price;
};

char* menu[] = {"waffles", "pancakes", "avocado toast", "croissant", "omelets"};
int prices[] = {3, 5, 13, 12, 1, 9};

struct brunch randomMenuItem(){
  srand(time(NULL));
  struct brunch item;
  int decideFood = rand() % 6;
  strcpy(item.name, menu[decideFood]);

  int decidePrice = rand() % 6;
  item.price = prices[decidePrice];

  return item;
}

void printBrunchItem(struct brunch item){
  printf("Brunch time! Your brunch food will be... %s and costs $%d\n\n", item.name, item.price);
}

struct brunch changeTo(char* food, int price){
  struct brunch item;
  strcpy(item.name, food);
  item.price = price;

return item;
}
