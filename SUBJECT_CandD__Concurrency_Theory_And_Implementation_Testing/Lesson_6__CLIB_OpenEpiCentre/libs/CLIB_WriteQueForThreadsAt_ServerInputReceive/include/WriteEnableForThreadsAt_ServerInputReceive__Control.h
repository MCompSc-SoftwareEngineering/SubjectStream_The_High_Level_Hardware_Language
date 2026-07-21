#ifndef CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive__Control_H
#define CLIB_WRITEENABLEFORTHREADSAT_ServerInputReceive_WRITEENABLEFORTHREADSAT_ServerInputReceive__Control_H
#include <cstdint>
#include <list>
namespace CLIBWriteQueAtServerInputReceive
{
    class WriteEnableForThreadsAt_ServerInputReceive__Control
    {
    public:
        WriteEnableForThreadsAt_ServerInputReceive__Control();
        ~WriteEnableForThreadsAt_ServerInputReceive__Control();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Control(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_ServerInputReceive__Control(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Control(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATION_WriteEnableForThreadsAt_ServerInputReceive__Control(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__dynamicStagger(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_Activate(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_ShiftQueValues(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId_A, uint8_t coreId_B);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_SortQue(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeEnable_Request(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_WriteEnableForThreadsAt_ServerInputReceive__Control__writeQue_Update(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        bool dyn_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite();
        std::array<bool, 2> dyn_REG_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__list_Of_2ibt_flag_WriteState(uint8_t concurrentThreadID);
        uint32_t dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerInputReceive__Control__list_Of_WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint32_t dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerInputReceive__Control__list_Of_WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint32_t dyn_REG_get_Item_On_WriteEnableForThreadsAt_ServerInputReceive__Control__list_Of_WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID);
        uint8_t dyn_REG_get_Item_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index();
        uint8_t dyn_REG_get_Item_On_QUE_WriteEnableForThreadsAt_ServerInputReceive__Control__List_Of_ThreadToWrite(uint8_t slotID);
        uint8_t dyn_REG_get_Item_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index();
        void dyn_REG_set_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite(bool newBoolValue);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__2ibt_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteActive_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void dyn_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        void dyn_REG_set_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index(uint8_t newID);
        void dyn_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerInputReceive__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t newID);
        void dyn_REG_set_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index(uint8_t newID);
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_ServerInputReceive__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_ServerInputReceive__Control();
    private:
        static bool* _stat_REG_ptr_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite;
        static std::array<std::array<bool, 2>, 3>* _stat_REG_CONST_WriteEnableForThreadsAt_ServerInputReceive__Control__2bitFLAG_STATE;
        static std::list<uint32_t>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteACTIVE_Count_For_ThreadId;
        static std::list<uint32_t>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteIDLE_Count_For_ThreadId;
        static std::list<uint32_t>* _stat_REG_LIST_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteWAIT_Count_For_ThreadId;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index;
        static std::list<uint8_t>* _stat_REG_QUE_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__ThreadID_To_WRITE;
        static uint8_t* _stat_REG_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index;
        static void stat_REG_boot1_DEFINE_ptr_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__3STATE_flag_WriteState();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteWAIT_Count_For_ThreadId();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot1_DEFINE_ptr_QUE_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__ThreadID_To_WRITE();
        static void stat_REG_boot1_DEFINE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__3STATE_flag_WriteState();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteACTIVE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteIDLE_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteWAIT_Count_For_ThreadId(class WriteEnableForThreadsAt_ServerInputReceive__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__ptr_QUE_Of_ThreadID_To_WRITE();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__3STATE_flag_WriteState();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteACTIVE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteIDLE_Count_For_ThreadId();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteWAIT_Count_For_ThreadIdd();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__ptr_QUE_Of_ThreadID_To_WRITE();
        static void stat_REG_boot3_INITIALISE_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index();
        static bool* stat_REG_get_ptr_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite();
        static std::array <std::array<bool, 2>, 3>* stat_REG_get_ptr_Array_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__3STATE_flag_WriteState();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteActive_Count_For_ThreadId();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteIdle_Count_For_ThreadId();
        static std::list<uint32_t>* stat_REG_get_ptr_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteWait_Count_For_ThreadId();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index();
        static std::list<uint8_t>* stat_REG_get_ptr_QUE_WriteEnableForThreadsAt_ServerInputReceive__Control__List_Of_ThreadToWrite();
        static uint8_t* stat_REG_get_ptr_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index();
        static void stat_REG_dyn_REG_set_flag_WriteEnableForThreadsAt_ServerInputReceive__Control__praisingWrite(bool newFlag);
        static void stat_REG_set_Item_On_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__3STATE_flag_WriteState(uint8_t concurrentThreadID, std::array<bool, 2> new2bitState);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteACTIVE_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteIdle_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_REG_set_Item_On_list_Of_WriteEnableForThreadsAt_ServerInputReceive__Control__WriteWait_Count_For_ThreadId(uint8_t concurrentThreadID, uint32_t newCount);
        static void stat_REG_set_WriteEnableForThreadsAt_ServerInputReceive__Control__new_writeCycle_Try_ThreadId_Index(uint8_t newValue);
        static void stat_REG_set_Item_On_QUE_WriteEnableForThreadsAt_ServerInputReceive__Control__List_Of_ThreadToWrite(uint8_t slotID, uint8_t concurrentThreadID);
        static void stat_REG_set_WriteEnableForThreadsAt_ServerInputReceive__Control__writeCycle_Try_ThreadId_Index(uint8_t newValue);
    };
}
#endif
