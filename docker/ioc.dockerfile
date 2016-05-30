FROM australiansynchrotron/epics:centos6
ENV EPICS_CA_AUTO_ADDR_LIST=NO
ADD ioc /ioc
WORKDIR /ioc
RUN make
EXPOSE 5064 5065/udp
ENTRYPOINT ["/ioc/bin/linux-x86_64/pyepics", "st.cmd"]
