#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp,*fp2;
    int p;
    char filename[100];
            printf("enter the file name from which you have to remove the extra blank spaces: ");
            scanf("%s",filename);
            printf("%s",filename);
            fp=fopen(filename,"r");
            fp2=fopen("newabcfile.txt","w");  //all the content gets copied to this filename and extra blank spaces are also removed from your file

            while((p=getc(fp))!=EOF)
            {

                fputc(p,fp2);
                if (p==9) // since the ascii code for a blank space is 32
                    {
                              while((p=getc(fp))==9)
                              {
                              }
                    fputc(p,fp2);
                    }
            }

fclose(fp);
fclose(fp2);
//getch();
return 1;
}
