#include "mystr.h"

int my_strlen( char* str_)
{
   int len = 0;
   while (*str_)
   {
      len++;
      str_++;
   }

   return len;
}void my_strcpy(char* dest_, char* src_)
{
   int symbol = 0;
   while (dest_[symbol])
   {
      src_[symbol] = dest_[symbol];
      symbol++;
   }
   return symbol;
}

void my_strcat(char* dest_, const char* src_)
{
   while (*dest_)
   {
      dest_++;
   }
   while (*src_)
   {
      *dest_ = * src_;
      dest_++;
      src_++;
   }
   return src_;
}

#include <stdio.h>

int my_strcmp(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        }
        else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    return 0; 
}
#include <stdio.h>

char* my_strstr(const char* string, const char* substring) {
    if (*substring == '\0') {
        return (char*)string;
    }

    char* ptr;
    while (*string) {
        if (*string == *substring) {
            ptr = (char*)string;
            const char* sub = substring;
            while (*ptr && *sub && *ptr == *sub) {
                ptr++;
                sub++;
            }
            if (*sub == '\0') {
                return (char*)string;
            }
        }
        string++;
    }

    return NULL;
}






