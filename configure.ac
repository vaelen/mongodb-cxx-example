AC_INIT([MongoDB C++ Examples], [1.0], [andrew@vaelen.org])
AM_INIT_AUTOMAKE()
AC_PROG_CXX
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile])

# Boost
AX_BOOST_BASE([1.48],,[AC_MSG_ERROR([Boost libraries not found])])
AX_BOOST_SYSTEM
AX_BOOST_THREAD
AX_BOOST_REGEX

# MongoClient (legacy driver)
AC_LANG_PUSH([C++])
AC_CHECK_HEADERS([mongo/config.h],,[AC_MSG_ERROR([MongoDB client library headers not found])])
AC_LANG_POP

AC_OUTPUT
