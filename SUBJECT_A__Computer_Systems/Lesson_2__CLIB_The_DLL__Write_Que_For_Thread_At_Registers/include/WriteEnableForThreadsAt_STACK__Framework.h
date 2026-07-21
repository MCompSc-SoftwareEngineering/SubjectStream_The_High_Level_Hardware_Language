#ifndef CLIB_WRITEENABLEFORTHREADSAT_STACK_WRITEENABLEFORTHREADSAT_STACK__FRAMEWORK_H
#define CLIB_WRITEENABLEFORTHREADSAT_STACK_WRITEENABLEFORTHREADSAT_STACK__FRAMEWORK_H
#include "WriteEnableForThreadsAt_STACK__App.h"
#include "WriteEnableForThreadsAt_STACK__Global.h"
#include "WriteEnableForThreadsAt_STACK__Framework.h"
namespace CLIBWriteQueAtSTACK
{
    class WriteEnableForThreadsAt_STACK__Framework
    {
    public:
        WriteEnableForThreadsAt_STACK__Framework();
        virtual ~WriteEnableForThreadsAt_STACK__Framework();
        WriteEnableForThreadsAt_STACK__App* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App();
        WriteEnableForThreadsAt_STACK__Global* dyn_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__Global();
        void dyn_REG_boot1_DEFINE_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
        void dyn_REG_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
        void dyn_boot4_PGM_INSTANTIATION_WriteEnableForThreadsAt_STACK__Framework(WriteEnableForThreadsAt_STACK__Framework* obj);
    private:
        static WriteEnableForThreadsAt_STACK__App* _stat_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App;
        static WriteEnableForThreadsAt_STACK__Global* _stat_CLASS_ptr_WriteEnableForThreadsAt_STACK__Global;
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK__App();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK__Framework();
        static void stat_CLASS_boot1_DEFINE_WriteEnableForThreadsAt_STACK__Global();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__App();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Framework();
        static void stat_CLASS_boot3_INITIALISE_WriteEnableForThreadsAt_STACK__Global();
        static WriteEnableForThreadsAt_STACK__App* stat_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__App();
        static WriteEnableForThreadsAt_STACK__Global* stat_CLASS_get_ptr_WriteEnableForThreadsAt_STACK__Global();
    };
}
#endif