#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
string strings[] = {"battle", "boot", "cannon", "iron", "thimble", "top hat"};

string s = get_string ("string : ");

for ( int i =0; i<6; i++)
{
    if (strcmp(strings[i], s) == 0)
    {
        printf("found\n");
        return 0;
    }
printf("not found\n");
return 1;
}

}
