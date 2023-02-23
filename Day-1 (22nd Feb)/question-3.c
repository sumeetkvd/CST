/*
#include <stdio.h>
#include <string.h>
int main(){
    char destination[] = "First";
    char source[] = "Second";
    strcat(destination,source);
    printf("Result: %s\n",destination);
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

char *own_strcat(char *destination, char *source){
    int i=0,j=0;
    while(destination[i] != '\0'){
        i++;
        //printf("destination i is: %d",i);
    }

    while (source[j] != '\0')
    {
        destination[i] = source[j];
        i++;
        j++;
        //printf("source i is: %d",i);
        //printf("source j is: %d",j);
    }

    destination[i]='\0';
    return destination;
    

}

int main(){

    char destination[] = "First";
    char source[] = "Second";
    own_strcat(destination,source);
    printf("Result: %s\n",destination);
    return 0;
}