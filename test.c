#include <stdio.h>
#include <stdlib.h>
#include "rs232.h"

rs232(CMD_INIT, hSet, &info);
rs232(CMD_EXIT, info);
rs232(CMD_READ, info, strin, 256, 100);
rs232(CMD_GETS, info, strin, 256, 0, 500);


   for (a = 0; a < 3; a++)
      *pdata++ = rand() % 1024;
   rs232(CMD_GETS, info, strin, 256, 0, 500);
   for (j=0;j<256;j++) {
    if (strin[j] != 0)
      *pdata++ = strin[j];

