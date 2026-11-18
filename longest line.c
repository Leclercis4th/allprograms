#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[101]="",arr2[101]="";
    char *in_line=arr1,*max_line=arr2;
    int max=0;
    while (gets(in_line)!=NULL)
    {
        if (strlen(in_line)>strlen(max_line))
        {
            max=strlen(in_line);
            char *hold;
            hold=max_line;
            max_line=in_line;
            in_line=hold;
        }
    }
    printf("%s",max_line);
    return 0;
}