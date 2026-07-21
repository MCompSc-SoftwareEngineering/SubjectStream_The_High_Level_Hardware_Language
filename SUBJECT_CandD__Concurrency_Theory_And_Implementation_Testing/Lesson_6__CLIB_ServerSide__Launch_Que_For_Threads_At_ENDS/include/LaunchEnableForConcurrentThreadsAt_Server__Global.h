#ifndef CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_GLOBAL_H
#define CLIB_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_LAUNCHENABLEFORCONCURRENTTHREADSAT_Server_GLOBAL_H
#include <array>

namespace CLIBLaunchQueAtServer
{
    class LaunchEnableForConcurrentThreadsAt_Server__Global
    {
    public:
        LaunchEnableForConcurrentThreadsAt_Server__Global();
        ~LaunchEnableForConcurrentThreadsAt_Server__Global();
        void dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        void dyn_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        void dyn_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server_Global();
        bool dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_ACTIVE();
        bool dyn_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE_IDLE();
        uint8_t dyn_REG_get_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static unsigned char* stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__bool_to_ByteArray(bool bool_Value);
        static unsigned char* stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__uint8_t_To_ByteArray(uint8_t uint8_t_Value);
        static bool stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__ByteArray_To_bool(unsigned char* bytes);
        static uint8_t stat_APP_CONVERT_LaunchEnableForConcurrentThreadsAt_Server__ByteArray_To_uint8_t(unsigned char* bytes);
    private:
        static bool* _stat_REG_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE;//NUMBER OF CONCURRENT THREADS.
        static uint8_t* _stat_REG_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads;
        static void stat_dyn_REG_boot1_DEFINE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static void stat_dyn_REG_boot1_DEFINE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static void stat_REG_boot2_SUBSTANTIATE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static void stat_REG_boot2_SUBSTANTIATE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static void stat_REG_boot3_INITIALISE_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static void stat_REG_boot3_INITIALISE_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static bool* stat_REG_get_ptr_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE();
        static uint8_t* stat_REG_get_ptr_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads();
        static void stat_REG_set_flag_LaunchEnableForConcurrentThreadsAt_Server__thread_2STATE(bool bit);
        static void stat_REG_set_LaunchEnableForConcurrentThreadsAt_Server__number_Implemented_Threads(uint8_t coreId);
    };
}
#endif
