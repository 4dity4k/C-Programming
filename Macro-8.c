#define CONDITION
int main(int argc, char** argv)
{
    #ifdef CONDITION
    int i = 0;
    i++;
    #endif
    int j = 0;
    return 0;
}
/*
int main(int argc, char** argv)
{

    int i = 0;
    i++;

    int j = 0;
    return 0;
}
*/