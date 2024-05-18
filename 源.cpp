//#include<stdio.h>
//int a[2000010];
//struct node
//{
//	int date, post;
//}sta[2000010];
//int main()
//{
//	int n, m,i;
//	scanf_s("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	int head = 0;
//	int ans = 0;
//	sta[ans].date = a[0];
//	sta[ans].post = 0;
//	for (i = 0; i < n; i++)
//	{
//		while (head <= ans && sta[ans].date > a[i])
//			ans--;
//		sta[++ans].date = a[i];
//		sta[ans].post = i;
//		while (sta[head].post < i - m+1)
//			head++;
//		if(i+1>=m)printf("%d  ", sta[head].date);
//	}
//	printf("\n");
//	head = 0;
//	ans = 0;
//	sta[ans].date = a[0];
//	sta[ans].post = 0;
//	for (i = 0; i < n; i++)
//	{
//		while (head <= ans && sta[ans].date < a[i])
//			ans--;
//		sta[++ans].date = a[i];
//		sta[ans].post = i;
//		while (sta[head].post < i - m + 1)
//			head++;
//		if (i+1 >= m)printf("%d  ", sta[head].date);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 1000
//long long date[MAX];
//int main()
//{
//	int i,k;
//	char ch;
//	i = 0;
//	long long j = 0;
//	while ((ch=getchar())!= '@')
//	{
//		if (ch >= '0' && ch <= '9')
//		{
//			j *= 10;
//			j += ch - '0';
//		}
//		else if (ch == '.')
//		{
//			date[i++] = j;
//			j = 0;
//		}
//		if (ch == '+' || ch == '-' || ch == '/' || ch == '*')
//		{
//			switch (ch)
//			{
//			case '+':k = i - 1; date[k - 1] = date[k - 1] + date[k]; i--; break;
//			case '-':k = i - 1; date[k - 1] = date[k - 1] - date[k]; i--; break;
//			case '/':k = i - 1; date[k - 1] = date[k - 1] / date[k]; i--; break;
//			case '*':k = i - 1; date[k - 1] = date[k - 1] * date[k]; i--; break;
//			}
//		}
//	}
//	printf("%lld", date[0]);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//void e(int a, int b)
//{
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//}
//int* selectsort(int *s)
//{
//	int i = 0, j = 0;
//	int min;
//	for (i = 0; i < sizeof(s); i++)
//	{
//		for (j = i+1; j < sizeof(s); j++)
//		{
//			min = s[i] > s[j] ? s[j] : s[i];
//		}
//		e(min, s[i]);
//	}
//	return s;
//}
//int* sta(int maxsize, int maxvalue)
//{
//	int* a = (int*)malloc(sizeof(int) * rand() % (maxsize + 1));
//	for (int i = 0; i < (sizeof(a)); i++)
//	{
//		a[i] = (rand() % (maxvalue + 1)) - (rand() % maxvalue);
//	}
//	return a;
//}
//int* copy(int* sta)
//{
//	int* a = (int*)malloc(sizeof(int) * (sizeof(sta)));
//	for (int i = 0; i < (sizeof(sta)); i++)
//	{
//		a[i] = sta[i];
//	}
//	return a;
//}
//int main()
//{
//	/*int* p = sta(50, 10);
//	selectsort(p);
//	for (int i = 0; i < sizeof(p); i++)
//		printf("%d\n", p[i]);*/
//	int a[10] = { 1,8,6,7,23,2,-9,4,63,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = i+1; j < 10; j++)
//		{
//			if (a[i] > a[j])
//			{
//				a[i] = a[i] ^ a[j];
//				a[j] = a[i] ^ a[j];
//				a[i] = a[i] ^ a[j];
//			}
//		}
//	}
//	for (int k = 0; k < 10; k++)
//	{
//		printf("%d\n", a[k]);
//	}
//	return 0;
//}
//#include<stdio.h>
//void selectsort(int* a,int size)
//{
//	int* p = a;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i + 1; j < size; j++)
//		{
//			if (a[i] > a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < size; i++)
//		printf("%d\n", a[i]);
//}
//void f2(int* a,int size)
//{
//	for(int i=0;i<size;i++)
//		for (int j = 1; j < size - i; j++)
//		{
//			if (a[j - 1] > a[j])
//			{
//				int temp = a[j - 1];
//				a[j - 1] = a[j];
//				a[j] = temp;
//			}
//		}
//	for (int i = 0; i < size; i++)
//		printf("%d\n", a[i]);
//}
//void f3(int* a,int size)
//{
//	for(int i=1;i<size;i++)
//		for (int j = i - 1; j >= 0 && a[j] > a[j + 1]; j--)
//		{
//			int temp = a[j - 1];
//			a[j - 1] = a[j];
//			a[j] = temp;
//		}
//	for (int i = 0; i < size; i++)
//		printf("%d\n", a[i]);
//}
//int main()
//{
//	int a[10] = { 1,8,6,7,23,2,-9,4,63,10 };
//	selectsort(a,10);
//	f2(a, 10);
//	f3(a, 10);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//bool f(int* a, int num,int L,int R)
//{
//	int mid;
//	if (L > R)
//		return false;
//	if (L = R && a[L] == num)
//		return true;
//	else
//		return false;
//	mid = L + ((R - L) >>1 );
//}
//int main()
//{
//	int a = 2;
//	a=a >> 1;
//	printf("%d", a);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a[5] = { 6,8,4,3,1};
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5 - i-1; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = 0;
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (int z = 0; z < 5; z++)
//		printf("%d\n", a[z]);
//	return 0;
//}
//实训5-1创建一颗二叉树并求它的高度
//#include<stdio.h>
//#include<stdlib.h>
//#define ElemType int
//typedef struct BTNode
//{
//	char data;
//	struct BTNode* lchild, * rchild;
//}BTNode,*Btree;
//void Create(Btree* T)
//{
//	char ch;
//	scanf_s("%c", &ch);
//	if (ch == '#')
//	{
//		*T = NULL;
//		return;
//	}
//	else
//	{
//		*T = (Btree)malloc(sizeof(struct BTNode));
//		(*T)->data = ch;
//		Create(&((*T)->lchild));
//		Create(&((*T)->rchild));
//	}
//}
//int Depth(Btree bt)
//{
//	int hl, hr;
//	if (bt)
//		return 0;
//	else
//	{
//		hl = Depth(bt->lchild);
//		hr = Depth(bt->rchild);
//		if (hl > hr)
//			return (hl + 1);
//		else
//			return (hr + 1);
//	}
//}
//void main()
//{
//	Btree T;
//	int height;
//	printf("输入二叉树中所有的结点: \n");
//	Create(&T);
//	height = Depth(T);
//	printf("该二叉树高度为:%d\n", height);
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef char DataType;
//
//typedef struct Node* BinTree;
//typedef BinTree NodeLink;
//typedef struct Node TreeNode;
//
//struct Node {
//	DataType data;
//	NodeLink Left, Right;
//};
//
//void creat_BinTree(BinTree* T) {
//	char ch;
//	scanf_s("%c", &ch);
//
//	if (ch == '#') {
//		*T = NULL;
//	}
//	else {
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = ch;
//		(*T)->Left = NULL;
//		(*T)->Right = NULL;
//
//		creat_BinTree(&((*T)->Left));
//		creat_BinTree(&((*T)->Right));
//	}
//}
//
//int PostOrderGetHeight(BinTree BT) {
//	int HL, HR, MaxH;
//	if (BT) {
//		HL = PostOrderGetHeight(BT->Left);
//		HR = PostOrderGetHeight(BT->Right);
//		MaxH = HL > HR ? HL : HR;
//		return (MaxH + 1);
//	}
//	else {
//		return 0;
//	}
//}
//
//int main(int argc, char* argv[]) {
//	BinTree Tree;
//	creat_BinTree(&Tree);
//	int h = PostOrderGetHeight(Tree);
//	printf("树的高度：%d", h);
//	return 0;
//}
// 实训5-2判断二叉树是否为完全二叉树
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX 50
//typedef struct BTNode
//{
//	char data;
//	struct BTNode* lchild, * rchild;
//}BTNode;
//BTNode* Create(BTNode *T)
//{
//	char ch;
//	int i = 0;
//	BTNode *P = NULL;
//	scanf_s("%c", &ch);
//	if (ch =='#')
//	{
//		return P;
//	}
//	else {
//		T = (BTNode*)malloc(sizeof(struct BTNode));
//		T->data = ch;
//		if (i = 0)
//		{
//			P = T;
//		}
//		Create(T->lchild);
//		Create(T->rchild);
//	}
//	return P;
//}
//int TestComTree(BTNode *T)
//{
//	BTNode* Queue[MAX], *p;
//	int front, rear, flag = 1, comflag = 1;
//	if (T)
//	{
//		Queue[0] = T;
//		front = -1;
//		rear = 0;
//		while (front < rear)
//		{
//			p = Queue[++front];
//			if (p->lchild = NULL)
//			{
//				if (p->rchild != NULL)
//				{
//					comflag = 0;
//					break;
//				}
//				flag = 0;
//			}
//			else {
//				if (flag == 0)
//				{
//					comflag = 0;
//					break;
//				}
//				Queue[++rear] = p->lchild;
//				if (p->rchild != NULL)
//					Queue[++rear] = p->rchild;
//				else
//					flag = 0;
//			}
//		}
//	}
//	return comflag;
//}
//void main()
//{
//	BTNode *T=NULL,*P;
//	int comflag;
//	printf("Input elements:\n");
//	P=Create(T);
//	comflag = TestComTree(P);
//	if (comflag == 1)
//	{
//		printf("这是一颗完全二叉树！\n");
//	}
//	else {
//		printf("这不是一颗完全二叉树\n");
//	}
//}
// 实训6-1图的建立与遍历
//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_VERTEX_NUM 30
//typedef struct ArcNode
//{
//	int adjvex;
//	struct ArcNode* next;
//}ArcNode;//邻接表的链表结构
//typedef struct VertexNode
//{
//	char data;
//	struct ArcNode* firstarc;
//}VertexNode;
//typedef struct
//{
//	VertexNode vertex[MAX_VERTEX_NUM];
//	int vexnum, arcnum;
//}ALGraph;
//void CreateUDG(ALGraph* G)
//{
//	int i, j, k;
//	ArcNode* s;
//	printf("输入顶点数和弧数:");
//	scanf_s("%d %d", &G->vexnum, &G->arcnum);
//	printf("请输入顶点信息\n");
//	for (i = 0; i < G->vexnum; i++)
//	{
//		getchar();
//		printf("第%d个顶点:", i);
//		scanf_s("%c", &G->vertex[i].data);
//		G->vertex[i].firstarc = NULL;
//	}
//	printf("输入边的信息\n");
//	for (k = 0; k < G->arcnum; k++)
//	{
//		printf("第%d条边——起点序号，终点序号:", k);
//		scanf_s("%d %d", &i, &j);
//		s = (ArcNode*)malloc(sizeof(ArcNode));
//		s->adjvex = j;
//		s->next = G->vertex[i].firstarc;
//		G->vertex[i].firstarc = s;
//		s = (ArcNode*)malloc(sizeof(ArcNode));
//		s->adjvex = i;
//		s->next = G->vertex[j].firstarc;
//		G->vertex[j].firstarc = s;
//	}
//}
//void DFS(ALGraph G, int v)
//{
//	int w, visited[MAX_VERTEX_NUM];
//	int stack[MAX_VERTEX_NUM], top = 0;
//	ArcNode* p;
//	printf("%c", G.vertex[v].data);
//	visited[v] = 1;
//	top++;
//	stack[top] = v;
//	p = G.vertex[v].firstarc;
//	while (1)
//	{
//		while (p && visited[p->adjvex] == 1)
//			p = p->next;
//			if (p)
//			{
//				w = p->adjvex;
//				printf("%c", G.vertex[w].data);
//				visited[w] = 1;
//				top++;
//				stack[top] = w;
//				p = G.vertex[w].firstarc;
//			}
//			else
//				if (top > 1)
//				{
//					top--;
//					w = stack[top];
//					p = G.vertex[w].firstarc;
//				}
//				else
//					break;
//	}
//	printf("\n");
//}
//void main()
//{
//	ALGraph G;
//	int v;
//	CreateUDG(&G);
//	printf("输入起始点序号：");
//	scanf_s("%d", &v);
//	printf("深度遍历序列为：");
//	DFS(G, v);
//}
// 实训2-1学生成绩统计
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXSIZE 30
//typedef struct
//{
//	char no[10];
//	char name[10];
//	int score[5];
//	int total;
//}student;
//typedef struct
//{
//	student stu[MAXSIZE];
//	int len;
//}SeqList;
//SeqList create(SeqList L, int n)
//{
//	int i, j;
//	printf("输入学生的学号、姓名、数学、英语、政治、专业课一和专业课二的成绩：\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%s", L.stu[i].no, 10);
//		scanf_s("%s", L.stu[i].name, 10);
//		L.stu[i].total = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf_s("%d", &L.stu[i].score[j]);
//			L.stu[i].total = L.stu[i].total + L.stu[i].score[j];
//		}
//		printf("%d\n", L.stu[i].total);
//	}
//	return L;
//}
//void search(SeqList L, int n)
//{
//	int i, j;
//	char sno[10];
//	printf("输入要查询学生的学号：");
//	scanf_s("%s",sno,10);
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp(sno, L.stu[i].no) == 0)
//		{
//			printf("查询结果:\n");
//			printf("%s   %s", L.stu[i].no, L.stu[i].name);
//			for (j = 0; j < 5; j++)
//			{
//				printf("%d   ", L.stu[i].score[j]);
//			}
//			printf("%d   ", L.stu[i].total);
//			return;
//		}
//	}
//	if (i = n)
//	{
//		printf("ERROR\n");
//	}
//}
//void sort(SeqList L, int n, int k)
//{
//	int i, j;
//	student p;
//	if (k >= 0 && k < n)
//	{
//		printf("按照score[%d]进行排序,", k);
//		for (i = 0; i < n; i++)
//		{
//			for (j = i + 1; j < n; j++)
//			{
//				if (L.stu[i].score[k] >= L.stu[j].score[k])
//				{
//					p = L.stu[i];
//					L.stu[i] = L.stu[j];
//					L.stu[j] = p;
//				}
//			}
//		}
//	}
//	else {
//		printf("按照total进行排序, ");
//		for (i = 0; i < n; i++)
//		{
//			for (j = i + 1; j < n; j++)
//			{
//				if (L.stu[i].total >= L.stu[i].total)
//				{
//					p = L.stu[i];
//					L.stu[i] = L.stu[j];
//					L.stu[j] = p;
//				}
//			}
//		}
//	}
//	printf("排序后的成绩如下:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%s   %s", L.stu[i].no, L.stu[i].name);
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d   ", L.stu[i].score[j]);
//		}
//		printf("%d\n", L.stu[i].total);
//	}
//}
//void main()
//{
//	SeqList List;
//	int num;
//	printf("输入学生人数:  ");
//	scanf_s("%d", &List.len);
//	List = create(List, List.len);
//	search(List, List.len);
//	printf("将学生成绩按照第几门成绩进行排序：");
//	scanf_s("%d", &num);
//	printf("将学生成绩排序\n");
//	printf("输入排序的科目序号：");
//	sort(List, List.len, num);
//}
// 实训1-1将百分制成绩转换成五级分制成绩
//#include<stdio.h>
//#include<stdlib.h>
//char a[5][10] = { "bad","pass","general","good","excellent" };
//char* TranGrade(int score)
//{
//	int result = score / 10;
//	switch (result)
//	{
//	case 7:return a[2];
//	case 8:return a[3];
//	case 6:return a[1];
//	default:if (result < 6)
//		return a[0];
//		return a[4];
//	}
//}
//void main()
//{
//	int n, i;
//	int* p = 0;
//	printf("please input the number of students:");
//	scanf_s("%d", &n);
//	p = (int*)malloc(n * sizeof(int));
//	if (p == 0)
//	{
//		exit(1);
//	}
//	for (i = 0; i < n ; i++)
//	{
//		printf("please input the %dth student's score:", i + 1);
//		scanf_s("%d", p + i);
//	}
//	for (i = 0; i < n ; i++)
//	{
//		printf("the score is %d,the grade is %s.\n", p[i], TranGrade(p[i]));
//	}
//}
// 实训1-2求一组数中的最大数和最小数
//#include<stdio.h>
//void main()
//{
//	int i = 1;
//	int array[10];
//	int max, min;
//	while (i <= 10)
//	{
//		printf("please input the %dth number:", i);
//		scanf_s("%d", &array[i - 1]);
//		i++;
//	}
//	max = array[0];
//	min = array[0];
//	i = 1;
//	while (i <= 9)
//	{
//		if (max < array[i])
//			max = array[i];
//		if (min > array[i])
//			min = array[i];
//		i++;
//	}
//	printf("the maximum is %d,the minimum is %d\n", max, min);
//}
//实训2-2求两个集合的交集
//#include<stdio.h>
//#include<stdlib.h>
//#define ElemType int
//typedef struct LNode
//{
//	ElemType data;
//	struct LNode* next;
//}LNode,*LinkList;
//LNode* create(ElemType data[], int n)
//{
//	LNode* head, * p, * rear;
//	int k;
//	head = (LNode*)malloc(sizeof(LNode));
//	head->next = NULL;
//	rear = head;
//	for (k = 0; k < n; k++)
//	{
//		p = (LNode*)malloc(sizeof(LNode));
//		p->data = data[k];
//		p->next = NULL;
//		rear->next = p;
//		rear = p;
//	}
//	return head;//尾插法
//}
//void display(LNode* head)
//{
//	LNode* p;
//	p = head->next;
//	while (p)
//	{
//		printf("%d   ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//LNode* inter(LNode* head1, LNode* head2)
//{
//	LNode* p, * q, * head3, * s;
//	head3 = (LNode*)malloc(sizeof(LNode));
//	p = head1->next;
//	q = head2->next;
//	head3->next = NULL;
//	while (p)
//	{
//		while (q)
//		{
//			if (p->data == q->data)
//			{
//				s = (LNode*)malloc(sizeof(LNode));
//				s->data = p->data;
//				s->next = head3->next;
//				head3->next = s;
//				break;
//			}
//			else {
//				q = q->next;
//			}
//		}
//		p = p->next;
//		q = head2->next;
//	}
//	return head3;
//}
//void main()
//{
//	int data1[10], data2[10];
//	int num1, num2;
//	LNode* h1, * h2, * h3;
//	printf("输入集合A中的元素数:  ");
//	scanf_s("%d", &num1);
//	printf("输入集合A中的数据元素:");
//	for (int i = 0; i < num1; i++)
//	{
//		scanf_s("%d", &data1[i]);
//	}
//	printf("输入集合B中的元素数:  ");
//	scanf_s("%d", &num2);
//	printf("输入集合B中的数据元素:");
//	for (int i = 0; i < num2; i++)
//	{
//		scanf_s("%d", &data2[i]);
//	}
//	h1 = create(data1, num1);
//	h2 = create(data2, num2);
//	printf("生成如下两个链表\n");
//	printf("链表1：");
//	display(h1);
//	printf("链表2：");
//	display(h2);
//	h3 = inter(h1, h2);
//	printf("两个集合的交集:   ");
//	display(h3);
//}
//实训2-3约瑟夫环问题
//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//void Josephu(int n, int k, int m)
//{
//	Node* head, * p, * q;
//	int i;
//	head = NULL;
//	p = NULL;
//	q = NULL;
//	for (i = 1; i <= n; i++)
//	{
//		p = (Node*)malloc(sizeof(Node));
//		p->data = i;
//		if (head == NULL)
//		{
//			head = p;
//		}
//		else {
//			q->next = p;
//		}
//		q = p;
//	}
//	p->next = head;
//	p = head;
//	for (i = 1; i < k; i++)
//	{
//		q = p;
//		p = p->next;
//	}
//	printf("出列的顺序依次为：");
//	while (p != q)
//	{
//		for (i = 1; i < m; i++)
//		{
//			q = p;
//			p = p->next;
//		}
//		q->next = p->next;
//		printf("%4d", p->data);
//		free(p);
//		p = q->next;
//	}
//	printf("%4d\n", p->data);
//}
//void main()
//{
//	int n, k, m;
//	printf("输入n的值：");
//	scanf_s("%d", &n);
//	printf("输入k的值：");
//	scanf_s("%d", &k);
//	printf("输入m的值：");
//	scanf_s("%d", &m);
//	Josephu(n, k, m);
//}
//实训2-4一元多项式运算
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	float coef;
	int exp;
	struct Node* next;
}Node;
Node* create(int n)
{
	Node* head, * s, * rear;
	int i;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	rear = head;
	for (i = 1; i <= n; i++)
	{
		s = (Node*)malloc(sizeof(Node));
		s->next = NULL;
		printf("输入第%d项的系数和指数",i);
		scanf_s("%f %d", &s->coef, &s->exp);
		rear->next = s;
		rear = s;
	}
	rear->next = NULL;
	return head;
}
void 