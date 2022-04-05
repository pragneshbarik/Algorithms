#include<stdio.h>
#include<string.h>
#include<iostream>

void swap(int x, int y);{
    x=y;
}

int main(int argc, char const *argv[])
{
    int x=10, y=20;
    swap(x, y);
    return 0;
}
