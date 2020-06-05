//This code shows that C compilers are aware of preprocessors.
//This code will obviously generate error messages.

#include<stdio.h>
#define CODE \
printf("%d\n", i);
int main(int argc, char** argv)
{
    CODE
    return 0;
}

//Modern C compilers are aware of C preprocessor directives.

/*error: ‘i’ undeclared (first use in this function)
    6 | printf("%d\n", i);
      |                ^
Macro-3.c:9:5: note: in expansion of macro ‘CODE’
    9 |     CODE
      |     ^~~~
Macro-3.c:6:16: note: each undeclared identifier is reported only once for each function it appears in
    6 | printf("%d\n", i);
      |                ^
Macro-3.c:9:5: note: in expansion of macro ‘CODE’
    9 |     CODE
      |     ^~~~
*/