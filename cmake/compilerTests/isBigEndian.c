#include <stdio.h>

int little_endian(){
  int x = 1;
  return *(char*)&x;
}

int main(int argc, char** argv) {
  if (little_endian()) {
    return 1;
  }
  else {
    return 0;
  }
}
