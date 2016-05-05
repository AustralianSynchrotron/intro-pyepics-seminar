#include <stdio.h>
#include <aSubRecord.h>
#include <registryFunction.h>
#include <epicsExport.h>

#include <stdlib.h>


static float randomFloatFromRange (float min, float max) {
  float v = (float)rand()/(float)(RAND_MAX);
  return (max - min) * v + min;
}


static long processSpectrum (aSubRecord* record) {
  float* vala = (float*)record->vala;
  for (long i = 0; i < record->nova; i++) {
    vala[i] = randomFloatFromRange(5, 10);
  }
  return 0;
}


epicsRegisterFunction(processSpectrum);
