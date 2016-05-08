TOP=../..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#=============================
# Build the IOC application

PROD_IOC = pyepics
# pyepics.dbd will be created and installed
DBD += pyepics.dbd

# pyepics.dbd will be made up from these files:
pyepics_DBD += base.dbd

# Include dbd files from all support applications:
pyepics_DBD += subroutine.dbd
pyepics_DBD += wave.dbd

# Add all the support libraries needed by this IOC
#pyepics_LIBS += xxx

# pyepics_registerRecordDeviceDriver.cpp derives from pyepics.dbd
pyepics_SRCS += pyepics_registerRecordDeviceDriver.cpp

pyepics_SRCS += subroutine.c
pyepics_SRCS += wave.c

# Build the main IOC entry point on workstation OSs.
pyepics_SRCS_DEFAULT += pyepicsMain.cpp
pyepics_SRCS_vxWorks += -nil-

# Add support from base/src/vxWorks if needed
#pyepics_OBJS_vxWorks += $(EPICS_BASE_BIN)/vxComLibrary

# Finally link to the EPICS Base libraries
pyepics_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE

