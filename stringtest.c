//Colin Hosking
//Testing String Functions
//Systems pd05
//2018-09-27

#include <string.h>
#include <stdio.h>

int main(){
    char a[] = "a";
    char b[] = "b";
    char a2[] = "a";
    int ans; 
    
    ans = strcmp(a,b);
    printf("'a' compared to 'b': %d\n",ans); //if first string LESS than second string, RETURNS NEGATIVE #
    
    ans = strcmp(b,a);
    printf("'b' compared to 'a': %d\n",ans); //if first string GREATER than second string, RETURNS POSITIVE #
    
    ans = strcmp(a,a2);
    printf("'a' compared to 'a': %d\n",ans); //if first string EQUAL to second string, RETURNS 0
    
    char fish[] = "fish";
    char cows[] = "cows";
    
    ans = strncmp(fish, cows, 2); //compares first n bytes of each string (first n characters)
    printf("'fish' compared to 'cows': %d\n",ans);
}