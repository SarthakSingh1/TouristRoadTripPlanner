#include "someprogram.h"
#include <iostream>
#include <string>
#include "parsing.h"
#include <stdlib.h>

using ::parsing;

int main() {
   parsing myParse ;
   myParse.fillVector("data/CS225 final project data.csv");

   return 0;
}

