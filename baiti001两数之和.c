#include <stdio.h>


//1. ����֮��
//
//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ
//
//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�
//
//����԰�����˳�򷵻ش𰸡�
//
//ʾ�� 1��
//���룺nums = [2, 7, 11, 15], target = 9
//�����[0, 1]
//���ͣ���Ϊ nums[0] + nums[1] == 9 ������[0, 1] ��

//1.
int main()
{
	int nums[10] = {0};
	int target = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	printf("������ͣ���Enter������\n");
	scanf("%d", &target);
	printf("������ʮ�����֣���Enter������\n");
	for (i = 0; i < 9; i++)
	{
		scanf("%d ", &nums[i]);
	}
	for (j = 0; j <10; j++)
	{
		int n = 0;
		for (n = 1; n <j-1; n++)
		{
			if (target - nums[n] == nums[j])
			{
				printf("%d+%d=%d\n", nums[j], nums[n], target);
				printf("��������λ�ڵ� %d λ�� %d λ\n", n, j);
				count++;
			}
			
		}
	}
	if (count == 0)
		printf("���޴���\n");
	return 0;
}