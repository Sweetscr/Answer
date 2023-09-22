#include <stdio.h>


//1. 两数之和
//
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
//
//你可以按任意顺序返回答案。
//
//示例 1：
//输入：nums = [2, 7, 11, 15], target = 9
//输出：[0, 1]
//解释：因为 nums[0] + nums[1] == 9 ，返回[0, 1] 。

//1.
int main()
{
	int nums[10] = {0};
	int target = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	printf("请输入和，按Enter键继续\n");
	scanf("%d", &target);
	printf("请输入十个数字，按Enter键继续\n");
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
				printf("两个数字位于第 %d 位和 %d 位\n", n, j);
				count++;
			}
			
		}
	}
	if (count == 0)
		printf("查无此数\n");
	return 0;
}