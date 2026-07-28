#ifndef TESTBENCH_CLIB_OPENEPICENTRE__FRAMEWORK_H
#define TESTBENCH_CLIB_OPENEPICENTRE__FRAMEWORK_H
#include "../engine/CLIB_OpenEpiCentre__App.h"
#include "CLIB_OpenEpiCentre__Global.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Concurrent.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__Output.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Algorithm.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Input.h"
#include "../structs/CLIB_OpenEpiCentre_STRUCT__User_Output.h"
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Framework
    {
    public:
        CLIB_OpenEpiCentre__Framework();
        virtual ~CLIB_OpenEpiCentre__Framework();
        void dyn_CLASS_create_Architecture();
        void dyn_CLASS_create_CLIB_OpenEpiCentre_Global_and_Settings();
        class CLIB_OpenEpiCentre__App* dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_App();
        class CLIB_OpenEpiCentre__Global* dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Global();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_PGM_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework(class CLIB_OpenEpiCentre__Framework* obj);
        void dyn_STRUCT_boot0_DECLARE_User_Algorithm();
        void dyn_STRUCT_boot0_DECLARE_User_Input();
        void dyn_STRUCT_boot0_DECLARE_User_Output();
        void dyn_STRUCT_boot0_DECLARE_Concurrent();
        void dyn_STRUCT_boot0_DECLARE_Input();
        void dyn_STRUCT_boot0_DECLARE_Output();
        void dyn_STRUCT_boot1_DEFINE_User_Algorithm();
        void dyn_STRUCT_boot1_DEFINE_User_Input();
        void dyn_STRUCT_boot1_DEFINE_User_Output();
        void dyn_STRUCT_boot1_DEFINE_Concurrent();
        void dyn_STRUCT_boot1_DEFINE_Input();
        void dyn_STRUCT_boot1_DEFINE_Output();
        void dyn_STRUCT_boot3_INITIALISE_User_Algorithm();
        void dyn_STRUCT_boot3_INITIALISE_User_Input();
        void dyn_STRUCT_boot3_INITIALISE_User_Output();
        void dyn_STRUCT_boot3_INITIALISE_Concurrent();
        void dyn_STRUCT_boot3_INITIALISE_Input();
        void dyn_STRUCT_boot3_INITIALISE_Output();
        static struct CLIB_OpenEpiCentre_STRUCT__Concurrent* dyn_STRUCT_get_Concurrent();
        static struct CLIB_OpenEpiCentre_STRUCT__Input* dyn_STRUCT_get_Input();
        static struct CLIB_OpenEpiCentre_STRUCT__Output* dyn_STRUCT_get_Output();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Algorithm* dyn_STRUCT_get_User_Algorithm();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Input* dyn_STRUCT_get_User_Input();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Output* dyn_STRUCT_get_User_Output();
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Framework();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Framework();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Framework();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Framework();
        static void stat_STRUCT_boot0_DECLARE();
        static void stat_STRUCT_boot1_DEFINE();
        static void stat_STRUCT_boot3_INITIALISE();
    private:
        static struct CLIB_OpenEpiCentre__App* _stat_CLASS_ptr_CLIB_OpenEpiCentre_App;
        static struct CLIB_OpenEpiCentre__Global* _stat_CLASS_ptr_CLIB_OpenEpiCentre_Global;
        static struct CLIB_OpenEpiCentre_STRUCT__Concurrent* _stat_STRUCT_Concurrent;
        static struct CLIB_OpenEpiCentre_STRUCT__Input* _stat_STRUCT_Input;
        static struct CLIB_OpenEpiCentre_STRUCT__Output* _stat_STRUCT_Output;
		static struct CLIB_OpenEpiCentre_STRUCT__User_Algorithm* _stat_CLASS_ptr_User_Algorithm;
		static struct CLIB_OpenEpiCentre_STRUCT__User_Input* _stat_STRUCT_User_Input;
		static struct CLIB_OpenEpiCentre_STRUCT__User_Output* _stat_STRUCT_User_Output;
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot1_DEFINE_Server();
        static void stat_CLASS_boot3_INITIALISE_Server();
        static struct CLIB_OpenEpiCentre__Global* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_Global();
        static struct CLIB_OpenEpiCentre__App* stat_CLASS_get_ptr_CLIB_OpenEpiCentre_App();
        static void stat_STRUCT_boot0_DECLARE_User_Algorithm();
        static void stat_STRUCT_boot0_DECLARE_User_Input();
        static void stat_STRUCT_boot0_DECLARE_User_Output();
        static void stat_STRUCT_boot0_DECLARE_Concurrent();
        static void stat_STRUCT_boot0_DECLARE_Input();
        static void stat_STRUCT_boot0_DECLARE_Output();
        static void stat_STRUCT_boot1_DEFINE_User_Algorithm();
        static void stat_STRUCT_boot1_DEFINE_User_Input();
        static void stat_STRUCT_boot1_DEFINE_User_Output();
        static void stat_STRUCT_boot1_DEFINE_Concurrent();
        static void stat_STRUCT_boot1_DEFINE_Input();
        static void stat_STRUCT_boot1_DEFINE_Output();
        static void stat_STRUCT_boot3_INITIALISE_User_Algorithm();
        static void stat_STRUCT_boot3_INITIALISE_User_Input();
        static void stat_STRUCT_boot3_INITIALISE_User_Output();
        static void stat_STRUCT_boot3_INITIALISE_Concurrent();
        static void stat_STRUCT_boot3_INITIALISE_Input();
        static void stat_STRUCT_boot3_INITIALISE_Output();
        static struct CLIB_OpenEpiCentre_STRUCT__Concurrent* stat_STRUCT_get_Concurrent();
        static struct CLIB_OpenEpiCentre_STRUCT__Input* stat_STRUCT_get_Input();
        static struct CLIB_OpenEpiCentre_STRUCT__Output* stat_STRUCT_get_Output();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Algorithm* stat_STRUCT_get_User_Algorithm();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Input* stat_STRUCT_get_User_Input();
        static struct CLIB_OpenEpiCentre_STRUCT__User_Output* stat_STRUCT_get_User_Output();
    };
}
#endif //TESTBENCH_CLIB_OPENEPICENTRE__FRAMEWORK_H
