#include <stdio.h>
int main(void)
{
    char p1, p2, p3;
    printf("Nhap 3 nguoi choi: ");
    scanf("%c %c %c", &p1, &p2, &p3);
    switch(p1)
    {
        case 'B':
            switch(p2)
            {
                case 'K':
                    switch (p3)
                    {
                    case 'K':
                        printf("W L L"); break;
                    case 'G':
                        printf("DRAW"); break;
                    case 'B':
                        printf("W L W"); break;
                    }
                    break;
                case 'B':
                    switch(p3)
                    {
                        case 'B':
                            printf("DRAW"); break;
                        case 'K':
                            printf("W W L"); break;
                        case 'G':
                            printf("L L W"); break;
                    }
                    break;
                case 'G':
                    switch (p3)
                    {
                        case 'G':
                            printf("L W W"); break;
                        case 'B':
                            printf("L W L"); break;
                        case 'K':
                            printf("DRAW"); break;
                    }
                    break;
            }
            break;
        case 'G':
            switch(p2)
            {
                case 'G':
                    switch(p3)
                    {
                        case 'K':
                            printf("L L W"); break;
                        case 'G':
                            printf("DRAW "); break;
                        case 'B':
                            printf("W W L"); break;
                    }
                    break;
                case 'K':
                    switch (p3)
                    {
                    case 'K':
                        printf("L W W"); break;
                    case 'G':
                        printf("L W L"); break;
                    case 'B':
                        printf("DRAW"); break;
                    }
                    break;
                case 'B':
                    switch (p3)
                    {
                        case 'G':
                            printf("W L W"); break;
                        case 'B':
                            printf("W L L"); break;
                        case 'K':
                            printf("DRAW"); break;
                    }
                    break;
            }
            break;
        case 'K':
            switch(p2)
            {
                case 'B':
                    switch (p3)
                    {
                        case 'K':
                            printf("L W L"); break;
                        case 'G':
                            printf("DRAW"); break;
                        case 'B':
                            printf("L W W"); break;
                    }
                    break;
                case 'K':
                    switch(p3)
                    {
                        case 'K':
                            printf("DRAW"); break;
                        case 'G':
                            printf("W W L"); break;
                        case 'B':
                            printf("L L W"); break;
                    }
                    break;
                case 'G':
                    switch (p3)
                    {
                        case 'K':
                            printf("W L W"); break;
                        case 'G':
                            printf("W L L"); break;
                        case 'B':
                            printf("DRAW"); break;
                    }
                    break;
            }
        break;
    }
}