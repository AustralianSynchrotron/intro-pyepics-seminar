To look at the code
-------------------

`Open the Notebook file in GitHub <https://github.com/AustralianSynchrotron/intro-pyepics-seminar/blob/master/Intro%20to%20PyEPICS.ipynb>`_.

To start the demo IOC
---------------------

1. Update `EPICS_BASE` in `ioc/configure/RELEASE`.
2. Update your architecture on the first line of `ioc/iocBoot/iocpyepics/st.cmd`.
3. In the `ioc` folder, run::

  make
  cd iocBoot/iocpyepics
  ./st.cmd

To run the Notebook
-------------------

::

  pip3 install -r requirements.txt
  jupyter notebook


To run the Notebook in presentation mode
----------------------------------------

Install the `RISE Jupyter extension <https://github.com/damianavila/RISE>`_.

Click the "Enter Live Reveal Slideshow" icon in the Toolbar.
