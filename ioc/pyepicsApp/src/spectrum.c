#include <stdio.h>
#include <aSubRecord.h>
#include <registryFunction.h>
#include <epicsExport.h>


static long processSpectrum (aSubRecord* record) {
  float* vala = (float*)record->vala;
  for (long i = 0; i < record->nova; i++) {
    vala[i] = (float)i;
  }
  return 0;
}


epicsRegisterFunction(processSpectrum);
