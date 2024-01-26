/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct BYTE_STR
{
    char BIT_0 : 1;
    char BIT_1 : 1;
    char BIT_2 : 1;
    char BIT_3 : 1;
    char BIT_4 : 1;
    char BIT_5 : 1;
    char BIT_6 : 1;
    char BIT_7 : 1;
    
    BYTE_STR()
    {
        BIT_0 = 0;
        BIT_1 = 0;
        BIT_2 = 0;
        BIT_3 = 0;
        BIT_4 = 0;
        BIT_5 = 0;
        BIT_6 = 0;
        BIT_7 = 0;
    };
    
    char bitToByte()
    {
        char out = 0;
        out |= (BIT_0 & 0x01) << 0;
        out |= (BIT_1 & 0x01) << 1;
        out |= (BIT_2 & 0x01) << 2;
        out |= (BIT_3 & 0x01) << 3;
        out |= (BIT_4 & 0x01) << 4;
        out |= (BIT_5 & 0x01) << 5;
        out |= (BIT_6 & 0x01) << 6;
        out |= (BIT_7 & 0x01) << 7;
        return out;
    };
};

int main()
{
    BYTE_STR bStr;
    
    bStr.BIT_1 = 1;
    
    printf("SIZE_BYTE[%ld]\n", sizeof(bStr));
    printf("BITs:\n");
    printf("[0][1][2][3][4][5][6][7]\n");
    printf("[%d]", (bool)(bStr.BIT_0));
    printf("[%d]", (bool)(bStr.BIT_1));
    printf("[%d]", (bool)(bStr.BIT_2));
    printf("[%d]", (bool)(bStr.BIT_3));
    printf("[%d]", (bool)(bStr.BIT_4));
    printf("[%d]", (bool)(bStr.BIT_5));
    printf("[%d]", (bool)(bStr.BIT_6));
    printf("[%d]", (bool)(bStr.BIT_7));
    printf("\nBYTE=[%x]\n", bStr.bitToByte() & 0xff);
    

    return 0;
}
