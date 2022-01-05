#include <stdio.h>
#include <string.h>
#include <conio.h>

int main (void)
{
    int internet_status;
    int member_status;
    int thumbprint_set;
    char email1[20];
    char password1 [20];
    char email2[20];
    char password2 [20];
    char address[50];
    int age;
    int bank_account;
    char bank_holder[50];
    char bank_branch[50];
    int payment_method;
    int seriesnumber;
    double amounttopup = 0;
    char username1[50];
    char password3[50];
    double totalbalance;
    double accountbalance = 0.0;
    int confirmation;

    printf("Loading... \n");
    printf("Are you have connect with internet? \n");
    printf("1. Yes \n");
    printf("2. No \n");
    printf("Selection: ");
    scanf("%d", &internet_status);
    printf("\n");

    switch(internet_status)
    {
        case 1: //user connect in E-wallet
            printf("You are connected. Please wait a moment.. \n");
            printf("Already Sign Up? \n");
            printf("1. Yes \n");
            printf("2. No \n");
            printf("Selection: ");
            scanf("%d", &member_status);
            printf("\n");

            switch(member_status)
            {
                case 1: //user are member
                    printf("You're Login.. \n");
                    printf("Please key in your thumbprint \n");
                    printf("1. Yes \n");
                    printf("2. No \n");
                    printf("Selection: ");
                    scanf("%d", &thumbprint_set);
                    printf("\n");

                    switch(thumbprint_set)
                    {
                        case 1: //set thumbprint
                            printf("Login Successful!. Please Wait..");
                            break;

                        case 2: //not set thumbprint
                            printf("Please Enter email:");
                            scanf("%s", &email1);

                            printf("\nPlease enter password:");
                            scanf("%s", &password1);
                            do
                            {

                                printf("Wrong email or password try again!\n");

                                printf("\nPlease Enter email:");
                                scanf("%s", &email1);

                                printf("\nPlease enter password:");
                                scanf("%s", &password1);

                            }
                            while (strcmp(email1, "ismail@gmail.com") != 0 && strcmp(password1, "ism@il123") != 0);
                            printf("Login Successful!.");

                      }
                    break;
                case 2: //user not a member
                    printf("Sign Up Form: ");
                    printf("\nEmail: ");
                    scanf("%s", &email2);
                    printf("\nPassword: ");
                    scanf("%s", &password2);
                    printf("\nAddress: ");
                    scanf("%s", &address);
                    printf("\nAge: ");
                    scanf("%d", &age);
                    if(age > 18)
                    {
                        printf("Bank Detail: \n");
                        printf("Bank Account: ");
                        scanf("%d", &bank_account);
                        printf("Bank Holder: ");
                        scanf("%d", &bank_holder);
                        printf("Bank Branch: ");
                        fgets(bank_branch, 50, stdin);
                    }
                    else
                    {
                        printf("You are under age.");
                    }
                    break;
                }
            printf("Homepage, icon, account_balance, payment_method \n");
            printf("1. Cash \n");
            printf("2. Bank Transfer \n");
            printf("Selection: ");
            scanf("%d", &payment_method);
            printf("\n");

            switch(payment_method)
            {
                case 1: //Cash
                    printf("Enter Amount(min RM5): ");
                    scanf("%d", &amounttopup);
                    if(amounttopup >= 5)
                    {
                        printf("Your Wallet Successful Top Up \n");
                        printf("Notification Payment: Dear customer, you have made payment to your account total RM %d . ", amounttopup);
                        printf("The currnet change in your account is RM %d . ", amounttopup + accountbalance);
                        printf("Thank you for using our E-Wallet.");

                    }
                    else
                    {
                        printf("Your Series Number doesn’t correct");
                    }
                    break;

                case 2: //Bank Transfer
                        printf("Enter Amount(min RM5): ");
                        scanf("%d", &amounttopup);
                        if(amounttopup >= 5)
                        {
                            printf("Bank Login Form: ");

                            printf("\nPlease Enter username:");
                            scanf("%s", &username1);

                            printf("\nPlease enter password:");
                            scanf("%s", &password3);
                            do
                            {
                                printf("Wrong username or password try again!\n");

                                printf("\nPlease Enter username:");
                                scanf("%s", &username1);

                                printf("\nPlease enter password:");
                                scanf("%s", &password3);
                            }
                            while(strcmp(username1, "ismail123") != 0 && strcmp(password3, "ism@il123") != 0);
                            printf("Login Successful! \n");
                            printf("Total balance = %d \n", amounttopup + accountbalance);
                            printf("Receipt: \n");
                            printf("Amount Top Up: RM %d \n", amounttopup);
                            printf("Total Balance: RM %d \n", totalbalance);
                            printf("Series number: 000111222333 \n");
                            printf("Bank Holder: Ismail \n");

                            printf("Are you confirm for this payment? \n");
                            printf("1. Yes \n");
                            printf("2. No \n");
                            printf("Selection: ");
                            scanf("%d", &confirmation);
                            printf("\n");

                            switch(confirmation)
                            {
                                case 1://Yes
                                    printf("Receipt: \n");
                                    printf("Amount Top Up: RM %d \n", amounttopup);
                                    printf("Total Balance: RM %d \n", totalbalance);
                                    printf("Series number: 000111222333 \n");
                                    printf("Bank Holder: Ismail \n");
                                    break;

                                case 2://No
                                    printf("Your Transfer Unsuccessful, Please Try Again.");
                                    break;

                            }
                        }
                        else
                        {
                            printf ("Your Top Up must be more than RM 5");
                        }
                    break;
            }
        case 2: //doesn't have internet connection
            printf("Please check your connection.");
            break;

    }



    return 0;
}
