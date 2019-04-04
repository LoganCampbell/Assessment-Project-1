#include <stdio.h>

int main() 
{
    int menu; //used to choose between menu 1 2 or 3 by storing value for IF loop
    printf("Welcome to Ciphers 101\n");
    printf("Enter A number to Select a Menu: 1.Rotation Cipher    2.Substitution Cipher   3.Quit\n");
   
    scanf("%d", &menu); //scans which number input for choosing menu
    
    if(menu==1) //Enter Rotation Cipher section
    {
        printf("you selected Rotation Cipher\n");
    }
    if(menu==2)  // Enters Substitution Cipher section
    {
        printf("you selected Substitution Cipher\n");
    }   
    if(menu==3) // quits program
    {
        printf("Quitting...\n");
        return 0;
    }
    if(menu>3 || menu<=0) //if menu anything except 1 2 or 3 print
    {
     printf("invalid choice, please selected a number 1, 2 or 3\n") ;  
    }
}

//rotation cipher:

/*initialise variables or Array
define rotation amount (Key) //rotate by 1 e.g a=b, b=c... ??
enter message text // read message in
read key 
encrypt message // encyrypt using rotation
    -encrypt by looping over message and do substitutions
store substitution
*/ 


//Substitution Cipher:


