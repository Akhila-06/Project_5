void main(void) {
    char* VGA_BUFFER = (char*) 0xb8000;
 
    char* msg = "Hello, World!!!";
    int i=0;
    
    
    while(msg[i])
    {
        VGA_BUFFER[i * 2] = msg[i];      // Character
        VGA_BUFFER[i * 2 + 1] = 0x0+i+1;  
	i++;

    }
    
    
    while(1){}
}
