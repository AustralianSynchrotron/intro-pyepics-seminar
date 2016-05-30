FROM australiansynchrotron/epics:centos6-python3.5.1
ADD requirements.txt Intro_to_PyEPICS.ipynb /notebooks/
ADD images /notebooks/images
WORKDIR /notebooks/
RUN pip3 install -U pip \
    && pip3 install -r requirements.txt \
    && rm requirements.txt \
    && jupyter nbextension enable --py --sys-prefix widgetsnbextension \
    && curl -L https://github.com/krallin/tini/releases/download/v0.9.0/tini > tini \
    && echo "faafbfb5b079303691a939a747d7f60591f2143164093727e870b289a44d9872 *tini" | sha256sum -c - \
    && mv tini /usr/local/bin/ \
    && chmod +x /usr/local/bin/tini
EXPOSE 9999
ENTRYPOINT ["tini", "--"]
CMD ["jupyter", "notebook", "--ip='*'", "--port=9999", "--no-browser"]
