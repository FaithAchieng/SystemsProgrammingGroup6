#include <stdio.h>   // Include the standard input/output library
#include <stdlib.h>  // Include the standard library for functions like exit
#include <unistd.h>  // Include the POSIX operating system API for functions like fork

int main() {
    pid_t pid;  // Declare a variable to store the process ID

    // Create a new process by duplicating the current process
    pid = fork();

    if (pid < 0) {
        // If fork() returns a negative value, the creation of the child process failed
        fprintf(stderr, "Fork failed\n");
        return 1;  // Return 1 to indicate an error
    } else if (pid == 0) {
        // If fork() returns 0, we are in the child process
        printf("Hello from the Child process! PID: %d\n", getpid());
    } else {
        // If fork() returns a positive value, we are in the parent process
        printf("Hello from the Parent process! PID: %d\n", getpid());
        printf("Child process has PID: %d\n", pid);
    }

    return 0;  // Return 0 to indicate successful execution
}
