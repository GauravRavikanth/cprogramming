#include <stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    if(c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u')
    printf("vowel");
else if(c == 'A'||c == 'E'||c == 'I'||c == 'O'|| c == 'U')
printf("vowel");
    else
        printf("consonant");
    return 0;
}
