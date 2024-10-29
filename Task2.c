#include <stdio.h>

int main()
{
    unsigned int value = 0x1;
    char *byte_ptr = (char *) &value;

    // Print the addresses of each byte in 'value'
    for (int i = 0; i < 2; i++) {
        printf("Address of 0x%x is %p\n", byte_ptr[i], (void *)&byte_ptr[i]);
    }

    // Check for Little Endian (LSB) or Big Endian (MSB)
    if (*byte_ptr == 1) {
        printf("This system is LSB.\n");
    } else {
        printf("This system is MSB.\n");
    }

    // Determine system architecture by typinh 'gcc -dumpmachine' in the terminal command line
    // this system is a x86_64-linux-gnu 
    // similarly: 
    if (sizeof(void *) == 8) {
    	printf("64-bit gcc\n");
    } else if (sizeof(void *) == 4) {
    	printf("32-bit gcc\n");
    } else {
    	printf("secret 3rd option\n");
    }

    return 0;
}

