# Declare a 'convenience library' that will nto be installed.
# Create a Libtool library instead of a regular library to avoid portability warnings
# that occur when a shared library depends on a static library.
#
# Use noinst to notify Libtool that this is a convenience library.
# Convenience libraries are built even if  --disable-static is passed to configure.
noinst_LTLIBRARIES = libcommon.la

libcommon_la_SOURCES = print.h print.c
libcommon_la_CFLAGS = -fPIC
