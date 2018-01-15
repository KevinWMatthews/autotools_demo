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

# AM_INIT_AUTOMAKE([OPTIONS])
# OPTIONS is optional, no pun intended.
# Initialize Automake
AM_INIT_AUTOMAKE

# LT_PREREQ ( version )
# Ensure that this version of Libtool is being used.
# Are we still on 1.5?
LT_PREREQ([2.2])

# LT_INIT ( options )
# For a full list of options, see the Libtool manual section 5.4.1
# In the past this macro was named AC_PROG_LIBTOOL or AM_PROG_LIBTOOL.
#   dlopen      Check for dlopen support
LT_INIT([dlopen])

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

# Checks for programs.
# AC_PROG_CC ([compiler-search-list])
# Determine which C compiler to use. Sets output variable CC.
# Many Autoconf macros use a compiler themselves and actually call AC_REQUIRE([AC_PROG_CC]).
AC_PROG_CC
# AC_PROG_RANLIB
# No arguments.
# AC_PROG_RANLIB is rendered obsolete by LT_INIT

# I don't seem to need AM_PROG_CC_C_O

# AC_PROG_INSTALL
# Accepts no arguments.
AC_PROG_INSTALL

# Checks for command line options.
# Can also use AC_ARG_WITH, depending on the context.
# AC_ARG_ENABLE(feature, help-string, [action-if-given], [action-if-not-given])
#
# async-exec is the feature. The user can enable or disable it using:
#   --enable-feature
#   --disable-feature
# Autoconf will populate enableval with the result of their selection with yes/no appropriate to their selection:
#   --enable-feature    => enableval = yes
#   --disable-feature   => enableval = no
#
# You must set the help text to correspond to the default value!
AC_ARG_ENABLE([async-exec],
              [AS_HELP_STRING([--disable-async-exec],
                              [disable asynchrous execution/multi-threading])],
              [async_exec=${enableval}],
              [async_exec=yes]
)


# Checks for libraries.
# AC_SEARCH_LIBS (function, search-libs, [action-if-found], [action-if-not-found], [other-libraries])
if test "x$async_exec" = "xyes"; then
    AC_SEARCH_LIBS([pthread_create], [pthread],
                   ,
                   [AC_MSG_ERROR([Failed to find pthread library!])]
    )
    AC_CHECK_HEADERS([pthread.h],
                    ,
                    [AC_MSG_ERROR([Failed to find header file!])]
    )
    # AC_DEFINE (variable, value, [description])
    # This symbol will be defined in config.h.
    # The description is placed in config.h as well.
    AC_DEFINE([ASYNC_EXEC], 1, [Define to 1 if asynchrounous exection/multi-threading is enabled])
fi


# Checks for header files.
# AC_CHECK_HEADERS (header-file..., [action-if-found], [action-if-not-found], [includes])
AC_CHECK_HEADERS([stdio.h],
                 ,
                 [AC_MSG_ERROR([Failed to find header file!])]
)
# Apparently you can add conditional includes to [includes] as follows:
# [#ifdef HAVE_FOO_H
#   #include <foo.h>
# #endif]

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 common/Makefile
                 include/Makefile
                 libjupiter/Makefile
                 src/Makefile])
AC_OUTPUT
