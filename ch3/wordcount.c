#include <stdio.h>

int main(void){
  
  char c = '\0';
  char prevletter = 0;
  int wordnum;
  int word_in;

  while(1){
  
    wordnum = 0;
    word_in = 0;
    prevletter = '\0';
    printf("Enter a sentence:");
    while(1){

      c = getchar();
      if(c == '\n')
      {
        if(word_in)
          wordnum++;
        break;
      }
      prevletter = c;
      if(c == ' ' || c == '.'){
        if(word_in){
          wordnum++;
          word_in = 0;
        }
      }
      else
        word_in = 1;
    }
    if(prevletter == '\0')
      break;
    printf("word count: %d\n", wordnum);

  }

}

