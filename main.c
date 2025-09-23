/* 
AUTHOR: Kael Villa
DATE: SEPT 22 2025 
*/

// our "git" will be called kav 
// Create a function that will create a directory (KAV) whenever it is called (kav init)  

// **** THIS IS IMPORTANT 
// **** I just recreated the kav.exe file but I had already done that it is now in my bin folder and will work just putting so 
// ****                                                              I can see what I did in git incase im on another computer 
#include <stdio.h>
#include <stdlib.h>
#include <direct.h>   // For _mkdir on Windows
#include <errno.h>

int main(int argc, char *argv[]) {
    const char *path;

    if (argc > 1) { // Just in case someone would use an absolute path (for what ever reason)
        path = argv[1];
    } else {
        path = ".";
    }

    char fullPath[512];
    snprintf(fullPath, sizeof(fullPath), "%s\\kav", path);

    if (_mkdir(fullPath) == 0) {
        printf("Directory created at: %s\n", fullPath);
    } else {
        if (errno == EEXIST) {
            printf("Directory already exists at: %s\n", fullPath);
        } else {
            perror("Error creating directory");
        }
    }

    return 0;
}