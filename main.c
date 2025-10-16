#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// int our_strlen(char *src){ // src = 1004
//     src = src + 1; // 1005
//     int count = 0;
//     while(*src++){
//         count++;
//     }
//     return count;
//     // int count = 0;
//     // while(true){
//     //     if(src[count] == 0){
//     //         return count;
//     //     }
//     //     count++;
//     // }
// }

int main(){


    // char ch;
    // printf("Vill du fortsätta J/N"); // j
    // scanf(" %c", &ch); // '1'
    // //if(islower(ch)) // 'a'


    // if(toupper(ch) == 'J'){

    // }

    

    // if(ch == 'J' || ch == 'j'){

    // }


    // nil
    // NULL "void" fast för en pekare (INVALID)
    //  NULL = (void *)0


    char text[100];
    printf("Skriv in nåt:");
    scanf(" %s", text);

    // toupper , Stefan   - >STEFAN
    for(int index = 0; index < strlen(text); index++){
        text[index] = toupper(text[index]);
        // if( islower(text[index] ) ){
        //     text[index] = toupper(text[index]);
        // }
    }





    char *ret = strstr(text, "Python");  
    // 'värdet' på text  1004
    // 'värdet' på ret 1007
    if(ret != NULL){
       int pos = ret - text + 1; // 
       printf("du har skrivit ett fult ord på position %d", pos);
    }

    // hej_asdasd_Python_asdasddasasd
    // du har skrivit ett fult ord på position 12
    
    // hej_asdasd_******_asdasddasasd

    // 

    // char *ret = strstr(text, "Python");
    // printf("%s",text); // hejPythonbla
    // printf("%s",ret); // Pythonbla
    // if(ret != NULL) {
    //     memcpy(ret,"******",6); // STRCPY = kopiera in i minnet OCH lägg till en 0:a på slutet
    //     //intf("Go wash your mouth fult ord detected");
    // }
    // printf("%s", text);


    // OM som har skrivit ett fult ord - Python
    // skriv ut "Go wash your mouth"



    // int a;// DEKLARATION = ALLLOKERING
    // printf("%d",a); // ODEFINIERAT VAD SOM  SKRIVS UT
    // a = 12;

    // int a = 12; // DEKLARATION = ALLLOKERING PLUS EN INITIERING


    // char name[11]; // DEKLARATION = ALLLOKERING
    // strcpy(name, "Stefan"); // Stefan är en literal och TEXT-segemntet

    // // TEXT-SEGMENTET är READ ONLY!!!!

    // // char name[11]  = "Stefan"; // Initierar
    // // char *name  = "Stefan"; // Initierar
    // // strcpy(name,"asasdasdasd");



    // // PYTHON
    // // name = input("Vad heter du?")
    // // if name == "Stefan":
    // //     print("Du är riktigt cool!")



    // //int age = 12;
    // // char *, char [] = BARA EN MINNESADDRESS och vi väljer att tolka det som är i den byten som en CHAR
    // char name[11];
    // // char []
    // strcpy(name, "Stefan");
    // int b = 9;
    
    // scanf("%s", name); // "523"
    // int i = atoi(name); // 523


    // //scanf("%d", &age);
    

    // //name = "Stefan";
   
    // // EFTER RAST = CONST CHAR * OK
    // // strlen OK
    // // string to int OK
    // // konkatenera strängar  OK
    // //initiera sträng (textsegmentet) OK
    // // hitta nåt i en sträng
    // // byta ut nåt i en sträng! COOL SHIT!
    // // toupper/tolower

    // // firstName = "Stefan"
    // // lastName = "Holmberg"
    // // fullName = firstName + " " + lastName

    // char firstName[20];
    // char lastName[20];
    // char fullName[42];

    // printf("First name:");
    // scanf(" %s", firstName);
    // printf("Last name:");
    // scanf(" %s", lastName);
    

    // //
    // strcpy(fullName,firstName); //Stefan  1004
    // strcat(fullName," ");  //_     1004  DUBBLA CITATIONMSTYECKEN = STRÄNG  = 0 efteråt, ' ' en char
    // strcat(fullName, lastName);





    // printf("Vad heter du?");
    // scanf(" %s", name); // Buffer overflow möjlig men never mind
    // int len = strlen(name); // 



    // // if 1004 == "Stefan"
    // // strcmp returnerar 
    // // NEGATIVT TAL (-1) om str1 < str2
    // // 0 om str1 == str2
    // // POSITIVT TAL (1) om str1 > str2

    // // int compareValue = strcmp(name, "Stefan");
    // // if(compareValue == 0){
    // //     printf("Du är ganska cool\n");
    // // }

    // if(strcmp(name, "Stefan") == 0){
    //     printf("Du är ganska cool\n");
    // }
    // // !0 - > 1
    // // !1 -> 0
    // // if(!strcmp(name, "Stefan")){
    // //     printf("Du är ganska cool\n");
    // // }







    // printf("Hej hej");
    return 0;
}
