#include <stdio.h>
#include <string.h>


int main(){
    // PYTHON
    // name = input("Vad heter du?")
    // if name == "Stefan":
    //     print("Du är riktigt cool!")



    //int age = 12;
    char name[11];
    int b = 9;

    //scanf("%d", &age);
    //scanf("%s", name); // 1004

    //name = "Stefan";
   
    // EFTER RAST = CONST CHAR *

    printf("Vad heter du?");
    scanf(" %s", name); // Buffer overflow möjlig men never mind
    // if 1004 == "Stefan"
    // strcmp returnerar 
    // NEGATIVT TAL (-1) om str1 < str2
    // 0 om str1 == str2
    // POSITIVT TAL (1) om str1 > str2

    // int compareValue = strcmp(name, "Stefan");
    // if(compareValue == 0){
    //     printf("Du är ganska cool\n");
    // }

    if(strcmp(name, "Stefan") == 0){
        printf("Du är ganska cool\n");
    }
    // !0 - > 1
    // !1 -> 0
    // if(!strcmp(name, "Stefan")){
    //     printf("Du är ganska cool\n");
    // }







    printf("Hej hej");
    return 0;
}
