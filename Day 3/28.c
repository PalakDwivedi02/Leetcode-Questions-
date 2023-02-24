int strStr(char * haystack, char * needle){
    if (strstr(haystack, needle))
    {
        return strstr(haystack, needle)-haystack;
    }
    return -1;
}