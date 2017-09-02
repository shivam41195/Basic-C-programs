#include<stdio.h>
#include<stdlib.h>
typedef struct
{
                char name[20];
                int id;
}student;
 
void search(void);
void add(void);
void delete(void);
void list(void);
void edit(void);
 
void search(void)
{
                FILE* fp;
                int sid, found=0;
                student s;
               
                fp = fopen("Studat.txt", "r+b");
                if(fp==NULL)
                {
                                printf("\nFile does not exist. Creating new file");
                                fp=fopen("Studat.txt", "w");
                                return;
                }
                printf("\nEnter ID to search: ");
                scanf("%d", &sid);
                while(fread(&s, sizeof(student), 1, fp)!=0)
                {
                                if(sid == s.id)
                                {
                                                printf("\nStudent Found:\n----------");
                                                printf("\nName: %s\nID = %d", s.name, s.id);
                                                found = 1;
                                                break;
                                }
                }
                if(found == 0)
                {
                                printf("\nStudent not found");
                }
                fclose(fp);
}
void edit()
{
                FILE* fp;
                int sid, found=0;
                student s;
               
                fp = fopen("Studat.txt", "r+b");
                if(fp==NULL)
                {
                                printf("\nFile does not exist. Creating new file");
                                fp=fopen("Studat.txt", "w");
                                return;
                }
                printf("\nEnter ID to search: ");
                scanf("%d", &sid);
                while(fread(&s, sizeof(student), 1, fp)!=0)
                {
                                if(sid == s.id)
                                {
                                                printf("\nStudent Found:\n----------");
                                                printf("\nName: %s\nID = %d", s.name, s.id);
                                                found = 1;
                                                break;
                                }
                }
                if(found == 0)
                {
                                printf("\nStudent not found");
                }
                else
                {
                                fseek(fp, (int)-sizeof(student), SEEK_CUR);
                                printf("\nEnter new data:\n------------ ");
                                printf("\nEnter new name: ");
                                scanf("%s", s.name);
                                printf("\nEnter new ID: ");
                                scanf("%d", &s.id);
                                fwrite(&s, sizeof(student),1,fp);
                                printf("\nStudent data updated");
                               
                }
                fclose(fp);
}
void delete()
{
                FILE* fp;
                FILE* ft;
                int sid, found=0;
                student s;
               
                fp = fopen("Studat.txt", "r+b");
                if(fp==NULL)
                {
                                printf("\nFile does not exist. Creating new file");
                                fp=fopen("Studat.txt", "w");
                                return;
                }
                printf("\nEnter ID to delete: ");
                scanf("%d", &sid);
                while(fread(&s, sizeof(student), 1, fp)!=0)
                {
                                if(sid == s.id)
                                {
                                                printf("\nStudent Found:\n----------");
                                                printf("\nName: %s\nID = %d", s.name, s.id);
                                                found = 1;
                                                break;
                                }
                }
                if(found == 0)
                {
                                printf("\nStudent not found");
                }
                else
                {
                                rewind(fp);
                                ft = fopen("stutemp.txt", "a+b");
                                while(fread(&s, sizeof(student),1,fp)!=0)
                                {
                                                if(sid == s.id)
                                                {
                                                                continue;
                                                }
                                                else
                                                {
                                               
                                                                fwrite(&s,sizeof(student),1,ft);
                                                }
                                }
                                fclose(fp);
                                fclose(ft);
                                remove("studat.txt");
                                rename("stutemp.txt", "studat.txt");
                                printf("\nData deleted successfully");
                }
                fclose(fp);
}
void add()
{
                FILE* fp;
                student s;
               
                fp = fopen("Studat.txt", "a+b");
                if(fp==NULL)
                {
                                printf("\nFile does not exist. Creating new file");
                                fp=fopen("Studat.txt", "w");
                                return;
                }
                printf("\nEnter new name: ");
                scanf("%s", s.name);
                printf("\nEnter new ID: ");
                scanf("%d", &s.id);
               
                fwrite(&s, sizeof(student),1,fp);
                printf("\nData Added Successfully");
               
                fclose(fp);
}
void list()
{
                                FILE* fp;
               
                student s;
               
                fp = fopen("Studat.txt", "r+b");
                if(fp==NULL)
                {
                                printf("\nFile does not exist. Creating new file");
                                fp=fopen("Studat.txt", "w");
                                return;
                }
               
                while(fread(&s, sizeof(student), 1, fp)!=0)
                {
                                printf("\nName: %s\nID = %d", s.name, s.id);
                }
               
                fclose(fp);
}
 
int main()
{
                int choice;
                do
                {
                                system("cls");
                                printf("\nMAIN MENU\n-------------");
                                printf("\n1) Add\n2) Edit\n3) Delete\n4) Search\n5) List\n6) Exit");
                                printf("\n----------------\nEnter your choice: ");
                                scanf("%d", &choice);
                               
                                switch(choice)
                                {
                                                case 1:
                                                                add();
                                                                break;
                                                case 2:
                                                                edit();
                                                                break;
                                                case 3:
                                                                delete();
                                                                break;
                                                case 4:
                                                                search();
                                                                break;
                                                case 5:
                                                                list();
                                                                break;
                                                case 6:
                                                                break;
                                                default:
                                                                printf("\nInvalid Choice");
                                                                break;                                                  
                                }
                                printf("\n");
                                system("pause");
                }while(choice != 6);
                return(0);
}