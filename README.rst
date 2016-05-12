To look at the code
-------------------

`Open the Notebook file on GitHub <https://github.com/AustralianSynchrotron/intro-pyepics-seminar/blob/master/Intro%20to%20PyEPICS.ipynb>`_.


To start the demo IOC
---------------------

1. Download and unzip `EPICS base <http://www.aps.anl.gov/epics/base/R3-14/12.php>`_
   to somewhere like ``/opt/epics/base``.
2. Setup EPICS environment variables for your system. Eg, on Mac add to your
   ``~/.bashrc`` (don't forget to source this file afterwards)::

    export EPICS_BASE=/opt/epics/base
    export EPICS_HOST_ARCH=darwin-x86

3. Update ``EPICS_BASE`` in ``ioc/configure/RELEASE``.
4. Update your architecture on the first line of ``ioc/iocBoot/iocpyepics/st.cmd``
   (eg if you are on linux change ``darwin-x86`` to ``linux-x86_64``).
5. In the ``ioc`` folder, run::

    make
    cd iocBoot/iocpyepics
    ./st.cmd


To run the Notebook
-------------------

You will require EPICS base to be compiled and the EPICS environment variables
defined (see above).

You will also need Python 3. The easiest way to get it is via the `Anaconda
distribution <https://www.continuum.io/downloads>`_.

Then, from inside this repo's folder run::

    pip3 install -r requirements.txt
    jupyter nbextension enable --py --sys-prefix widgetsnbextension
    jupyter notebook


To run the Notebook in presentation mode
----------------------------------------

Install the `RISE Jupyter extension <https://github.com/damianavila/RISE>`_.

Click the "Enter Live Reveal Slideshow" icon in the Toolbar.


To run the included QEGui interface
-----------------------------------

1. `Install QEGui <https://sourceforge.net/projects/epicsqt/>`_.
2. Run::

    qegui uis/basic.ui


Further reading
---------------

* `PyEPICS documentation <https://pyepics.github.io/pyepics/>`_
* `PyEPICS source code <https://github.com/pyepics/pyepics>`_
* `Example applications <http://pyepics.github.io/epicsapps/>`_
* `Recomendations on Confluence <https://confluence.synchrotron.org.au/display/LANG/PyEPICS>`_
