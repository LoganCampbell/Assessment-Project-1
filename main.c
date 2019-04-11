#include <stdio.h>

int main() 
{
    int menu; //used to choose between menu 1 2 or 3 by storing value for IF loop
    printf("Welcome to Ciphers 101\n\n");
    printf("Enter a number to Select a Menu: 1.Rotation Cipher    2.Substitution Cipher   3.Quit\n\n");
   
    scanf("%d", &menu); //scans which number input for choosing menu
    
    if(menu==1) //Enter Rotation Cipher section
    {
        printf("You selected Rotation Cipher!\nRunning program...\n\n");
        
        int r;// value representing rotation
        int x; //value for upcoming switch statement
        char text[20]; // string containing text
        
        printf("Enter Text: \n");
        scanf("%s", &text); //scans entered text
        printf("You Entered: %s\n\n", text);
        
        printf("Please select an option: 1. Encryption      2. Decryption \n\n");
        scanf("%d", &x); //scans integer to select either option
        
        switch(x) // selects a case based off integer read from previous scanf()
        {
            case 1:
                for(r=0; (r<20 && text[r] !='\0'); r++);
                    text[r]=text[r]+1;
                printf("Text encrypted to: %s\n", text);
                break;
        }
//rotation cipher:
         
/*initialise variables or Array
define rotation amount (Key) //rotate by 1 e.g a=.b, b=c... ??
enter message text // read message in
read key 
encrypt message // encyrypt using rotation
    -encrypt by looping over message and do substitutions
store substitution
*/ 
    }

    if(menu==2)  // Enters Substitution Cipher section
    {
        printf("You selected Substitution Cipher!\nRuning program...\n");
    }

    if(menu==3) // quits program
    {
       printf("Quitting...\n  ");
       return 0;
    }
    
    if(menu>3 || menu<=0) //if menu anything except 1 2 or 3 print.
        printf("invalid choice, please selected a number 1, 2 or 3\n  ");  
     
}




//Substitution Cipher:





