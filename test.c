#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFF_SIZE 2

int main()
{

    int terminal;
    char buffer[BUFF_SIZE] = "M\n";        // This will store the character to print +  new line
    terminal = open("/dev/tty", O_WRONLY); // systemcall to open terminal
    if (terminal < 0)
        exit(1); // some error happened

    dup2(terminal, STDOUT_FILENO); // use our newly opened terminal as default Standard output

    if (write(terminal, buffer, BUFF_SIZE) != BUFF_SIZE) // systemcall to write to terminal
        exit(1);                                         // We couldn't write anything
}