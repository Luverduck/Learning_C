#pragma once

void different_function_in_different_file()
{
	printf("This function is %s\n", __func__); 
	// ��� : different_function_in_different_file
	printf("This line is %d\n", __LINE__);
	// ��� : 7
};