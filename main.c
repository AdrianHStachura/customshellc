#include <stdio.h> // printf fgets()
#include <stdlib.h> // malloc free exit()
#include <string.h> // //strtok() strcmp()
#include <unistd.h> //fork() execvp() chdir()
#include <errno.h> // error handling perror()
#include <sys/wait.h> // // process management waitpid()
#include <sys/types.h> ////pid_t()



void printdir()
{
    // TODO PRINT THE HOSTNAME AND USERNAME OF THE COMPUTER USING gethostname() and getlogin()

    
    // COLOR THEMES REMOVE LINE printf("\33[92m   TEXT     \033[0m");
    printf(":");
    printf("\33[34;1m~\033[0m");
    char buff[1024];
    size_t size = sizeof(buff);

    getcwd(buff,size);

    for (int i = 0; i < size;i++)
    {
        if (buff[i] == '=')
        {
            break;
        }
        printf("\33[34;1m%c\033[0m",buff[i]);
        
    }
    // put $ to make end of directory might switch it back to /
    printf("$");
}


void get_input()
{
    printdir();
    char input_buffer[128];
    int size = 128;
    fgets(input_buffer,size,stdin);

}

//void read_commands() i genuinly might remove this 
//{

//}

/* Broken there is a scope eroor with the input_buffer but if you put it outside everything breaks TODO FIX IMPORTANT
void execute_commands()
{
    if (strcmp(input_buffer,"exit") == 0)
    {
        printf("exiting");
    }
    
}
*/
int main(void){
    get_input();
    printf("\033[34;1mThis text is darker blue!\033[0m\n");
    execute_commands();
    return 0;
}
