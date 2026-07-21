#ifndef CLIB_WRITEENABLEFORTHREADSAT_STACK_WRITEENABLEFORTHREADSAT_STACK__APP_H
#define CLIB_WRITEENABLEFORTHREADSAT_STACK_WRITEENABLEFORTHREADSAT_STACK__APP_H
#include "WriteEnableForThreadsAt_STACK__Control.h"
#include <cstdint>
namespace CLIBWriteQueAtSTACK
{
    class WriteEnableForThreadsAt_STACK__App
    {
    public:
        WriteEnableForThreadsAt_STACK__App();
        virtual ~WriteEnableForThreadsAt_STACK__App();
        static void CLASS_boot0_DECLARE_WriteEnableForThreadsAt_STACK();
        static void CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK();
        static void CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK();
        static void REG_boot0_DECLARE_WriteEnableForThreadsAt_STACK();
        void REG_boot1_DEFINE_WriteEnableForThreadsAt_STACK(WriteEnableForThreadsAt_STACK__Framework* obj);
        void REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_STACK(WriteEnableForThreadsAt_STACK__Framework* obj);
        void REG_boot3_INITIALISE_WriteEnableForThreadsAt_STACK(WriteEnableForThreadsAt_STACK__Framework* obj);
        void boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK(WriteEnableForThreadsAt_STACK__Framework* obj);
        void dyn_APP_FUNCT_write_End(WriteEnableForThreadsAt_STACK__Framework* obj, uint8_t coreId);
        void dyn_APP_FUNCT_write_Start(WriteEnableForThreadsAt_STACK__Framework* obj, uint8_t coreId);
        WriteEnableForThreadsAt_STACK__Control* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App__Control();
    private:
        static WriteEnableForThreadsAt_STACK__Control* _stat_CLASS_ptr_WriteEnable__Control;
        static void stat_CLASS_boot1_DEFINE_WriteEnable__Control();
        static void stat_CLASS_boot3_INITIALISE_WriteEnable__Control();
        static WriteEnableForThreadsAt_STACK__Control* stat_CLASS_get_ptr_WriteEnable__Control();
    };
}
#endif
