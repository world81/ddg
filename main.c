#ifdef __C__
#include <stdlib.h>

#define log_black(x, y) \
printf("%s %s - местная шлюха школы \
Черный дракон\n", x, y);

struct bitch {
 char first[256];
 char second[256];
};

void main (void) {
 struct bitch* b;

 b = malloc(sizeof(char* b));
 if(!b)
   return;

 b = { .first = "Царёва", .second = "Катя" };
 
 if(fork() == 0) {
  setuid("eu-tsareva");
  log_black(b->first, b->second);
  abort();
 } else {}

 return;
}

#endif
