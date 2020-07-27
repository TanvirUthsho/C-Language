//Finding which Char I Pressed
#include<stdio.h>
int main()
{
char c;
printf("Enter a Character:");
scanf("%c",&c);
if(c=='A' || c=='a')
printf("You pressed with A");
else if(c=='B' || c=='b')
printf("You pressed with B");
else if(c=='C' || c=='c')
printf("You pressed with C");
else
printf("You pressed a different key");
return 0;
}