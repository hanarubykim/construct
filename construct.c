#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct brunch brunchItem;

struct brunch{
  char *name;
  int price;
};

char *menu[] = {"waffles", "pancakes", "avocado toast", "croissant", "omelets"};
int prices[] = {3, 5, 13, 12, 1, 9};

struct brunch randomMenuItem(){
  brunch item;
  int decideFood = (rand() * 6) / 100;
  item.name = *menu[decideFood];

  int decidePrice = (rand() * 6) / 100;
  item.price = prices[decidePrice];

  return item;
}

void printBrunchItem(brunch item){
  printf("Brunch time! Your brunch food will be... %c and costs $%d", item.name, item.price);
}

brunch changeTo(char food, int price){
  brunch item;
  item.name = food;
  item.price = price;

  return item;
}
