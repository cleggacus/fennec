#include "Fennec.h"

#include <stdio.h>

namespace Fennec {
  void Print()
  {
    printf("Poggies!\n");
  }

  void Print(int n)
  {
    for(int i = 0; i < n; i++)
      printf("Poggies!\n");
  }
}

