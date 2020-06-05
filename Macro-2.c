//Defining A Function Like Macro

#define ADD(a, b) a + b
int main(int argc, char** argv)
{
    int x = 2;
    int y = 3;
    int z = ADD(x, y);
    return 0;
}