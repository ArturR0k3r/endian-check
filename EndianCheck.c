#include<stdio.h>

//first method
void show_mem_rep(char* start, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}
int check1()
{
    int i = 0x01234567;//если в обратной последовательности == little endian если так же то big endian 
    show_mem_rep((char*)&i, sizeof(i));
    getchar();
    return 0;
}
//second method
int check2()
{
    unsigned int i = 1;
    char* c = (char*)&i;
    if (*c)
        cout << "Little endian";
    else
        cout << "Big endian";
    return 0;
}
int main()
{
    check1();
    //check2();
    return 0;
}