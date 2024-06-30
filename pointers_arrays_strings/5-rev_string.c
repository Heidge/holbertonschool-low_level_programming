/**
 * 
 */

void rev_string(char *s)
{
    int length = 0;
    char *end_ptr = "";
    
    while(s[length])
        length++;
    
    end_ptr = s + (length - 1);

    while (end_ptr > s)
    {
        char ch = *s;
        *s = *end_ptr;
        *end_ptr = ch;
        ++s, --end_ptr;
    }
}