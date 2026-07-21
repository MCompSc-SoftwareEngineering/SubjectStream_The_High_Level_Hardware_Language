#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__EXECUTE__CONTROL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__EXECUTE__CONTROL_H
#include "CLIB_OpenEpiCentre__Framework.h"
#include <array>
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Execute__Control
    {
    public:
        CLIB_OpenEpiCentre__Execute__Control();
        virtual ~CLIB_OpenEpiCentre__Execute__Control();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre__Execute__Control(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control(class CLIB_OpenEpiCentre__Framework* obj);
        bool dyn_REG_get_Flag_is_SystemInitialised();
        bool dyn_REG_get_Item_On_List_Of_Flag_ThreadInitialised(uint8_t threadID);
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre__Execute__Control();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre__Execute__Control();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre__Execute__Control();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre__Execute__Control();
    private:
        static bool* _stat_REG_ptr_Flag_isSystemInitialised;
        static std::array<bool, 4>* _stat_REG_ptr_Flag_array_ThreadInitialised;//NUMBER OF THREADS
        static void stat_REG_boot1_DEFINE_Flag_isSystemInitialised();
        static void stat_REG_boot1_DEFINE_Flag_array_ThreadInitialised();
        static void stat_REG_boot2_SUBSTANTIATE_Flag_isSystemInitialised(class CLIB_OpenEpiCentre__Framework* obj);
        static void stat_REG_boot2_SUBSTANTIATE_Flag_array_ThreadInitialised(class CLIB_OpenEpiCentre__Framework* obj);
        static void stat_REG_boot3_INITIALISE_Flag_isSystemInitialised(class CLIB_OpenEpiCentre__Framework* obj);
        static void stat_REG_boot3_INITIALISE_Flag_array_ThreadInitialised(class CLIB_OpenEpiCentre__Framework* obj);
        static bool* stat_REG_get_ptr_Flag_is_SystemInitialised();
        static std::array<bool, 4>* stat_get_ptr_list_Of_flag_ThreadInitialised();
        static void stat_REG_set_Flag_is_SystemInitialised(bool newFlag);
    };
};
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OpenEpiCentre__Execute__Control_H