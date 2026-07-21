#include "../include/WriteEnableForThreadsAt_ServerOutputSend__App.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Control.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Framework.h"
#include "../include/WriteEnableForThreadsAt_ServerOutputSend__Global.h"
#include <array>
#include <cstdint>
#include <iostream>
#include <iterator>
#include <list>
bool* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite;
std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE;
std::list<uint32_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId;
std::list<uint32_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId;
std::list<uint32_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId;
uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index;
std::list<uint8_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE;
uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index;
CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::WriteEnableForThreadsAt_ServerOutputSend__Control()
{
    stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control();
    stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control();
}
CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::~WriteEnableForThreadsAt_ServerOutputSend__Control()
    {
        delete _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite;
        delete _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE;
        delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId;
        delete _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId;
        delete _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index;
        delete _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE;
        delete _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index;
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
{
    std::cout << "entered REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
    stat_REG_boot1_DEFINE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState();
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId();
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId();
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId();
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
    stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE();
    stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
    std::cout << "exiting REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Control(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
{
    std::cout << "entered REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
    stat_REG_boot2_SUBSTANTIATE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState();
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(obj);
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId(obj);
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId(obj);
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE();
    stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
    std::cout << "exiting REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
{
    std::cout << "entered REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
    stat_REG_boot3_INITIALISE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadIdd();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE();
    stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
    std::cout << "exiting REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ServerOutputSend__Control(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
    {
        //if thread primed and system initialised, exit, else wait.
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__dynamicStagger(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId)
    {
        if (*stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index() == coreId)
        {
            //exit early
        }
        else
        {
            int ptr_count = int(0);
            while (ptr_count < 20)//TODO record till flag change
            {
                ptr_count = ptr_count + 1;
            }
        }
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_Activate(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId)
    {
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT());
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId_A, uint8_t coreId_B)
    {
        auto temp_A = static_cast<uint32_t>(0);
        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(coreId_B, temp_A);

        temp_A = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(coreId_B, temp_A);

        auto temp_B = static_cast<uint8_t>(0);
        temp_B = obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_A);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_A, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_B));
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(coreId_B, temp_B);
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_SortQue(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
    {
        for (uint8_t index_A = 0; index_A < (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads() - 1); index_A++)
        {
            for (uint8_t index_B = (index_A + 1); index_B < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads(); index_B++)
            {
                if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE())
                {
                    if ((obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
                        || (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE()))
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(index_A) < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_A)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
                {
                    if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
                    {
                        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(index_B)) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
                    {
                        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(index_A) > obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(index_B))
                        {
                            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_ShiftQueValues(obj, index_A, index_B);
                        }
                    }
                }
            }
        }
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_Request(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj, uint8_t coreId)
    {
        while (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite() == true)
        {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__dynamicStagger(obj, coreId);
        }
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite(true);
        obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index());
        if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index() == coreId)
        {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__2ibt_flag_WriteState(coreId, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT());
        }
        else
        {
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index() + 1);
            if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index() == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads())
            {
                dyn_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index(0);
            }
            obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite(false);
            dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeEnable_Request(obj, coreId);
        }
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerOutputSend__Control__writeQue_Update(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
    {
        for (uint8_t concurrenctThreadID = 0; concurrenctThreadID < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads(); concurrenctThreadID++)
        {
            if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_IDLE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WAIT())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(concurrenctThreadID) + 1);
            }
            else if (obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(concurrenctThreadID) == obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_ptr_CONST_WriteEnableForThreadsAt_ServerOutputSend__2bitFLAG_WRITE())
            {
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(concurrenctThreadID, obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(concurrenctThreadID) + 1);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrenctThreadID, 0);
                obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App()->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__App__Control()->stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrenctThreadID, 0);
            }
        }
    }
bool CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite()
    {
        return *stat_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite();
    }
std::array<bool, 2> CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID)
{
    auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
}
uint32_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID)
{
    auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
}
uint32_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID)
{
    auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
}
uint32_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerOutputSend__Control__list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID)
{
    auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->begin();
    std::advance(temp, concurrentThreadID);
    return *temp;
}
uint8_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index()
{
    return *stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index();
}
uint8_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(uint8_t slotID)
{
    auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->begin();
    std::advance(temp, slotID);
    return *temp;
}
uint8_t CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_get_Item_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index()
    {
        return *stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index();
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite(bool newBoolValue)
{
    stat_REG_dyn_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite(newBoolValue);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
{
    stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState(concurrentThreadID, new2bitState);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
{
    stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(concurrentThreadID, newCount);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
{
    stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(concurrentThreadID, newCount);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
{
    stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(concurrentThreadID, newCount);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index(uint8_t newID)
{
    stat_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index(newID);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID)
{
    stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(slotID, newID);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::dyn_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index(uint8_t newID)
{
    stat_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index(newID);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control()
    {
        std::cout << "entered CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control" << std::endl;

        std::cout << "exiting CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerOutputSend__Control" << std::endl;
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control()
    {
        std::cout << "entered CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;

        std::cout << "exiting CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerOutputSend__Control()" << std::endl;
    }
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite()
{
    _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId()
{
    _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId()
{
    _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId()
{
    _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE()
{
    _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index = nullptr;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite()
{
    _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite = new bool();
    *_stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite = true;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE = new std::array<std::array<bool, 2>, 3>();
    while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState() == nullptr) {}
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(0) = { true, true };
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(1) = { true, true };
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(2) = { true, true };
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
{
    _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId = new std::list<uint32_t>();
    while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId() == nullptr) {}
    stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads());
    for (uint8_t threadId = 0; threadId < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads(); threadId++)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->begin();
        std:advance(temp, threadId);
        *temp = (uint32_t)(UINT32_MAX);
    }

}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId(WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
{
    _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId = new std::list<uint32_t>();
    while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId() == nullptr) {}
    stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads());
    for (uint8_t threadId = 0; threadId < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads(); threadId++)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->begin();
    std:
        std::advance(temp, threadId);
        *temp = uint32_t(UINT32_MAX);
    }

}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId(CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Framework* obj)
{
    _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId = new std::list<uint32_t>();
    while (stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId() == nullptr) {}
    stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->resize(obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads());
    for (uint8_t threadId = 0; threadId < obj->dyn_CLASS_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Global()->dyn_REG_get_WriteEnableForThreadsAt_ServerOutputSend__number_Of_Implemented_Threads(); threadId++)
    {
        auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->begin();
        std:
            std::advance(temp, threadId);
        *temp = uint32_t(UINT32_MAX);
    }
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index = new uint8_t();
    *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(UINT8_MAX);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE()
{
    _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE = new std::list<uint8_t>();
    while (stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite() == NULL) {}
    *_stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE = { static_cast<uint8_t>(UINT8_MAX), static_cast<uint8_t>(UINT8_MAX), static_cast<uint8_t>(UINT8_MAX) , static_cast<uint8_t>(UINT8_MAX) };
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index()
{
    _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index = new uint8_t();
    *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(UINT8_MAX);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite()
{
    _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite = new bool();
    *_stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite = false;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState()
{
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE = new std::array <std::array<bool, 2>, 3>();
    while (stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState() == NULL) {}
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(0) = { false, false };
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(1) = { false, true };
    _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE->at(2) = { true, false };
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId()
{
    *_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId = { static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0) };
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId()
{
    *_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId = { static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0) };
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadIdd()
{
    *_stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId = { static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0), static_cast<uint32_t>(0) };
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index()
{
    *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(1);
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__ptr_QUE_Of_ThreadID_To_WRITE()
{
    *_stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE = { static_cast<uint8_t>(0), static_cast<uint8_t>(1), static_cast<uint8_t>(2), static_cast<uint8_t>(3) };
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index()
{
    *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index = static_cast<uint8_t>(0);
}
bool* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite()
{
    return _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite;
}
std::array<std::array<bool, 2>, 3>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState()
{
    return _stat_REG_CONST_WriteEnableForThreadsAt_ServerOutputSend__Control__2bitFLAG_STATE;
}
std::list<uint32_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId() {
    return _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId;
}
std::list<uint32_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()
{
    return _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIDLE_Count_For_ThreadId;
}
std::list<uint32_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()
{
    return _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWAIT_Count_For_ThreadId;
}
uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index()
{
    return _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index;
}
std::list<uint8_t>* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()
{
    return _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__ThreadID_To_WRITE;
}
uint8_t* CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_get_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index()
{
    return _stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_dyn_REG_set_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite(bool newFlag)
{
    *_stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerOutputSend__Control__praisingWrite = newFlag;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState)
{
    auto temp = stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__3STATE_flag_WriteState()->begin();
    std::advance(temp, concurrentThreadID);
    *temp = new2bitState;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
{
    auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteActive_Count_For_ThreadId()->begin();
    std::advance(temp, concurrentThreadID);
    *temp = newCount;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
{
    auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteIdle_Count_For_ThreadId()->begin();
    std::advance(temp, concurrentThreadID);
    *temp = newCount;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount)
{
    auto temp = stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerOutputSend__Control__WriteWait_Count_For_ThreadId()->begin();
    std::advance(temp, concurrentThreadID);
    *temp = newCount;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index(uint8_t newValue)
{
    *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__new_writeCycle_Try_ThreadId_Index = newValue;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID)
{
    auto temp = stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerOutputSend__Control__List_Of_ThreadToWrite()->begin();
    std::advance(temp, slotID);
    *temp = concurrentThreadID;
}
void CLIBWriteQueAtServerOutputSend::WriteEnableForThreadsAt_ServerOutputSend__Control::stat_REG_set_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index(uint8_t newValue)
{
    *_stat_REG_ptr_WriteEnableForThreadsAt_ServerOutputSend__Control__writeCycle_Try_ThreadId_Index = newValue;
}