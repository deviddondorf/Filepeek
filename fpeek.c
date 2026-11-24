#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

/*
TODO
parse the CL Arguments
    Do stuff along side their flags
    -h: help
    -n: enumarate lines on stdout
    

Syntax: fpeek [options] <file>
*/

#define BUFFER_SIZE 4096;


char *read_file(char *fpath);

int main(int argc, char *argv[])
{



    
}

int parse_args(int argc, char *argv[])
{
    int i;
    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-h") == 0)
        {
            printf("Usage: fpeek [options] <file>\n");
            printf("Options:\n");
            printf("  -h: Display this help message\n");
            printf("  -n: Enumerate lines\n");
            exit(0);
        }
        else if (strcmp(argv[i], "-n") == 0)
        {
            // Handle line enumeration
        }
        else if (argv[i][0] != '-')
        {
            // Handle file input
            // Take the read_file() output
            char* file_content = read_file();
            printf("%s", file_content);
            free(file_content);
            file_content = NULL;
                
        }
        else
        {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            exit(1);
        }
    }
    return 0;
}

char *read_file(char *fpath)
{
    char buffer[BUFFER_SIZE];
    ssize_t bytes_done;
    int fd;
    char *file_content;

    // open file at file path [arg *fpath] and read it.
    fd = open(*fpath, O_RDONLY);
    while ((bytes_done = read(fd, buffer, sizeof(buffer) - 1 )) > 0)
    {
        buffer[bytes_done] = '\0';
    }
    *file_content = malloc(bytes_done + 1);
    // return file content
    // REMEMBER TO FREE ME IN THE PARSE FUNCTION!!!

    return file_content;   
}