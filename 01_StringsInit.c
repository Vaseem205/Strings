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

How they are different:

Memory Storage:
    char name[] → Stores "hello" directly in stack memory.
    char *name → Stores an address pointing to "hello" in read-only memory.

Mutability:
    char name[] → Can modify individual characters.
    char *name → Cannot modify (read-only string literal).

Reassignment
    char name[] → Cannot be reassigned (fixed array).
    char *name → Can be reassigned to another string.

*/

