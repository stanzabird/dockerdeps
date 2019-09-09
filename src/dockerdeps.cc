#include <config.h>

#include "dockerdeps.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <climits>


#include <boost/version.hpp>
#include <boost/asio.hpp>

#include <getopt.h>

enum
{
  GETOPT_HELP_CHAR = (CHAR_MIN - 2),
  GETOPT_VERSION_CHAR = (CHAR_MIN - 3)
};

#define GETOPT_HELP_OPTION_DECL			\
  "help", no_argument, nullptr, GETOPT_HELP_CHAR
#define GETOPT_VERSION_OPTION_DECL \
  "version", no_argument, nullptr, GETOPT_VERSION_CHAR

#define HELP_OPTION_DESCRIPTION \
  "      --help     display this help and exit\n"
#define VERSION_OPTION_DESCRIPTION \
  "      --version  output version information and exit\n"

static struct option const long_options[] =
  {
    {"verbose",no_argument,nullptr,'v'},
    {GETOPT_HELP_OPTION_DECL},
    {GETOPT_VERSION_OPTION_DECL},
    {nullptr,0,nullptr,0}
  };

static void
dockerdeps_options_init(struct dockerdeps_options *x)
{
  x->verbose = 0;
}


static void
usage()
{
  std::cout << "dockerdeps [OPTION]... SOURCE...\n\n";

  std::cout << "  -v, --verbose  explain what's being done\n";
  std::cout << HELP_OPTION_DESCRIPTION;
  std::cout << VERSION_OPTION_DESCRIPTION;

  std::cout << "\n";
  std::cout << "Use this program to ... This place is used to explain the use\n";
  std::cout << "of this program in one or two simple to read paragraphs.\n";
  std::cout << "\n";
}

static void
version()
{
  std::cout << "dockerdeps (" PACKAGE_NAME ") " PACKAGE_VERSION "\n";
  std::cout << "Copyright (C) 2019 Opal Raava <opalraava@riseup.net>\n";
  std::cout << "Licence GPLv2+\n";
  std::cout << "This is free software; you are free to change and redistribute it.\n";
  std::cout << "There is NO WARANTY, to the extent permitted by law.\n";

  std::cout
    << "Using Boost "     
    << BOOST_VERSION / 100000     << "." // major version
    << BOOST_VERSION / 100 % 1000 << "." // minor version
    << BOOST_VERSION % 100		 // patch level
    << "\n";
}

int
main(int argc, char* argv[])
{
  int c;
  struct dockerdeps_options x;
  
  dockerdeps_options_init(&x);

  // if we just type the command, we want help.
  if (argc == 1) {
    usage();
    return EXIT_SUCCESS;
  }
  
  while ((c = getopt_long(argc,argv,"v",long_options, NULL)) != -1)
    {
      switch (c)
	{
	case 'v':
	  x.verbose = 1;
	  break;
	  
	case GETOPT_HELP_CHAR:
	  usage();
	  return EXIT_SUCCESS;
	  
	case GETOPT_VERSION_CHAR:
	  version();
	  return EXIT_SUCCESS;
	  
	default:
	  usage();
	  return EXIT_FAILURE;
	}
    }

  if (argc - optind < 1)
    {
      std::cout << "dockerdeps: missing file operands\n";
      std::cout << "Try 'dockerdeps --help' for more information.\n";
      return EXIT_FAILURE;
    }


  std::vector<std::string> args(argv + optind, argv + argc);
  auto functionality = [](std::vector<std::string> args, dockerdeps_options* x){
  };  
  functionality(args,&x);


  return EXIT_SUCCESS;
}
