#include <stdio.h>
#include <string.h>

int main()
{

  char s[10] = "Hello";
  printf("%s\n", s);
  strcpy(s, "Good bye");
  printf("%s_n", s);

  return 0;
}

