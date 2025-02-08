#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*

int main(void){

    char name[3][50]; //3 rows of strings with charachter size of 50

    strcpy(name[0], "Vaseem");
    strcpy(name[1], "Akram");
    strcpy(name[2], "Vaseem");

    printf("%s\n%s\n%s\n", name[0], name[1], name[2]);

    return 0;
}

*/


/*

Vaseem
Akram
Vaseem


*/

/*

int main(void){

    char name[][50]= {"vaseem", "akram", "strings"}; //the charachter size ([50]) should be given

    printf("%s\n%s\n%s\n", name[0], name[1], name[2]);

    return 0;
}

*/


/*

aseem
akram
strings

NOTE:

this is not possible:
char **name= {"vaseem", "akram", "strings"};

Correct way is:
char *name[] = {"vaseem", "akram", "strings"};  /
char **ptr = name;  // Double pointer pointing to the array of pointers

*/

int main(void){

    char *name[]= {"vaseem", "akram", "strings"}; //the charachter size ([50]) should be given
    char **ptr = name;

    printf("%s\n%s\n%s\n", ptr[0], ptr[1], ptr[2]);

    return 0;
}

/*

vaseem
akram
strings

*/
