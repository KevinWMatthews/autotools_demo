# Create the library libjupiter.la
# References the LTLIBRARIES primary (see the Automake manual), which uses the libtool script.
# Installs into the directory lib/
# Use the pkglib prefix to install this library elsewhere.
# .la files are libtool archives. They are text files that facilitate platform-independent names.
lib_LTLIBRARIES = libjupiter.la

# Add source files and private header files here.
libjupiter_la_SOURCES = jupiter_print.c

# Use the LIBADD primary to add a library to a library (LIBRARIES or LTLIBRARIES).
# Purely internal libraries should be referenced in the build directory.
libjupiter_la_LIBADD = $(top_builddir)/common/libcommon.la

# Set C PreProcessor flags.
# Include libjupiter's public header files as well as libcommon's header files.
libjupiter_la_CPPFLAGS = -I$(top_srcdir)/include -I$(top_srcdir)/common
