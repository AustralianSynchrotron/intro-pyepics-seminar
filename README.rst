To look at the code
-------------------

`Open the Notebook file on GitHub <https://github.com/AustralianSynchrotron/intro-pyepics-seminar/blob/master/Intro_to_PyEPICS.ipynb>`_.


To run the Notebook and demo IOC with Docker
--------------------------------------------

1. Ensure you have `git <https://git-scm.com/downloads>`_, `Docker
   <https://www.docker.com/>`_ and `Docker Compose
   <https://www.docker.com/products/docker-compose>`_ installed.
2. Run::

    git clone https://github.com/AustralianSynchrotron/intro-pyepics-seminar
    cd intro-pyepics-seminar
    docker-compose up -d

3. Open http://localhost:9999 in your browser. If you are running Docker
   Machine replace "localhost" with the IP address from ``docker-machine ip``.


To start the demo IOC
---------------------

1. Download and compile EPICS base.
2. Ensure the following environment variables are set:

   * ``EPICS_BASE``: Path to EPICS base folder.
   * ``EPICS_HOST_ARCH``: Eg ``linux-x86_64``,  ``darwin-x86`` or ``windows-x64``.
   * ``PATH``: Make sure ``$EPICS_BASE/bin/$EPICS_HOST_ARCH`` is on your path.

3. Update ``EPICS_BASE`` in ``ioc/configure/RELEASE``.
4. Run ``make`` from within the ``ioc`` folder.
5. Run either ``start-ioc-linux-osx.sh`` or ``start-ioc-windows.cmd``.


To run the Notebook
-------------------

You will need EPICS base to be compiled and the EPICS environment variables
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
