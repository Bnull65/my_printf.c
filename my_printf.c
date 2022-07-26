#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my_printf.h"

int my_printf(char * restrict format, ...) {

  va_list arg;

  int i= 0;

  int num= 0;

  int pol= 0;

  va_start(arg, format); 

  while (format[i] != 0)

  {if (num) {

      pol += proceed_flag(&arg, format[i]);

      num = 0;

    }else if (format[i] == '%') {

      num = 1;

    }else {

      pol += my_putchar(format[i]);

    }

    i += 1;

  }

  va_end(arg);

  return 0;

}

int main(){

    my_printf("%d %c%c %d",23,'t','o',56);

    return 0;

}