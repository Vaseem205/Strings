#include <stdio.h>
#include <string.h>

/*

int main(void){

    char name[] = "vaseem";

    printf("%s\n", name);

    // You can edit the string, becuase that string is present on function's stack
    name[0] = 'V';
    printf("%s\n", name);

    return 0;

}

*/


/*

OUTPUT:
vaseem

NOTE:
char name[] = "vaseem";

is equivalent to:
char name[] = {'v', 'a', 's', 'e', 'e', 'm', '\0'};

*/


int main(void){

    char *ptr = "Vaseem";

    printf("%s\n", ptr);

    // You cannot edit the string, becuase that string is present in read-only memory
    //ptr[0] = 'V';
    //printf("%s\n", ptr);
    
    return 0;
}

/*

OUTPUT:
Vaseem

char *ptr = "Vaseem";

is equivalent to:
static const char name[] = "Vaseem";
char *ptr = name;

*/

/*

NOTE:

char name[] = "hello"; You cannot reassign the name[] to different string, but the string is editable (the string is saved on function's stack)

char *name = "hello"; You can reassign the *name to different string, but the string is not editable (the string is saved on read-only memory)

*/

