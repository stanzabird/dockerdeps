AC_INIT([dockerdeps], [0.1.0], [opalraava@riseup.net], [], [https://github.com/opalraava/dockerdeps/])
AC_CONFIG_SRCDIR(src/dockerdeps.cc)
AC_PREREQ(2.59)
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS(config.h)
AC_PROG_CXX
AC_LANG([C++])
AX_CXX_COMPILE_STDCXX_17
AX_BOOST_BASE([1.55],, [AC_MSG_ERROR([dockerdeps needs Boost, but it was not found])])
AX_BOOST_SYSTEM
AX_BOOST_THREAD
AX_BOOST_ASIO
AC_CONFIG_FILES(Makefile src/Makefile)
AC_OUTPUT
