#include <stdio.h>

int main(void)
{
  int min, lit, bot;
  printf("Ты сколько времени был в душе?\n");
  scanf("%i", &min);
  lit = 6 * min;
  bot = lit * 2;
  printf("За %i минут набежало %i литров\n", min, lit);
  printf("Потребовалось %i бутылочек\n", bot);
}