#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pay_rate = 12.00;
    int a;
    double overtime = 0.0;
    printf("Enter in some number of hours: ");
    scanf("%d", &a);

    if (a > 40){
        overtime = a - 40;
        a = 40;
    }
    double total_pay = a*pay_rate + overtime*(pay_rate * 1.5);
    double after_tax_pay = 0;

    if (total_pay > 450.0){
        after_tax_pay = after_tax_pay + ((total_pay-450)*.75);
        after_tax_pay = after_tax_pay + 150*.8;
        after_tax_pay = after_tax_pay + 300 * .85;

    }
    else if (total_pay > 300.0){
        after_tax_pay = after_tax_pay + ((total_pay-300)*.8);
        after_tax_pay = after_tax_pay + 300 * .85;
    }
    else{
        after_tax_pay = .85*total_pay;

    }
    printf("pay after taxes: %f", after_tax_pay);
    return 0;
}
