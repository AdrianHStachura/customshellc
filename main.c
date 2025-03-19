#include <stdio.h> // printf fgets()
#include <stdlib.h> // malloc free exit()
#include <string.h> // //strtok() strcmp()
#include <unistd.h> //fork() execvp() chdir()
#include <errno.h> // error handling perror()
#include <sys/wait.h> // // process management waitpid()
#include <sys/types.h> ////pid_t()

void printdir()
{
    printf(":~");
    char buff[1024];
    size_t size = sizeof(buff);

    getcwd(buff,size);

    for (int i = 0; i < size;i++)
    {
        if (buff[i] == '=')
        {
            break;
        }
        printf("%c",buff[i]);
        
    }
    printf("/");
}

void get_input()
{
    printdir();
    //printf("mysh>");
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
    return 0;
}
