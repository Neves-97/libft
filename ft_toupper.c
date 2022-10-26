#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        return(c - 97 + 65);
    }
    return (c);
}

int main () {
   int i = 0;
   char c;
   char str[] = "Tutorials Point";
   
   while(str[i]) {
      putchar (ft_toupper(str[i]));
      i++;
   }
   
   return(0);
}