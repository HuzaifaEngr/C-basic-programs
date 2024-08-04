// kernel.c
void main() {
    char* video_memory = (char*) 0xB8000;
    const char* message = "Hello from kernel!";
    int i = 0;
    while (message[i] != '\0') {
        video_memory[i * 2] = message[i];
        video_memory[i * 2 + 1] = 0x07; // Light grey on black background
        i++;
    }
    while (1); // Infinite loop to keep the kernel running
}
