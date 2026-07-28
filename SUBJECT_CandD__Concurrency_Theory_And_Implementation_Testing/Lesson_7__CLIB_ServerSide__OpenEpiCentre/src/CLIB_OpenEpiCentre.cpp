#include "../include/CLIB_OpenEpiCentre.h"
#include "../include/engine/CLIB_OpenEpiCentre__Framework.h"
#include "../include/engine/CLIB_OpenEpiCentre__App.h"
#include "../include/engine/CLIB_OpenEpiCentre__Global.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__User_Algorithm.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__User_Input.h"
#include "../include/structs/CLIB_OpenEpiCentre_STRUCT__User_Output.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Input_praise3.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise0.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise1.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise2.h"
#include "../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT__Output_praise3.h"
#include <cfloat>
#include <cstdint>
#include <iostream>
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* _stat_CLASS_CLIB_OpenEpiCentre_Framework;
	bool* CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED;
// public.
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_flip_Input_DoubleBuffer() {
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[1] == false) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_flip_Input_DoubleBuffer();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[1] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();//INSTANTIATE this member function last.
		}
	}
	void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_generate_Program()
	{
		std::cout << "entered app_FUNCT_generate_Program()." << std::endl;

		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_boot1_DEFINE_Framework();
		CLIBConcurrentServerIO__stat_CLASS_boot3_INITIALISE_Framework();
		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "started CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
		std::cout << "done CLIB_OpenEpiCentre_Global Meta-Data and Settings." << std::endl;

		std::cout << "started STRUCTS Generate." << std::endl;
		std::cout << "started Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Input()->dyn_REG_boot1_DEFINE_User_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Input()->dyn_REG_boot2_SUBSTANTIATE_User_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Input()->dyn_REG_boot3_INITIALISE_User_Input();

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Output()->dyn_REG_boot1_DEFINE_User_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Output()->dyn_REG_boot2_SUBSTANTIATE_User_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Output()->dyn_REG_boot3_INITIALISE_User_Output();

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot1_DEFINE_User_Algorithm();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot2_SUBSTANTIATE_User_Algorithm();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_User_Algorithm()->dyn_REG_boot3_INITIALISE_User_Algorithm();

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Input()->dyn_REG_boot1_DEFINE_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Input()->dyn_REG_boot2_SUBSTANTIATE_Input();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Input()->dyn_REG_boot3_INITIALISE_Input(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Output()->dyn_REG_boot1_DEFINE_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Output()->dyn_REG_boot2_SUBSTANTIATE_Output();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Output()->dyn_REG_boot3_INITIALISE_Output(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());

		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot1_DEFINE_Concurrent();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot2_SUBSTANTIATE_Concurrent();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_STRUCT_get_Concurrent()->dyn_REG_boot3_INITIALISE_Concurrent(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Independent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_create_Architecture();
		std::cout << "started Architecture Registers - DEFINE" << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - DEFINE." << std::endl;
		std::cout << "started Architecture Registers - SUBSTANTIATE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - SUBSTANTIATE." << std::endl;
		std::cout << "started Architecture Registers - INITIALISE." << std::endl;
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Architecture Registers - INITIALISE." << std::endl;
		std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATE." << std::endl;
		CLIBConcurrentServerIO__stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
		CLIBConcurrentServerIO__stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
		CLIBConcurrentServerIO__stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFlagINSTANTIATED();
		CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		std::cout << "done Program - INSTANTIATE." << std::endl;

		std::cout << " " << std::endl;
		std::cout << "        ,     \\      /      ," << std::endl;
		std::cout << "       / \\    )\\ __ /(     / \\ " << std::endl;
		std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
		std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____" << std::endl;
		std::cout << "|              |\\../|               |" << std::endl;
		std::cout << "|               \\VV/                |" << std::endl;
		std::cout << "|      MIT CLIBOpenEpiCentre     |" << std::endl;
		std::cout << "|___________________________________|" << std::endl;
		std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
		std::cout << "|  /    V          ))        V   \\  |" << std::endl;
		std::cout << "|/                //               \\| " << std::endl;
		std::cout << "`                 V                 '" << std::endl;
		std::cout << " " << std::endl;
		return (void*)CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework();
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_get_flag_isPGM_INSTANTIATED()
	{
		bool* temp;
		temp = nullptr;
		*temp = true;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[2] == false) {
			*temp = CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[0];
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[2] = false;
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(temp);
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_select_set_Intput_Subset(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[3] == false) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->app_select_And_Set_Input_Subset(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework(), CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[3] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_terminate_Program()
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[4] == false) {
			delete _stat_CLASS_CLIB_OpenEpiCentre_Framework;
			delete CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED;;
			while (CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework() != nullptr) {}
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[4] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_pop_From_Stack_Of_Output()
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[5] == false) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_pop_From_Stack_Of_Output(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[5] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__app_FUNCT_push_To_STACK_Of_Input()
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[6] == false) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->app_FUNCT_push_To_STACK_Of_Input(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework());
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[6] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_get_program_WriteEnableStack_ServerInputReceive()
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[7] == false) {
			return CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerInputReceive();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[7] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return (void*)(nullptr);
	}
	void* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_PGM_get_program_WriteEnableStack_ServerOutputSend()
	{
		void* temp;
		temp = nullptr;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[8] == false) {
			temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_PGM_get_WriteEnable_ServerOutputSend();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[8] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return (void*)temp;
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_flag_isStackLoaded_ServerInputReceive()
	{
		bool* temp;
		*temp = true;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[9] == false) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_flag_isLoaded_Stack_InputAction();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[9] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_flag_isStackLoaded_ServerOutputSend()
	{
		bool* temp;
		*temp = true;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[10] == false) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_get_Item_flag_isLoaded_Stack_OutputSend();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[10] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__dyn_REG_get_flag_IsInitialised_CLIBOpenEpiCentre()
	{
		bool* temp;
		temp = nullptr;
		*temp = true;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[11] == false) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_Flag_is_SystemInitialised();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[11] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise0_Value()
	{
		double* temp;
		temp = nullptr;
		*temp = DBL_MAX;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[14] == false) {
			CLIB_OpenEpiCentre_STRUCT__Output_praise0* objCLIB_OpenEpiCentre_STRUCT__Output_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise0 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objCLIB_OpenEpiCentre_STRUCT__Output_praise0->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise0_Value();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[14] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise1_Value()
	{
		double* temp;
		temp = nullptr;
		*temp = DBL_MAX;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[17] == false) {
			CLIB_OpenEpiCentre_STRUCT__Output_praise1* objCLIB_OpenEpiCentre_STRUCT__Output_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise1 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objCLIB_OpenEpiCentre_STRUCT__Output_praise1->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise1_Value();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[17] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise2_Value()
	{
		double* temp;
		temp = nullptr;
		*temp = DBL_MAX;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[20] == false) {
			CLIB_OpenEpiCentre_STRUCT__Output_praise2* objCLIB_OpenEpiCentre_STRUCT__Output_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise2 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objCLIB_OpenEpiCentre_STRUCT__Output_praise2->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise2_Value();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[20] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_Item_CLIB_OpenEpiCentre_STRUCT__Output_praise3_Value()
	{
		double* temp;
		temp = nullptr;
		*temp = DBL_MAX;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[25] == false) {
			CLIB_OpenEpiCentre_STRUCT__Output_praise3* objCLIB_OpenEpiCentre_STRUCT__Output_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Output_praise3*>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_READ(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			*temp = objCLIB_OpenEpiCentre_STRUCT__Output_praise3->dyn_REG_get_CLIB_OpenEpiCentre_STRUCT__Output_praise3_Value();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[25] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbDouble_To_MsbByteArray(*temp);
	}
	unsigned char* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_get_MetaData_PraiseEventId()
	{
		uint8_t* temp;
		temp = nullptr;
		*temp = UINT8_MAX;
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[12] == false) {
			*temp = CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Output_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT__Output_praiseEventId();
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[12] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
		return CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(*temp);
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_A(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[15] == false) {
			CLIB_OpenEpiCentre_STRUCT__Input_praise0* objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[15] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise0_Value_B(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[16] == false) {
			CLIB_OpenEpiCentre_STRUCT__Input_praise0* objInput_praise0 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise0 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise0->dyn_REG_set_Item_Input_praise0_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[16] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_A(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[18] == false) {
			auto* objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->
				dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(
					CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[18] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise1_Value_B(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[19] == false) {
			auto* objInput_praise1 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise1 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise1->dyn_REG_set_Item_Input_praise1_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[19] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_A(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[23] == false) {
			auto* objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[23] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise2_Value_B(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[24] == false) {
			auto* objInput_praise2 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise2 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise2->dyn_REG_set_Item_Input_praise2_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[24] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_A(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[26] == false) {
			auto* objInput_praise3= reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueA(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[26] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_Item_Input_praise3_Value_B(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[27] == false) {
			auto* objInput_praise3 = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT__Input_praise3 *>(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()));
			objInput_praise3->dyn_REG_set_Item_Input_praise3_valueB(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[27] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__io_PRAISE_set_MetaData_PraiseEventId(unsigned char* bytes)
	{
		if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[13] == false) {
			CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_Item_array_Of_doubleBuffer_Input_WRITE(CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework())->dyn_REG_set_ptr_Input_praiseEventId(CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_Msbuint8_t(bytes));
		}
		else {
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[13] = false;
			CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED();
		}
	}
	// private.
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_app_FUNCT_Calc_IsAllINSTANTIATED()
	{
		CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[0] = false;
		for (uint8_t memberFunctionId = 1; memberFunctionId < sizeof(CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED); memberFunctionId++)
		{
			if (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[memberFunctionId] == true)
			{
				CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[0] = true;
			}
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_CLASS_boot1_DEFINE_Framework()
	{
		_stat_CLASS_CLIB_OpenEpiCentre_Framework = nullptr;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_CLASS_boot3_INITIALISE_Framework()
	{
		_stat_CLASS_CLIB_OpenEpiCentre_Framework = new class CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework();
		while (CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework() == nullptr) {}
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework()
	{
		return _stat_CLASS_CLIB_OpenEpiCentre_Framework;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_boot1_DEFINE_CLIB_OpenEpiCentre_isFlagINSTANTIATED()
	{
		CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED = nullptr;
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_isFlagINSTANTIATED()
	{
		CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED = new bool[28]();
		while (CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED() == nullptr) {}
		for (uint8_t index = 0; index < sizeof(CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED); index++)
		{
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[index] = true;
		}
	}
	void CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_isFlagINSTANTIATED()
	{
		for (uint8_t index = 0; index < sizeof(CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED); index++)
		{
			CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED()[index] = true;
		}
	}
	bool* CLIBOpenEpiCentre::CLIBConcurrentServerIO::CLIBConcurrentServerIO__stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED() {
		return CLIBConcurrentServerIO___stat_REG_get_ptr_CLIB_OpenEpiCentre_isFlagINSTANTIATED;
	}