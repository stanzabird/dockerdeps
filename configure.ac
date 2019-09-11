AC_INIT([dockerdeps], [0.1.0], [bert@stanzabird.nl], [], [https://github.com/stanzabird/dockerdeps/])
AC_CONFIG_SRCDIR(src/dockerdeps.cc)
AC_PREREQ(2.59)
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS(config.h)

# Substitutions used in the Dockerfiles
AC_SUBST([URL_GITREPO],[https://github.com/stanzabird/dockerdeps.git])
AC_SUBST([URL_TARBALL],[https://github.com/stanzabird/dockerdeps/releases/download/v0.1.0/dockerdeps-0.1.0.tar.gz])
AC_SUBST([TARBALL_VERSION],[0.1.0])

AC_PROG_CXX
AC_LANG([C++])
AX_CXX_COMPILE_STDCXX_17

AX_BOOST_BASE([1.55],, [AC_MSG_ERROR([dockerdeps needs Boost, but it was not found])])
AX_BOOST_SYSTEM
AX_BOOST_THREAD
AX_BOOST_ASIO

AC_CONFIG_FILES(Makefile src/Makefile tests/Makefile)
# Dockerfiles
AC_CONFIG_FILES(deps/Makefile deps/arch-tar/Dockerfile deps/arch-git/Dockerfile deps/debian-tar/Dockerfile deps/debian-git/Dockerfile deps/fedora-tar/Dockerfile deps/fedora-git/Dockerfile deps/fedora-mingw64/Dockerfile)
AC_OUTPUT
