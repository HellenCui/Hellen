#include <stdio.h>


char *my_strstr(char *str,char const *to_find)
{	
    
    int n;

    if(*to_find)

    {

        while(*str)

        {

            for(n=0;*(str+n)==*(to_find+n);n++)

            {

                if(!*(to_find+n+1))

                    return(char*)str;

            }

            str++;

        }

        return NULL;

    }

    else

        return (char*)str;
}

int main(int argc,char *argv[]){

    char *s="GoldenGlobalView";
    char *l="lob";
    char *pts = my_strstr(s,l);
    printf("%s\n",pts);

    return 0;
}



