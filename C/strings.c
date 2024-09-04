// String holds character and uses %c for format specifiers.

#include<stdio.h>

int main()
{

    //you use \"you word\"  when you need to use double quotation in your string.
    // use \'your words\' for single quote
    // use double // for single /

    char greetings[] = "Howdy!! Aren\'t you are so called \"Meshiah\" if the world";
    char fname[] = "Jimmy";

    printf("%s %s", fname, greetings);

    return 0;
}