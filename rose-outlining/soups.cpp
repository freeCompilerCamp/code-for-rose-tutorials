#include <stdio.h>
#include <stdlib.h>

const char *abc_soups[10] = {("minstrone"), ("french onion"), ("Texas chili"), ("clam chowder"), ("potato leek"), ("lentil"), ("white bean"), ("chicken noodle"), ("pho"), ("fish ball")};

int main (void)
{
// split variable declarations with their initializations, as a better demo for the outliner
  int abc_numBowls;
  const char *abc_soupName;
  int numBowls;
  const char *soupName;
#pragma rose_outline
  {
    abc_numBowls = rand () % 10;
    abc_soupName = abc_soups[rand () % 10];
    numBowls = abc_numBowls;
    soupName = abc_soupName;
  }

  printf ("Here are your %d bowls of %s soup\n", numBowls, soupName);

  printf ("-----------------------------------------------------\n");
  return 0;
}
