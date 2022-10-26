#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        return(c - 65 + 97);
    }
    return (c);
}

int main () {
   int i = 0;
   char c;
   char str[] = "TuAAAAtorials Point";
   
   while(str[i]) {
      putchar (ft_tolower(str[i]));
      i++;
   }
   
   return(0);
}