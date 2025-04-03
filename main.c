#include <stdio.h> // printf fgets()
#include <stdlib.h> // malloc free exit()
#include <string.h> // //strtok() strcmp()
#include <unistd.h> //fork() execvp() chdir()
#include <errno.h> // error handling perror()
#include <sys/wait.h> // // process management waitpid()
#include <sys/types.h> ////pid_t()
#include <pwd.h>


char buff[1024];
void printdir()
{
    // TODO PRINT THE HOSTNAME AND USERNAME OF THE COMPUTER USING gethostname() and getlogin()

    char host_buffer[64];

    gethostname(host_buffer,64);
    char* name = getpwuid(getuid())->pw_name;
    printf("\33[92m%s%s\033[0m",name,"@");
    printf("\33[92m%s\033[0m",host_buffer);
    
    printf(":");
    printf("\33[34;1m~\033[0m");
    
    size_t size = sizeof(buff);

    getcwd(buff,size);
    printf("\33[34;1m%s\033[0m",buff);

    // put $ to make end of directory might switch it back to /
    printf("$ ");
}

char input_buffer[128]; 

void get_input()
{
    printdir();
       
    int size = 128;
    fgets(input_buffer,size,stdin);

}


// Arguments must end with NULL
void execute_command(char* arguments)
{
    pid_t processid = fork();

    if (processid == 0){
        printf("This Is baby");
        // how to tell compiler that it is the location of ls?
        execv(file,arguments);
    }
}
char* usertext = input_buffer;

int main(void){
    get_input();
    printf("%s\n",usertext);
    execute_command(usertext);
    return 0;
}
