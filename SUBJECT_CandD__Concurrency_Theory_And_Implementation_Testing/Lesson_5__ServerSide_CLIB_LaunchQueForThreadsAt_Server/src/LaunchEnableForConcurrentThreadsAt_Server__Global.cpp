#include "../include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__App.h"
#include "../include/LaunchEnableForConcurrentThreadsAt_Server__Global.h"
#include <array>
#include <cstdint>
#include <cstring>
#include <iostream>
bool* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;
uint8_t* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
// public.
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::LaunchEnableForConcurrentThreadsAt_Server__Global()
    {

    }
CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::~LaunchEnableForConcurrentThreadsAt_Server__Global()
{
    delete _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;
    delete _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global()
{
    std::cout << "entered dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
    stat_dyn_REG_boot1_DEFINE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
    stat_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global()
{
    std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
    stat_REG_boot2_SUBSTANTIATE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
    stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()
{
    std::cout << "entered dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
    stat_REG_boot3_INITIALISE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
    stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
    std::cout << "exiting dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global()" << std::endl;
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE() {
    return *stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE() {
    return !*stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
}
uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    return *stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
}
unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(bool bool_Value)
{
    return reinterpret_cast<unsigned char*>(bool_Value);
}
unsigned char* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__uint8_t_To_ByteArray(uint8_t uint8_t_Value)
{
    unsigned char* bytes_array;
    std::memcpy(&bytes_array, &uint8_t_Value, sizeof(uint8_t_Value));
    return bytes_array;
}
bool CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__ByteArray_To_bool(unsigned char* bytes)
{
    return bytes[1] != 0;
}
uint8_t CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__ByteArray_To_uint8_t(unsigned char* bytes)
{
    uint8_t* cpp_uint8_t_value;
    cpp_uint8_t_value = new uint8_t();
    std::memcpy(&cpp_uint8_t_value, bytes, sizeof(cpp_uint8_t_value));
    return *cpp_uint8_t_value;
}
// private.
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_dyn_REG_boot1_DEFINE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = NULL;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot2_SUBSTANTIATE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
    _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = new bool();
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = true;
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_flag_thread_2STATE()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    std::cout << "entered stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
    _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = new uint8_t();
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = UINT8_MAX;
    std::cout << "exiting stat_REG_boot2_SUBSTANTIATE_number_Implemented_Threads()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot3_INITIALISE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    std::cout << "entered stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = true;
    std::cout << "exiting stat_REG_boot3_INITIALISE_flag_thread_2STATE()" << std::endl;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    *_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = 2;
}
bool* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE()
{
    return _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;
}
uint8_t* CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads()
{
    return _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE(bool bit)
{
    *_stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE = bit;
}
void CLIBLaunchQueAtServer::LaunchEnableForConcurrentThreadsAt_Server__Global::stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads(uint8_t number_Implemented_Threads)
{
	*_stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads = number_Implemented_Threads;
}