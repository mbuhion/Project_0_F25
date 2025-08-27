#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* rand_string(char *string, size_t size){
    // create const char string for each letter of the alphabet
    const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    if(size == 0){
        return NULL; // if the size is 0, no letters will be assigned to string. return null
    }

    //loop through index of string and assign a random char until string is of size
    for(size_t i = 0; i < size; i++){
        int num = rand() % (int)(sizeof(alpha) - 1); // generates num for index of random char
        string[i] = alpha[num]; // assigns random char to string
    }

    string[size - 1] = '\0'; // null terminate the end of string
    return string;
}