#include<stdio.h>
#include<string.h>
#define CMD(NAME) char NAME ## _cmd[256] = ""; strcpy(NAME ## _cmd, #NAME);
int main(int argc, char** argv)
{
    CMD(copy)
    CMD(paste)
    CMD(cut)
    char cmd[256];
    scanf("%s", cmd);
    if(strcmp(cmd, copy_cmd) == 0)
    {
        printf("copy");
    }
    if(strcmp(cmd, paste_cmd) == 0)
    {
        printf("paste");
    }
    if(strcmp(cmd, cut_cmd) == 0)
    {
        printf("cut");
    }
    return 0;
}
// ## appends with the string that would be defined

/*
int main(int argc, char** argv)
{
    char copy_cmd[256] = ""; strcpy(copy_cmd, "copy");
    char paste_cmd[256] = ""; strcpy(paste_cmd, "paste");
    char cut_cmd[256] = ""; strcpy(cut_cmd, "cut");
    char cmd[256];
    scanf("%s", cmd);
    if(strcmp(cmd, copy_cmd) == 0)
    {
        printf("copy");
    }
    if(strcmp(cmd, paste_cmd) == 0)
    {
        printf("paste");
    }
    if(strcmp(cmd, cut_cmd) == 0)
    {
        printf("cut");
    }
    return 0;
}
*/