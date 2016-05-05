#include <stdio.h>
#include <dbDefs.h>
#include <registryFunction.h>
#include <subRecord.h>
#include <alarm.h>
#include <recGbl.h>
#include <epicsExport.h>
#include <dbStaticLib.h>
#include <epicsMath.h>


typedef long (*processMethod) (subRecord *precord);


static long initSubroutine (subRecord *precord, processMethod process) {
  return 0;
}


static long processSubroutine (subRecord *precord) {
  double input = precord->a; // Access the INPA field of the record
  precord->val = sqrt(input);
  precord->udf = 0; // Flag the record as no-longer undefined
  return 0;
}


epicsRegisterFunction(initSubroutine);
epicsRegisterFunction(processSubroutine);
