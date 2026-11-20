#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
parse the CL Arguments
    Do stuff along side their flags
    -h: help
    -n: enumarate lines on stdout
    

Syntax: fpeek [options] <file>


*/


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
                // free the output of read_file()
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
    // open file at file path [arg *fpath]
        // allocate space in the size of file content
        // return file content
        // REMEMBER TO FREE ME IN THE PARSE FUNCTION!!!
    
}