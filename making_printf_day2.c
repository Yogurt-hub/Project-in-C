#include <unistd.h>

void print(char buffer[]);   //my normal print()

int main(){

    //main program.
   
    print("hi\n");    //the contex will pass through the print function(buffer[]).

    return 0;
}

void print(char buffer[]){
    
    int fd = 1;
    int count = 0;
    char *pBuffer = buffer;

    do{

       if(*pBuffer == '\0'){

           break;
        
       } 
       
       pBuffer++;

       count++;

    }while(1);

    write(fd, buffer, count);

}


