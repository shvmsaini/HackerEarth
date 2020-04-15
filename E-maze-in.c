#include <stdio.h>
#include<string.h>
int main()
{
    char dir[200];
	int i=0;
    scanf("%s", dir,200);
    int path[2] = {0,0};
    while(dir[i]!='\0'){
        if (dir[i] == 'L') {
            path[0] -= 1;
            continue;
        }
        else if (dir[i] == 'R') {
            path[0] += 1;
            continue;
        }
        else if (dir[i] == 'U') {
            path[1] += 1;
            continue;
        }
        else {
            path[1] -= 1;
            continue;
        }
		++i;
    }
    printf("%d %d", path[0], path[1]);
    
    return 0;
}
