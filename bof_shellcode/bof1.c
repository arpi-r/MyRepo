
 #include <stdio.h>
 #include <unistd.h>

void arbitrary_code()
  {
    printf(" Now you know I should not be seen ! \n");
    printf(" But I am. Don't believe me just watch \n");
  }


void buffer_overflow()
    {
      char buffer[8];
      gets(buffer);
      puts(buffer);
    }


int main()
  {
    buffer_overflow();
    return 0;
  }
