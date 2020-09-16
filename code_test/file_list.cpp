#include <stdio.h> 
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(void) 
{ 
    struct stat sb;
    struct dirent *de;
  
    DIR *dr = opendir("."); 
  
    if (dr == NULL)
    { 
        printf("Could not open current directory" );

        return 0; 
    } 
  
    while ((de = readdir(dr)) != NULL) 
        if ( stat(de->d_name, &sb ) == 0 ) {
            cout << setw(8) << (double) sb.st_size / 1024 << setw(32) << ctime(&sb.st_mtime) << setw(64) << de->d_name << endl;
        }
        else{
            printf("Couldn't stat file\n");
        }
    closedir(dr);
    return 0;
} 

