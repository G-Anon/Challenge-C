#include <stdio.h>

int main()
{
    int n= 25;//dont feel like inputtin from anywhere
    int bitvalue;
    for(int i=31; i>=0;i--)
    {
        bitvalue=n>>i;
        if(bitvalue & 1)
        printf('1');
        else
        printf('0');
        
    }

}
