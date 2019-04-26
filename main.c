#include <stdio.h>
const int text[' '];

int main() 
{
    int menu; //used to choose between menu 1 2 or 3 by storing value for IF loop
    printf("Welcome to Ciphers 101\n\n");
    printf("Enter a number to Select a Menu: 1.Rotation Cipher    2.Substitution Cipher   3.Quit\n\n");
   
    scanf("%d", &menu); //scans which number input for choosing menu
    int k = 7;
    if(menu==1) //Enter Rotation Cipher section
    {
        printf("You selected Rotation Cipher!\nRunning program...\n\n");
        
        int r;// value representing rotation
        int x; //value for upcoming switch statement
        unsigned char text[600]; // string containing text
        
        printf("Enter Text: \n");
        scanf(" %[^\n]s", &text); //scans entered text (THE [^\N] INCLUDES SPACES)
        printf("You Entered: %s\n\n", text);
        
        printf("Please select an option: 1. Encryption      2. Decryption \n\n");
        scanf("%d", &x); //scans integer to select either option
        
        switch(x) // selects a case based off integer read from previous scanf()
        {
            case 1: // encryption case
                for(r = 0; (r < 600 && text[r] != '\0'); r++)
                { // while the rotation is within the array size, incriment and substitute each ascii value
                
                if (text[r] == ' ')
                    {
                    }
                else
                {
                text[r] = text[r] + k; //is the key for rotation. Rotates by k value
                }           

                  
                if(((int)text[r])>90)
                {
                     if(text[r]==32)   ;             
                     
                    text[r]=((text[r]-65)%26)+65; // rotates values back around i.e 'z' becomes 'a' if rotation by 1
                  
                }
                  
                }
            printf("Encrpted Text: %s\n", text);
            break;
            
            
            case 2: // decryption phase
            for(r = 0; (r < 600 && text[r] != '\0'); r++)// while the rotation is within the array size, incriment and substitute each ascii value
                { 
                
                if (text[r] == ' ') //if ascii value 'space' ignore and continue
                    {
                    }
                     
                else
                {
                text[r] = text[r] - k; // key for rotation. Rotates by k value 
                }           

                 
                if(((int)text[r])>90) //if ascii goes above 90 do stuff 
                {
                     if(text[r]==' ');    //if ascii value is 'space' ignore it         
                     else text[r]=((text[r]-65)%26)+65; // rotates values back around i.e 'z' becomes 'a' if rotation by 1
                }
                
                if(text[r]<65 && text[r]>44)
                    text[r]=text[r]+26;
                    
                    if(text[r]==58)
                       text[r]=text[r]+26;
                
                }   
                
                
                
              

                
               
            printf("Decrypted Text: %s\n", text);
            break;
            
            default: 
            printf("**ERROR**\ninput numerical value 1 or 2\n");
                
            
                
        }

    }

    if(menu==2)  // Enters Substitution Cipher section
    {
        printf("You selected Substitution Cipher!\nRuning program...\n");
       
       
    if(menu==3) // quits program
    {
       printf("Quitting...\n  ");
       return 0;
    }
    
    if(menu>3 || menu<=0) //if menu anything except 1 2 or 3 print.
        printf("invalid choice, please selected a number 1, 2 or 3\n  ");  
     
}
}








//Substitution Cipher:





