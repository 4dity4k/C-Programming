//Time to use macros in advanced situation. The C code inside main isn't written in C.

#include<stdio.h>
#define PRINT(a) printf("%d\n", a);
#define LOOP(v, s, e) for(int v = s; v <= e; v++){
#define ENDLOOP }
int main(int argc, char** argv)
{
    LOOP(counter, 1, 10)
        PRINT(counter)
    ENDLOOP
    return 0;
}

//Preprocessing
/*
# 4 "Macro-4.c" 2




# 7 "Macro-4.c"
int main(int argc, char** argv)
{
    for(int counter = 1; counter <= 10; counter++){
        printf("%d\n", counter);
    }
    return 0;
}
*/