#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int my_putchar(char c){
    return write(1, &c, 1);
}
int my_putstr(char *str) {

  int i = 0;

  while (str[i] != '\0') {

    my_putchar(str[i]);

    i += 1;

  }

  return 0;

}
int my_isdigit(int son) {

    char char_int[10000];

    sprintf(char_int, "%d", son);

    my_putstr(char_int);

    return 0;

}int proceed_flag(va_list *arg, char flag) {

  int   sum = 0;

  int d;

  char  c;

  char  *str;

  if (flag == 's') {

    str = va_arg(*arg, char *);

    if (str) {

      sum += my_putstr(str);

    }

  }else if (flag == 'c') {

    c = va_arg(*arg, int);

    sum += my_putchar(c);    

  }else if(flag == 'd'){

    d = va_arg(*arg, int);

    sum += my_isdigit(d);

  }

  return 0;

}