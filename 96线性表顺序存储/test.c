#include"list.h"


int main()
{
	SeqList L;
	int i = 0;
	int e = 0;
	InitList(&L); //��ʼ��
	DestroyList(&L); //����
	ClearList(&L);  //���
	ListEmpty(L);   //�п�
	ListLength(L);  //����
	GetElem(L, i, &e);  //��ȡԪ��
	LocateElem(L, e, compare()); //���Ҷ�λ   compare()��Ԫ���ж�����
	PriorElem(L, cur_e, &pre_e);  //��ǰ��Ԫ��
	NextElem(L, cur_e, &next_e);   //����Ԫ��
	ListInsert(&L, i, e);     //����Ԫ��
	ListDelete(&L, i, &e);   //ɾ��Ԫ��
	ListTraverse(&L, visited()); //����
	return 0;
}