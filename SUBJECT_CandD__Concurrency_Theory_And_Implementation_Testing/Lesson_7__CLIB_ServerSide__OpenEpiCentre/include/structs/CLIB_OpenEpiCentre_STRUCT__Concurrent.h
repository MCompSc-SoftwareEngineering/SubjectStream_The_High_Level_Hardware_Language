#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__CONCURRENT_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__CONCURRENT_H
#include "../engine/CLIB_OpenEpiCentre__Framework.h"
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    struct CLIB_OpenEpiCentre_STRUCT__Concurrent
    {
    public:
        void app_do_Concurrent_Algorithm_For_PraiseEventId(class CLIB_OpenEpiCentre__Framework obj, uint8_t playerId, uint8_t praiseEventId, class Object* ptr_Input_Subset, class Object* ptr_Output_Subset);
        void dyn_REG_boot1_DEFINE_Concurrent();
        void dyn_REG_boot2_SUBSTANTIATE_Concurrent();
        void dyn_REG_boot3_INITIALISE_Concurrent(CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_Concurrent();
        static void stat_app_thread_Concurrency(CLIB_OpenEpiCentre__Framework* obj, uint8_t concurrent_threadID);
        static void stat_CLASS_boot0_DECLARE_Concurrent();
        static void stat_CLASS_boot1_DEFINE_Concurrent();
        static void stat_CLASS_boot3_INITIALISE_Concurrent();
        static void stat_CLASS_boot4_INSTANTIATE_Concurrent();
        static void stat_REG_boot0_DECLARE_Concurrent();
    private:
     };
}
#endif