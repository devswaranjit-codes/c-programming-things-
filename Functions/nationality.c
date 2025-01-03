#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    char ch;
    printf("Enter 'i/I' for indian and 'b/B' for french: ");
    scanf("%c", &ch);

    if (ch == 'i' || ch == 'I')
    {
        namaste();
    }
    else if (ch == 'b' || ch == 'B')
    {
        bonjour();
    }
    else
    {
        printf("input error, please enter a valid input (i/I or b/B)\n");
    }

    return 0;
}
void namaste()
{
    printf("namaste 🙏\n");
}
void bonjour()
{
    printf("bonjour 🤝\n");
}