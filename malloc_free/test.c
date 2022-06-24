char *dupstring(char *str)
{
    int org_size;
    static char *dup;
    char *dup_offset;

    /* Allocate memory for duplicate */
    size = strlen(str);
    array = (char *)malloc(sizeof(char)*size+1);
    if( array == NULL)
        return( (char *)NULL);

    /* Copy string */
    dup_offset = array;
    while(*org)
    {
        *dup_offset = *org;
        dup_offset++;
        org++;
    }
    *dup_offset = '\0';

    return(dup);
}
