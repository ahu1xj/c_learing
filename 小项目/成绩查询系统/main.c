#include <stdio.h>
#include <string.h>

#define MAX 60

struct student {
    char name[20];
    int age;
    int id;
    char sex[10];
};

struct class_room {
    struct student st[MAX];
    int n; // 当前人数
};

// --- 功能函数 ---
void printf_menu(){
	printf("        学生管理系统        \n");
	printf("----------------------------\n");
	printf("|1、添加学生信息            |\n");
	printf("|2、显示所有学生信息        |\n");
	printf("|3、查询学生信息            |\n");
	printf("|4、删除学生信息            |\n");
	printf("|5、修改学生信息            |\n");
	printf("|6、退出                    |\n");
	printf("----------------------------\n");
	printf("请输入相应的序号选择!       \n");
}
void add_student(struct class_room *WLW) {
    if (WLW->n >= MAX) {
	printf("班级人数已满"); 
	   return;
 }
    printf("输入姓名, 年龄, ID, 性别:\n");
	scanf("%s",WLW->st[WLW->n].name);
	scanf("%d",&WLW->st[WLW->n].age);
	scanf("%d",&WLW->st[WLW->n].id);
	scanf("%s",WLW->st[WLW->n].sex);
    WLW->n++; // 人数递增
}

int find_student(struct class_room *WLW) {
    int id;
    printf("请输入搜索ID: ");
    scanf("%d", &id);

    /* TODO: 编写循环遍历 WLW->st，匹配成功返回下标，失败返回 -1 */
    for(int i=0;i<WLW->n;i++)
    {
	    if(id==WLW->st[i].id)
	{
	   printf("the student is exist\n");
	printf("the student name is %s\n",WLW->st[i].name);
	printf("the student age is %d\n",WLW->st[i].age);
	printf("the student id is %d\n",WLW->st[i].id);
	printf("the studendt sex is %s\n",WLW->st[i].sex);
	return i;
	}
}
	printf("the student is not exist\n");
	return -1;
}

void remove_student(struct class_room *WLW) {
    int index = find_student(WLW);
    if (index == -1) return;

    /* TODO: 编写删除逻辑 */
    // 提示：从 index 开始，将后续元素向前移动一位
    // 别忘了更新 WLW->nW
	for(int i=index;i<WLW->n-1;i++)
	{
		strcpy(WLW->st[i].name,WLW->st[i+1].name);
		strcpy(WLW->st[i].sex,WLW->st[i+1].sex);
		WLW->st[i].age=WLW->st[i+1].age;
		WLW->st[i].id=WLW->st[i+1].id;
	}
    WLW->n--;
    printf("删除成功！\n");

    
}

void show_student(struct class_room *WLW) {
    /* TODO: 遍历并打印所有学生信息 */
	for(int i=0;i<WLW->n;i++)
	{
		printf("the %d student name is %s\n",i+1,WLW->st[i].name);
		printf("the %d student age is %d\n",i+1,WLW->st[i].age);
		printf("the %d student id is %d\n",i+1,WLW->st[i].id);
		printf("the %d student sex is %s\n",i+1,WLW->st[i].sex);
	}
}

void change_student(struct class_room *WLW) {
	int index,choose;
	index=find_student(WLW);
	if(index!=-1)
	{
		printf("情选择要修改的部分\n");
		printf("修改姓名输入1\n");
		printf("修改年龄输入2\n");
		printf("修改id输入3\n");
		printf("修改性别输入4\n");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
				printf("请输入新的学生姓名：\n");
				scanf("%s",WLW->st[index].name);
				break;
			case 2:
				printf("请输入新的学生年龄：\n");
				scanf("%d",&WLW->st[index].age);
				break;
			case 3:
				printf("请输入新的学生id：\n");
				scanf("%d",&WLW->st[index].id);
				break;
			case 4:
				printf("请输入新的学生性别：\n");
				scanf("%s",WLW->st[index].sex);
				break;
			default:
				printf("请输入1-4");
		}
	}
}
//主函数
int main() 
{
	struct class_room WLW;//定义一个班级为WLW存储学生 
	WLW.n=0;//初始化，学生人数为0 
	
	while(1)//无限循环
	{
		loop:
			printf_menu();//调用主菜单函数输出主菜单
			int choose;//定义一个序号
			scanf("%d",&choose);
	
		switch(choose)
		{
			case 1:
				add_student(&WLW);//添加学生
				break;
			case 2:
				show_student(&WLW);//显示学生
				break;
			case 3:
				find_student(&WLW);//查询学生
				break;
			case 4:
				remove_student(&WLW);//删除学生
				break; 
			case 5:
				change_student(&WLW);//修改学生
				break;
			case 6:
				return 0;//退出程序
			default://若输出错误的序号，则跳转至重新输出
				printf("输出错误，请重新输入！\n");
				goto loop;	
		}
		
	}
}

