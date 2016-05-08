#include <stdio.h>
#include <dbDefs.h>
#include <registryFunction.h>
#include <subRecord.h>
#include <alarm.h>
#include <recGbl.h>
#include <epicsExport.h>
#include <dbStaticLib.h>
#include <epicsMath.h>


static float randomFloatFromRange (float min, float max) {
  float v = (float)rand()/(float)(RAND_MAX);
  return (max - min) * v + min;
}


typedef long (*processMethod) (subRecord *precord);


static long initSubroutine (subRecord *precord, processMethod process) {
  precord->val = 25;
  return 0;
}


static long processSubroutine (subRecord *precord) {
  precord->val += randomFloatFromRange(-.1, .1);
  precord->udf = 0;
  return 0;
}


epicsRegisterFunction(initSubroutine);
epicsRegisterFunction(processSubroutine);
