#include <stdio.h> // printf fgets()
#include <stdlib.h> // malloc free exit()
#include <string.h> // //strtok() strcmp()
#include <unistd.h> //fork() execvp() chdir()
#include <errno.h> // error handling perror()
#include <sys/wait.h> // // process management waitpid()
#include <sys/types.h> ////pid_t()


void get_input()
{
    printf("mysh>");
    char buffer[128];
    int size = 128;
    fgets(buffer,size,stdin);

}

void read_commands()
{

}

void execute_commands()
{
    // reads commands and then executes
    read_commands();
}

int main(void){
    get_input();
}
