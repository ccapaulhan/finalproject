#include <stdio.h>
#include "final.h"
#include <string.h>

int main(int argc, char* argv[]) {
  if (argc == 1) {
    int place = 0;
    playquiz(place, argv);
  }
  else {
    playquiz(argc, argv);
  }
  return 0;
}
