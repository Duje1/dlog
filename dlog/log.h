#ifndef LOG
#define LOG  

#include <stdio.h>
#include <stdarg.h>
#include <time.h>

typedef enum 
{
  LOG_TRACE,
  LOG_INFO,
  LOG_DEBUG,
  LOG_WARNING,
  LOG_ERROR
} Log_Level;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void dlog(int Log_Level, const char *msg, ...);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif  
