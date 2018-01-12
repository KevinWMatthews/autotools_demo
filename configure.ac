#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

# AC_PREREQ() defines the oldest acceptable version of Autoconf that may be used.
# AC_PREREQ (version)
AC_PREREQ([2.69])

# AC_INIT (package, version, [bug-report], [tarname], [url])
#
# Initialize the Autoconf system.
# Generates variables:
#   PACKAGE_NAME
#   PACKAGE_VERSION
#   PACKAGE_TARNAME
#   PACKAGE_STRING
#   PACKAGE_BUGREPORT
AC_INIT([autoconf_demo], [1.0], [kmatthews@cyberdata.net])

# AC_CONFIG_SRCDIR (unique-file-in-source-dir)
#
# Sanity check. Verify that the directory for the generated configure script actually exists.
AC_CONFIG_SRCDIR([src/main.c])

# AC_CONFIG_HEADERS (header ..., [cmds], [init-cmds])
#
# This file contains preprocessor definitions.
# There can be too many options to pass using -D.
# header is a tag, which has the form:
#   OUT[:INLIST] where INLIST is IN0[:IN1:..:INn]
# cmds:         arbitrary shell code that config.status will execute before generating header files
# init-cmds:    initialize the variables in config.status (?)
AC_CONFIG_HEADERS([config.h])

# Check for libraries that our source code uses.
# AC_CHECK_HEADERS (header-file..., [action-if-found], [action-if-not-found], [includes])
AC_CHECK_HEADERS([stdio.h])
# Apparently you can add conditional includes to [includes] as follows:
# [#ifdef HAVE_FOO_H
#   #include <foo.h>
# #endif]

# Checks for programs.
# AC_PROG_CC ([compiler-search-list])
# Determine which C compiler to use. Sets output variable CC.
# Many Autoconf macros use a compiler themselves and actually call AC_REQUIRE([AC_PROG_CC]).
AC_PROG_CC

# AC_PROG_INSTALL
# Accepts no arguments.
AC_PROG_INSTALL

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
