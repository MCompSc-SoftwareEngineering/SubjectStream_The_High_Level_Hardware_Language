#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CONTROL_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_CONTROL_H
#include "LaunchEnableForConcurrentThreadsAt_Server__Framework.h"
#include <cstdint>
#include <list>
namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server__Control
    {
     public:
        LaunchEnableForConcurrentThreadsAt_Server__Control();
        virtual ~LaunchEnableForConcurrentThreadsAt_Server__Control();
        void dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchEnable_Activate(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj);
        void dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchEnable_Request(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID);
        void dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchEnable_SortQue(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t number_Implemented_Threads);
        void dyn_App_LaunchEnableForConcurrentThreadsAt_Server__Control__launchQue_Update(LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t number_Implemented_Threads);
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__Control();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__Control();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__Control();
        uint8_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index();
        bool dyn_REG_get_flag_LaunchEnableForConcurrentThreadsAt_Server__praisinglaunch();
        uint32_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t threadID);
        uint32_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t threadID);
        bool dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId);
        uint8_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t concurrentThreadId);
        uint8_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__new_concurrentCycle_Try_CoreId_Index();
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        void dyn_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__praisinglaunch(bool newFlag);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, uint32_t newValue);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, uint32_t newValue);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId);
        void dyn_REG_set_LaunchEnableForConcurrentThreadsAt_Server__new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);
    private:
        void dynamicStagger(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t coreId);
        void launchEnable_ShiftQueValues(class LaunchEnableForConcurrentThreadsAt_Server__Framework* obj, uint8_t concurrentThreadID_A, uint8_t concurrentThreadID_B);
        static uint8_t* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index;
        static bool* _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch;
        static std::list<uint32_t>* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID;
        static std::list<uint32_t>* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID;
        static std::list<bool>* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore;
        static std::list<uint8_t>* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreToLaunch;
        static uint8_t* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index;
        static void stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
        static void stat_dyn_REG_boot1_DEFINE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisingLaunch();
        static void stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID();
        static void stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID();
        static void stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore();
        static void stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch();
        static void stat_dyn_REG_boot1_DEFINE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch();
        static void stat_REG_boot2_SUBSTANTIATE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
        static void stat_REG_boot3_INITIALISE_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch();
        static void stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID();
        static void stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID();
        static void stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore();
        static void stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_for_Que_Of_CoreTolaunch();
        static void stat_REG_boot3_INITIALISE_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
        static uint8_t* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index();
        static bool* stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch();
        static std::list<uint32_t>* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchActive_Count_For_ThreadID();
        static std::list<uint32_t>* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_launchIdle_Count_For_ThreadID();
        static std::list<bool>* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__list_Of_STATE_For_ConcurrentCore();
        static std::list<uint8_t>* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__List_QUE_Of_CoreTolaunch();
        static uint8_t* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index();
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__concurrentCycle_Try_CoreId_Index(uint8_t newValue);
        static void stat_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__Control__praisinglaunch(bool newFlag);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchActive_Count_For_ThreadID(uint8_t concurrentThreadId, uint32_t newValue);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_launchIdle_Count_For_ThreadID(uint8_t concurrentThreadId, uint32_t newValue);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t concurrentThreadId, bool newState);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__Item_On_list_for_Que_Of_CoreTolaunch(uint8_t slot, uint8_t concurrentThreadId);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__Control__new_concurrentCycle_Try_CoreId_Index(uint32_t newValue);    };
}
#endif