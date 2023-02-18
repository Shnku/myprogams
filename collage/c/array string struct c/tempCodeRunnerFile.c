    char *string;
    printf("\nsizeo is %d", sizeof(string));
    printf("\nenter the string: ");
    // scanf("%s",string);//only takes before whitespace...
    fgets(string, 50, stdin);
    printf("\n%s", string);
    printf("\nsizeo is %d", sizeof(*string));
    // printf("\nsizeo is %d", sizeof(&string)); //! causing error