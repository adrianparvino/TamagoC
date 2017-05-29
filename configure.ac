#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT(TamagoC, 0.0.1, adrianparvino@gmail.com)
AC_CONFIG_SRCDIR([src/core/core.h])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
AC_PROG_RANLIB

# Checks for header files.
AC_CHECK_HEADERS([inttypes.h stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_UINT8_T

# Checks for library functions.

AM_INIT_AUTOMAKE
AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
