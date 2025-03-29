
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

void execute_command()
{
    
}


int main(void){
    get_input();
    printf("%s",input_buffer);
    return 0;
}
