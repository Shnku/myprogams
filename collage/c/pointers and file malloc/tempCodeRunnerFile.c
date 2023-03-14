void file_word_search(FILE *fp)
{
    char word[20], ch;
    int flag = 0;
    printf("\nen the word to search: ");
    fgets(word, 20, stdin);
    while ((ch=fgetc(fp)) != EOF)
    {
        int i = 0;
        char temp[12];
        while ((ch = fgetc(fp)) != ' ')
        {
            temp[i++] = ch; // using fgetc()..reads 2nd character..
        }
        temp[i] = '\n';
        strcmp(temp, word) ? (flag = 1) : (flag = 0);
    }
    flag ? printf("\nnot match") : printf("\nmatch");
}