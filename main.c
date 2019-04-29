#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


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
        unsigned char text[600]; // string containing text of 600 length
        
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
        
        
        
        
         int choice; //variable used for switch statement
         int i;
         char encrypt[100];
         char text[100];
         char c;
         char alphabet [26]={'Z','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
         
         
         
         printf("Enter Text: \n");
         scanf(" %[^\n]s ", &text); //scans inputted text and whitespace and stores it in array text[100]
         printf("You Entered: %s\n",text);
         
         text[i]=c;
         
         
       
        printf("Select an Option: \n1.Encryption \n2.Decryption \n3.Quit \n");
        scanf("%d", &choice); //scans inputted numerical value and sotres it in int choice for switch statement
        
       
        
        switch(choice) //switch statement uses int value in choice and uses that to select between each case
        {
            
            case 1: //encryption
            printf("You selected Ecryption!\n");
            
           for(i = 0; i < 26; i++) // for loop scans through loop text[] and incriments from text[0] to text[25]
           {
                if(c=='A') //if the text in text[] = ascii value for A, then turn that letter into the first element in the array alphabet[]
            {
                c=alphabet[0];
                printf("%s", c);
            }

            
            else if(c=='B')
                c=alphabet[1];
             
            else if(c=='C')
                c=alphabet[2];
                
            else if(c=='D')
                c=alphabet[3];
                
            else if(c=='E')
                c=alphabet[4];
                
            else if(c=='F')
                c=alphabet[5];
                
            else if(c=='G')
                c=alphabet[6];
                
            else if(c=='H')
                c=alphabet[7];
                
            else if(c=='I')
                c=alphabet[8];
            
            else if(c=='J')
                c=alphabet[9];
                
            else if(c=='K')
                c=alphabet[10];
                
            else if(c=='L')
                c=alphabet[11];
                
            else if(c=='M')
                c=alphabet[12];
                
            else if(c=='N')
                c=alphabet[13];
                
            else if(c=='O')
                c=alphabet[14];
                
            else if(c=='P')
                c=alphabet[15];
                
            else if(c=='Q')
                c=alphabet[16];
                
            else if(c=='R')
                c=alphabet[17];
                
            else if(c=='S')
                c=alphabet[18];
                
            else if(c=='T')
                c=alphabet[19];
                
            else if(c=='U')
                c=alphabet[20];
                
            else if(c=='V')
                c=alphabet[21];
                
            else if(c=='W')
                c=alphabet[22];
                
            else if(c=='X')
                c=alphabet[23];
                
            else if(c=='Y')
                c=alphabet[24];
                
            else if(c=='Z')
                c=alphabet[25];
                
            
        }
        printf("%c", c); //prints newly encrypted array
           
        break;
          
           
            
            case 2:
            printf("You selected Decryption!\n");
            
            break;
            
            case 3:
            printf("Goodbye...");
            break;
        }
        
        
            
        
        
       
    if(menu==3) // quits program
    {
       printf("Quitting...\n  ");
       return 0;
    }
    
    if(menu>3 || menu<=0) //if menu anything except 1 2 or 3 print.
        printf("invalid choice, please selected a number 1, 2 or 3\n  ");  
      
}}









//Substitution Cipher:





