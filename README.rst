To look at the code
-------------------

`Open the Notebook file on GitHub <https://github.com/AustralianSynchrotron/intro-pyepics-seminar/blob/master/Intro%20to%20PyEPICS.ipynb>`_.


To start the demo IOC
---------------------

1. Update ``EPICS_BASE`` in ``ioc/configure/RELEASE``.
2. Update your architecture on the first line of ``ioc/iocBoot/iocpyepics/st.cmd``.
3. In the ``ioc`` folder, run::

    make
    cd iocBoot/iocpyepics
    ./st.cmd


To run the Notebook
-------------------

::

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
