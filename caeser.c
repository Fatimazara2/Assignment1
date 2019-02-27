#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main (int argc, string argv[])
{
    int i;
    int b;
    string p;
    if(argc==2)
    {
        printf("use:");
        return 1;
    }
    int k=atoi(argv[2]);
    if(k<0)
    {
        printf("the key must be positive\n");
    }
    p= get_string("plaintext:");
    // plaintext and ciphertext
    for(i=0, b=strlen (p);i<b;i++)
    {
        if(islower(p[i]))
        {
            printf("%c",(p[i]-'a'+k)%26+'a');
        }
        else if(isupper(p[i]))
        {
            printf("%c",(p[i]-'A'+k)%26+'A');
        }
        else
        {
            printf("%c" ,p[i]);

        }
        printf("\n");
        }
    }
