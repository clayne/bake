/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef BAKE_TEST_BAKE_CONFIG_H
#define BAKE_TEST_BAKE_CONFIG_H

/* Headers of public dependencies */
#ifdef __BAKE__
#include <bake_util.h>
#endif

/* Headers of private dependencies */
#ifdef bake_test_EXPORT
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if bake_test_EXPORTS && (defined(_MSC_VER) || defined(__MINGW32__))
  #define BAKE_TEST_EXPORT __declspec(dllexport)
#elif bake_test_EXPORTS
  #define BAKE_TEST_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
  #define BAKE_TEST_EXPORTS __declspec(dllimport)
#else
  #define BAKE_TEST_EXPORT
#endif

#endif
