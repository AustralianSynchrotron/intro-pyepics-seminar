FROM australiansynchrotron/epics:centos6
ENV EPICS_HOST_BASE=/opt/epics/base EPICS_HOST_ARCH=linux-x86_64
ADD ioc /ioc
WORKDIR /ioc
RUN make
