#include "log.h"

void dlog(int Log_Level, const char *msg, ...)
{
  const char *level_str[] = { "TRACE", "INFO", "DEBUG","WARNING", "ERORR" };
  const char *level_colors[] = {
    "\x1b[36m", "\x1b[32m", "\x1b[32m",  "\x1b[33m", "\x1b[31m"
  };
  
  time_t t ;
  struct tm *tmp ;
  char MY_TIME[16];
  time( &t );
  tmp = localtime( &t );
  strftime(MY_TIME, sizeof(MY_TIME), "%H:%M:%S", tmp);

  printf("%s [%s%s\x1b[0m] ", MY_TIME, level_colors[Log_Level],level_str[Log_Level]);

  va_list args;
  va_start(args, msg);
  vprintf(msg, args);
  va_end(args);

  printf("\n");
}
