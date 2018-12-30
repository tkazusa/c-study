#include <stdio.h>

int main(void){

  char s[] = "I love cat and dog.";
  char c = 'a';
  char *p = s;
  int n = 0;

  printf("\"%s\"のから\'%c\'を探します。 \n", s, c);
  while(*p != '\0'){
    if(*p == c){ 
      printf("%d 文字目でで発見しました。\n", p-s+1);
      n++;
    }
    p++;
  }

  if(n == 0)
    printf("ひとつも見つかりませんでした。\n");
  
  else
    printf("全部で%d個見つかりました。\n", n);

  return 0;
}

