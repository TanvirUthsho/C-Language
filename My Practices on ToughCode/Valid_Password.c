#include <stdio.h>
#include <string.h>
int main()
{
    unsigned char username[12];
    unsigned char password[12];
    int a, len, hasUpper, hasLower, hasSymb, hasSpecial, hasNum, i, flag;
    unsigned char x;
    i = 0;
    printf("Enter the desired First name: \n");
    scanf("%s", username);
    printf("Enter the desired Last name: \n");
    scanf("%s", username);
    printf("Enter the desired password :\n");
    scanf("%s", password);
    len = strlen(password);
    if (len < 6)
        printf("password length too short , password should be of minimum of 6 characters ");
    else if (len > 12)
        printf("password length too long, password should be of maximum of 12 characters");
    else
    {
        a = strcmp(username, password);
        if (a == 0)

        {
            printf(" weak password, matches with username");
        }
        else
        {

            hasUpper = hasLower = hasSymb = hasSpecial = hasNum = 0;
            flag = 0;

            while (password[i] != '\0')

            {
                x = password[i];
                if (x >= 'a' && x <= 'z')
                    hasLower = 1;
                else if (x >= 'A' && x <= 'Z')
                    hasUpper = 1;
                else if ((x >= 33 && x <= 47) || (x >= 58 && x <= 64) || (x >= 91 && x <= 96)) // symbols ascii range
                    hasSymb = 1;
                else if (x >= 123 && x <= 126) //special symbols ascii range
                    hasSpecial = 1;
                else if (x >= 48 && x <= 57) //numbers range
                    hasNum = 1;
                i++;
            }

            if (hasUpper)
                flag += 10;
            if (hasLower)
                flag += 10;
            if (hasNum)
                flag += 10;
            if (hasSymb)
                flag += 10;
            if (hasSpecial)
                flag += 10;
            printf("flag= %d \n", flag);
            if (flag == 50)
                printf("Five out of Five Star Strength!\n");

            else if (flag == 40)
                printf("Four our of Five Star Strength");

            else if (flag == 30)
                printf("Three out of Five Star Strength");

            else if (flag == 20)
                printf("Two out of Five Star Strength");

            else
                printf("One out of Five Star Strength");

        } //else

    } //else

    getch();
    return 0;
}