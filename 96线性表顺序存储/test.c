#include"list.h"


int main()
{
	SeqList	Q;
	Q.last = 0;
	int number;
	ListInsert(&Q, 1, 23);  //����һ��Ԫ�� 
	ListInsert(&Q, 1, 22);  //����һ��Ԫ�� 
	ListInsert(&Q, 2, 21);  //����һ��Ԫ�� 

	ListErgodic(&Q);   //��������Ԫ�� 
	printf("��ǰ�ĳ���Ϊ%d\r\n", Q.last);

	ListDelete(&Q, 2, &number); //ɾ����2��Ԫ��
	printf("��ǰ�ĳ���Ϊ%d\r\n", Q.last);
	printf("ɾ����Ԫ����%d\r\n", number);


	return 0;
}



//
//int i = 0;
//int e = 0;
//InitList(L); //��ʼ��
//
//
//DestroyList(L); //����
//ClearList(&L);  //���
//ListEmpty(L);   //�п�
//ListLength(L);  //����
//GetElem(L, i, &e);  //��ȡԪ��
//LocateElem(L, e, compare()); //���Ҷ�λ   compare()��Ԫ���ж�����
//PriorElem(L, cur_e, &pre_e);  //��ǰ��Ԫ��
//NextElem(L, cur_e, &next_e);   //����Ԫ��
//ListInsert(&L, i, e);     //����Ԫ��
//ListDelete(&L, i, &e);   //ɾ��Ԫ��
//ListTraverse(&L, visited()); //����