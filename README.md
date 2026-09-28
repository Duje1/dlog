# dlog
Logging library built for my graphics engine
![console output example](https://github.com/Duje1/assets/blob/master/image.png)

# Usage
[Code](https://github.com/Duje1/dlog/tree/master/dlog) should be compiled alongside your project and then may be used wherever, like in the following example:
```c
#include "log.h"
...
char filepath[] = "assets/fonts/test.tff";
dlog(LOG_ERROR, "Font not found: %s", filepath);
```
Pretty much the same as you would use printf just pass `LOG_LEVEL` as the first argument.
