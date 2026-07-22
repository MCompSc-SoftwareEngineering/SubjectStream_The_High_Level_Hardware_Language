#include "../../include/engine/CLIB_OpenEpiCentre__Framework.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Algorithms.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Data__Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute.h"
#include "../../include/engine/CLIB_OpenEpiCentre__Execute__Control.h"
#include <iostream>
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_App;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_CLASS_ptr_CLIB_OpenEpiCentre_Global;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_Concurrent;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_Output;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_CLASS_ptr_User_Algorithm;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_User_Input;
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::_stat_STRUCT_User_Output;
// public.
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::CLIB_OpenEpiCentre__Framework()
	{
		std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre_Framework()" << std::endl;
		stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
		std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::~CLIB_OpenEpiCentre__Framework()
	{
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_App;
		delete _stat_STRUCT_Concurrent;
		delete _stat_STRUCT_Input;
		delete _stat_STRUCT_Output;
		delete _stat_CLASS_ptr_CLIB_OpenEpiCentre_Global;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_create_Architecture()
	{
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework();
		stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings()
	{
		stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
		stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App()
	{
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()
	{
		return stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Global();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_App();
		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Algorithm(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data__Control(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Execute(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control(obj);
		std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_App();
		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global();
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Algorithm(obj);
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(3); concurrentThreadId++)//NUMBER OF CONCURRENT THREADS.
		{
			obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_REG_boot2_SUBSTANTIATE_Concurrent();
		}
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Data__Control(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Execute(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control(obj);
		std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_App();
		obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Algorithm(obj, stat_STRUCT_get_Concurrent());
		for (uint8_t concurrentThreadId = 0; concurrentThreadId < static_cast<uint8_t>(3); concurrentThreadId++)//NUMBER OF CONCURRENT THREADS.
		{
			obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->dyn_REG_boot3_INITIALISE_Concurrent(obj);
		}
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Data(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre__Data__Control()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Data__Control(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Execute(obj);
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control(obj);
		std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(CLIB_OpenEpiCentre__Framework* obj)
	{
		std::cout << "entered dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		obj->stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()->dyn_CLASS_get_ptr_Execute()->dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Execute(obj);
		std::cout << "exiting dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot0_DECLARE_User_Algorithm() {
		stat_STRUCT_boot0_DECLARE_User_Algorithm();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot0_DECLARE_User_Input() {
		stat_STRUCT_boot0_DECLARE_User_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot0_DECLARE_User_Output() {
		stat_STRUCT_boot0_DECLARE_User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot0_DECLARE_Concurrent() {
		stat_STRUCT_boot0_DECLARE_Concurrent();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot0_DECLARE_Input() {
		stat_STRUCT_boot0_DECLARE_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot0_DECLARE_Output() {
		stat_STRUCT_boot0_DECLARE_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_User_Algorithm() {
		stat_STRUCT_boot1_DEFINE_User_Algorithm();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_User_Input() {
		stat_STRUCT_boot1_DEFINE_User_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_User_Output() {
		stat_STRUCT_boot1_DEFINE_User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_Concurrent() {
		stat_STRUCT_boot1_DEFINE_Concurrent();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_Input() {
		stat_STRUCT_boot1_DEFINE_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot1_DEFINE_Output() {
		stat_STRUCT_boot1_DEFINE_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_User_Algorithm() {
		stat_STRUCT_boot3_INITIALISE_User_Algorithm();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_User_Input() {
		stat_STRUCT_boot3_INITIALISE_User_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_User_Output() {
		stat_STRUCT_boot3_INITIALISE_User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_Concurrent() {
		stat_STRUCT_boot3_INITIALISE_Concurrent();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_Input() {
		stat_STRUCT_boot3_INITIALISE_Input();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_boot3_INITIALISE_Output() {
		stat_STRUCT_boot3_INITIALISE_Output();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_Concurrent()
	{
		return stat_STRUCT_get_Concurrent();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_Input()
	{
		return stat_STRUCT_get_Input();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_Output()
	{
		return stat_STRUCT_get_Output();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_User_Algorithm()
	{
		return stat_STRUCT_get_User_Algorithm();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_User_Input()
	{
		return stat_STRUCT_get_User_Input();
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::dyn_STRUCT_get_User_Output()
	{
		return stat_STRUCT_get_User_Output();
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()
	{
		std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;

		std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework()
	{
		std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework" << std::endl;
		stat_CLASS_boot1_DEFINE_Server();
		std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()
	{
		std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
		stat_CLASS_boot3_INITIALISE_Server();
		std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()
	{
		std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;

		std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()
	{
		std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;

		std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework()" << std::endl;
	}

// private.
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global()
	{
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Global = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot1_DEFINE_Server()
	{
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_App = nullptr;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot3_INITIALISE_Server()
	{
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_App = new CLIB_OpenEpiCentre__App();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App() == nullptr) {}
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global()
	{
		_stat_CLASS_ptr_CLIB_OpenEpiCentre_Global = new CLIB_OpenEpiCentre__Global();
		while (stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Global() == nullptr) {}
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Global()
	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_Global;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre__App* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App()
	{
		return _stat_CLASS_ptr_CLIB_OpenEpiCentre_App;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot0_DECLARE_User_Algorithm()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLARE_User_Algorithm()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLARE_User_Algorithm()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot0_DECLARE_User_Input()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLARE_User_Input()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLARE_User_Input()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot0_DECLARE_User_Output()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLARE_User_Output()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLARE_User_Output()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot0_DECLARE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLARE_Concurrent()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLARE_Concurrent()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot0_DECLARE_Input()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLARE_Input()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLARE_Input()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot0_DECLARE_Output()
	{
		std::cout << "entered stat_STRUCT_boot0_DECLARE_Output()." << std::endl;

		std::cout << "exiting stat_STRUCT_boot0_DECLARE_Output()." << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_User_Algorithm()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_User_Algorithm()" << std::endl;
		_stat_CLASS_ptr_User_Algorithm = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_User_Algorithm()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_User_Input()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_User_Input()" << std::endl;
		_stat_STRUCT_User_Input = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_User_Output()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_User_Output()" << std::endl;
		_stat_STRUCT_User_Output = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Concurrent()" << std::endl;
		_stat_STRUCT_Concurrent = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_Input()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Input()" << std::endl;
		_stat_STRUCT_Input = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot1_DEFINE_Output()
	{
		std::cout << "entered stat_STRUCT_boot1_DEFINE_Output()" << std::endl;
		_stat_STRUCT_Output = nullptr;
		std::cout << "exiting stat_STRUCT_boot1_DEFINE_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_User_Algorithm()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_User_Algorithm()" << std::endl;
		_stat_CLASS_ptr_User_Algorithm = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm();
		while (stat_STRUCT_get_User_Algorithm() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_User_Algorithm()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_User_Input()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_User_Input()" << std::endl;
		_stat_STRUCT_User_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input();
		while (stat_STRUCT_get_User_Input() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_User_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_User_Output()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_User_Output()" << std::endl;
		_stat_STRUCT_User_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output();
		while (stat_STRUCT_get_User_Output() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_User_Output()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_Concurrent()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Concurrent()" << std::endl;
		_stat_STRUCT_Concurrent = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent();
		while (stat_STRUCT_get_Concurrent() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Concurrent()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_Input()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Input()" << std::endl;
		_stat_STRUCT_Input = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input();
		while (stat_STRUCT_get_Input() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Input()" << std::endl;
	}
	void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_boot3_INITIALISE_Output()
	{
		std::cout << "entered stat_STRUCT_boot3_INITIALISE_Output()" << std::endl;
		_stat_STRUCT_Output = new struct CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output();
		while (stat_STRUCT_get_Output() == nullptr) {}
		std::cout << "exiting stat_STRUCT_boot3_INITIALISE_Output()" << std::endl;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Concurrent* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_Concurrent()
	{
		return _stat_STRUCT_Concurrent;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_Input()
	{
		return _stat_STRUCT_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_Output()
	{
		return _stat_STRUCT_Output;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Algorithm* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_User_Algorithm()
	{
		return _stat_CLASS_ptr_User_Algorithm;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Input* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_User_Input()
	{
		return _stat_STRUCT_User_Input;
	}
	CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT__User_Output* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Framework::stat_STRUCT_get_User_Output()
	{
		return _stat_STRUCT_User_Output;
	}