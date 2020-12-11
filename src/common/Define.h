#ifndef RENDU_DEFINE_H
#define RENDU_DEFINE_H

#include "CompilerDefs.h"

#if RENDU_COMPILER == RENDU_COMPILER_GNU
#  if !defined(__STDC_FORMAT_MACROS)
#    define __STDC_FORMAT_MACROS
#  endif
#  if !defined(__STDC_CONSTANT_MACROS)
#    define __STDC_CONSTANT_MACROS
#  endif
#  if !defined(_GLIBCXX_USE_NANOSLEEP)
#    define _GLIBCXX_USE_NANOSLEEP
#  endif
#  if defined(HELGRIND)
#    include <valgrind/helgrind.h>
#    undef _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE
#    undef _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER
#    define _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) ANNOTATE_HAPPENS_BEFORE(A)
#    define _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A)  ANNOTATE_HAPPENS_AFTER(A)
#  endif
#endif

#include <cstddef>
#include <cinttypes>
#include <climits>

#define RENDU_LITTLE_ENDIAN 0
#define RENDU_BIG_ENDIAN    1

#if !defined(RENDU_ENDIAN)
#  if defined (BOOST_BIG_ENDIAN)
#    define RENDU_ENDIAN RENDU_BIG_ENDIAN
#  else
#    define RENDU_ENDIAN RENDU_LITTLE_ENDIAN
#  endif
#endif

#if RENDU_PLATFORM == RENDU_PLATFORM_WINDOWS
#  define RENDU_PATH_MAX 260
#  define _USE_MATH_DEFINES
#  ifndef DECLSPEC_NORETURN
#    define DECLSPEC_NORETURN __declspec(noreturn)
#  endif //DECLSPEC_NORETURN
#  ifndef DECLSPEC_DEPRECATED
#    define DECLSPEC_DEPRECATED __declspec(deprecated)
#  endif //DECLSPEC_DEPRECATED
#else // RENDU_PLATFORM != RENDU_PLATFORM_WINDOWS
#  define RENDU_PATH_MAX PATH_MAX
#  define DECLSPEC_NORETURN
#  define DECLSPEC_DEPRECATED
#endif // RENDU_PLATFORM

#if !defined(COREDEBUG)
#  define RENDU_INLINE inline
#else //COREDEBUG
#  if !defined(RENDU_DEBUG)
#    define RENDU_DEBUG
#  endif //RENDU_DEBUG
#  define RENDU_INLINE
#endif //!COREDEBUG

#if RENDU_COMPILER == RENDU_COMPILER_GNU
#  define ATTR_NORETURN __attribute__((__noreturn__))
#  define ATTR_PRINTF(F, V) __attribute__ ((__format__ (__printf__, F, V)))
#  define ATTR_DEPRECATED __attribute__((__deprecated__))
#else //RENDU_COMPILER != RENDU_COMPILER_GNU
#  define ATTR_NORETURN
#  define ATTR_PRINTF(F, V)
#  define ATTR_DEPRECATED
#endif //RENDU_COMPILER == RENDU_COMPILER_GNU

#ifdef RENDU_API_USE_DYNAMIC_LINKING
#  if RENDU_COMPILER == RENDU_COMPILER_MICROSOFT
#    define RENDU_API_EXPORT __declspec(dllexport)
#    define RENDU_API_IMPORT __declspec(dllimport)
#  elif RENDU_COMPILER == RENDU_COMPILER_GNU
#    define RENDU_API_EXPORT __attribute__((visibility("default")))
#    define RENDU_API_IMPORT
#  else
#    error compiler not supported!
#  endif
#else
#  define RENDU_API_EXPORT
#  define RENDU_API_IMPORT
#endif

#ifdef RENDU_API_EXPORT_COMMON
#  define RENDU_COMMON_API RENDU_API_EXPORT
#else
#  define RENDU_COMMON_API RENDU_API_IMPORT
#endif

#ifdef RENDU_API_EXPORT_DATABASE
#  define RENDU_DATABASE_API RENDU_API_EXPORT
#else
#  define RENDU_DATABASE_API RENDU_API_IMPORT
#endif

#ifdef RENDU_API_EXPORT_SHARED
#  define RENDU_SHARED_API RENDU_API_EXPORT
#else
#  define RENDU_SHARED_API RENDU_API_IMPORT
#endif

#ifdef RENDU_API_EXPORT_GAME
#  define RENDU_GAME_API RENDU_API_EXPORT
#else
#  define RENDU_GAME_API RENDU_API_IMPORT
#endif

#define UI64FMTD "%" PRIu64
#define UI64LIT(N) UINT64_C(N)

#define SI64FMTD "%" PRId64
#define SI64LIT(N) INT64_C(N)

#define SZFMTD "%" PRIuPTR

typedef int64_t int64;
typedef int32_t int32;
typedef int16_t int16;
typedef int8_t int8;
typedef uint64_t uint64;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;

#endif //RENDU_DEFINE_H
