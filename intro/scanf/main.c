

#include <stdio.h>
#include <stdbool.h>

int main()
{

    enum gender {male, female};
    enum gender myGender;
    myGender = male;
    enum gender anotherGender = female;
    printf(myGender);
    printf(anotherGender);
    return 0;
}
