dnl Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT(test, 1.0)


AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE()

AC_PROG_CC
AC_CHECK_PROGS(SPLINT,splint,no)
AM_CONDITIONAL(SPLINT_PRESENT,[test x"$SPLINT" != x"no"])
if test x"$SPLINT" == x"no" ; then
    AC_MSG_WARN([Please install splint before build.])
fi

AC_CONFIG_FILES(Makefile src/Makefile)
AC_OUTPUT

