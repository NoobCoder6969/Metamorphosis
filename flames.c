#include <stdio.h>
#include <string.h>
void eliminateCommonCharacters(char string1[100],char string2[100])
{
    char resultstring1[100], resultstring2[100];
    int resultString1Index=0, resultString2Index=0, common;
    for (int i=0;string1[i]!='\0';i++)
    {
        common=0;
        for (int j=0;string2[j]!='\0';j++)
        {
            if(string1[i]==string2[j])
            {
                common=1;
                break;
            }
        }
        if(!common)
        {
            resultstring1[resultString1Index++]=string1[i];
        }
    }
    for (int i=0;string2[i]!='\0';i++)
    {
        int common=0;
        for (int j=0;string1[j]!='\0';j++)
        {
            if(string2[i]==string1[j])
            {
                common=1;
                break;
            }
        }
        if(!common)
        {
            resultstring2[resultString2Index++]=string2[i];
        }
    }
    
    printf("\nFirst resulting string  : %s",resultstring1);
    printf("\nSecond resulting string  : %s",resultstring2);
}

int main()
{
    char name1[100] = "", name2[100] = "";
    printf("\nEnter the first name : ");
    scanf("%s",&name1);
    printf("\nEnter the second name : ");
    scanf("%s",&name2);
    eliminateCommonCharacters(name1,name2);
    return 0;
}
