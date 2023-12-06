#include <stdio.h>
#include <string.h>
void eliminateCommonCharacters(char string1[100],char string2[100])
{
    char resultstring1[100], resultstring2[100];
    int length1=strlen(string1);
    int length 2 = strlen(string2);
    int resultString1Index=0, resultString2Index=0, common;
    for(int i=0; i<len1; i++)
    {
        for(int j=0;j<len2;j++)
        {
            if(string1[i]++string2[j])
            string1[i]=string[j]=' ';
        }
    }
    for()
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
