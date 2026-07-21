#include "../include/CLIB_MyDLL.h"

#include <cfloat>
#include <cstdint>
#include <iostream>
#include "../include/Introduction_To_Dynamic_Link_Library__Algorithms.h"
#include "../include/Introduction_To_Dynamic_Link_Library__Framework.h"
MyLIBS::Introduction_To_Dynamic_Link_Library__Framework* _dyn_REG_Introduction_To_Dynamic_Link_Library__Framework;
	bool* _stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED;
// public.
void* MyLIBS::CLIB_MyDLL::stat_App_FUNCT_MyLIBS__CLIB_MyDLL__generate_Program()
{
	std::cout << "started Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;
	stat_CLASS_boot1_DEFINE_MyLIBS__CLIB_MyDLL__Framework();
	stat_CLASS_boot3_INITIALISE_MyLIBS__CLIB_MyDLL__Framework();
	std::cout << "done Classes - DECLARE, DEFINE INITIALISE, Registers - DECLARE." << std::endl;

	std::cout << "started Registers - DEFINE" << std::endl;
	stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Framework();
	std::cout << "done Registers - DEFINE." << std::endl;

	std::cout << "started Registers - SUBSTANTIATE." << std::endl;
	stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Framework();
	std::cout << "done Registers - SUBSTANTIATE." << std::endl;

	std::cout << "started Registers - INITIALISE." << std::endl;
	stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework();
	std::cout << "done Registers - INITIALISE." << std::endl;

	std::cout << "started Program - INSTANTIATION." << std::endl;
	stat_REG_boot1_DEFINE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED();
	stat_REG_boot2_SUBSTANTIATE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED();
	stat_REG_boot3_INITIALISE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED();
	stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Framework();
	std::cout << "done Program - INSTANTIATION." << std::endl;

	std::cout << "" << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "        ,     \\      /      ," << std::endl;
	std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
	std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
	std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
	std::cout << "|              |\\../|               |" << std::endl;
	std::cout << "|               \\VV/                |" << std::endl;
	std::cout << "|        MIT Write Que .dll         |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
	std::cout << "|  /    V          ))        V   \\  |" << std::endl;
	std::cout << "|/                //               \\| " << std::endl;
	std::cout << "`                 V                 '" << std::endl;
	std::cout << "" << std::endl;
	return (void*)stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework();
}
unsigned char* MyLIBS::CLIB_MyDLL::stat_App_FUNCT_MyLIBS__CLIB_MyDLL__get_flag_isPGM_INSTANTIATED()
{
	bool* temp;
	temp = nullptr;
	*temp = true;
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[1] == false) {
		*temp = stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[0];
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[1] = false;
	}
	return Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbBoolean_To_MsbByteArray(*temp);
}
void MyLIBS::CLIB_MyDLL::stat_App_FUNCT_MyLIBS__CLIB_MyDLL__terminate_Program()
{
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[2] == false) {
		delete _dyn_REG_Introduction_To_Dynamic_Link_Library__Framework;
		delete _stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED;
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[2] = false;
	}
}
void MyLIBS::CLIB_MyDLL::stat_do_FUNCT_MyLIBS__CLIB_MyDLL__add_a_b()
{
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[3] == false) {
		stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms()->Introduction_To_Dynamic_Link_Library__dyn_FUNCT_add_a_b(
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input(),
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output()
		);
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[3] = false;
		stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
	}
}
void MyLIBS::CLIB_MyDLL::stat_do_FUNCT_MyLIBS__CLIB_MyDLL__subtract_a_b()
{
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[4] == false) {
		stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms()->Introduction_To_Dynamic_Link_Library__dyn_FUNCT_subtract_a_b(
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input(),
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output()
		);
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[4] = false;
		stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
	}
}
void MyLIBS::CLIB_MyDLL::stat_do_FUNCT_MyLIBS__CLIB_MyDLL__multiply_a_b()
{
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[5] == false) {
		stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms()->Introduction_To_Dynamic_Link_Library__dyn_FUNCT_multiply_a_b(
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input(),
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output()
		);
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[5] = false;
		stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
	}
}
void MyLIBS::CLIB_MyDLL::stat_do_FUNCT_MyLIBS__CLIB_MyDLL__divide_a_b()
{
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[6] == false) {
		stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Algorithms()->Introduction_To_Dynamic_Link_Library__dyn_FUNCT_divide_a_b(
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input(),
			stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output()
		);
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[6] = false;
		stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
	}
}
unsigned char* MyLIBS::CLIB_MyDLL::stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value() {
	double* temp;
	temp = nullptr;
	*temp = DBL_MAX;
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[7] == false) {
		*temp = stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Output()->dyn_REG_get_Introduction_To_Dynamic_Link_Library__Output_value();
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[7] = false;
		stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
	}
	return Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__Msbdouble_To_MsbByteArray(*temp);;
}
void MyLIBS::CLIB_MyDLL::stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(unsigned char* value) {
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[8] == false) {
		stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input()->dyn_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_a(
			Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(value)
		);
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[8] = false;
		stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
	}
}
void MyLIBS::CLIB_MyDLL::stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(unsigned char* value) {
	if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[9] == false) {
		stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()->dyn_CLASS_get_ptr_Introduction_To_Dynamic_Link_Library__App()->dyn_CLASS_ptr_Introduction_To_Dynamic_Link_Library__Data()->dyn_BUFFER_get_ptr_Introduction_To_Dynamic_Link_Library__Input()->dyn_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_b(
	Introduction_To_Dynamic_Link_Library__Global::stat_APP_CONVERT_WriteEnableForThreadsAt_STACK__MsbByteArray_To_Msbdouble(value)
);
	}
	else {
		stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[9] = false;
		stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
	}
}
void MyLIBS::CLIB_MyDLL::stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED()
{
	stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[0] = false;
	for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(_stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED); memberFunctionId++)
	{
		if (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[memberFunctionId] == true)
		{
			stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()[0] = true;
		}
	}
}
void MyLIBS::CLIB_MyDLL::stat_CLASS_boot1_DEFINE_MyLIBS__CLIB_MyDLL__Framework()
{
	_dyn_REG_Introduction_To_Dynamic_Link_Library__Framework = NULL;
}
void MyLIBS::CLIB_MyDLL::stat_CLASS_boot3_INITIALISE_MyLIBS__CLIB_MyDLL__Framework()
{
	_dyn_REG_Introduction_To_Dynamic_Link_Library__Framework = new class MyLIBS::Introduction_To_Dynamic_Link_Library__Framework();
	while (stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework() == NULL) {}
}
MyLIBS::Introduction_To_Dynamic_Link_Library__Framework* MyLIBS::CLIB_MyDLL::stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework()
{
	return _dyn_REG_Introduction_To_Dynamic_Link_Library__Framework;
}
void MyLIBS::CLIB_MyDLL::stat_REG_boot1_DEFINE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()
{
	_stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED = NULL;
}
void MyLIBS::CLIB_MyDLL::stat_REG_boot2_SUBSTANTIATE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()
{
	_stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED = new bool[11]();
	while (stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED() == NULL) {}
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED[index] = true;
	}
}
void MyLIBS::CLIB_MyDLL::stat_REG_boot3_INITIALISE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()
{
	for (uint8_t index = 0; index < sizeof(*stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()); index++)
	{
		_stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED[index] = true;
	}
}
bool* MyLIBS::CLIB_MyDLL::stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED()
{
	return _stat_REG_flag_MyLIBS__CLIB_MyDLL__isMemberFunctionINSTANTIATED;
}