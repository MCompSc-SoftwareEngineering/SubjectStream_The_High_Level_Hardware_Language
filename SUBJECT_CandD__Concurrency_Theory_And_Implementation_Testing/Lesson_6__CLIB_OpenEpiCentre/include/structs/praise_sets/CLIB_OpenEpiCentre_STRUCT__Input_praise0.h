#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__INPUT_PRAISE0_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_STRUCT__INPUT_PRAISE0_H
namespace CLIBOpenEpiCentre
{
    struct CLIB_OpenEpiCentre_STRUCT__Input_praise0
    {
    public:
        void dyn_REG_boot1_DEFINE_Input_praise0();
        void dyn_REG_boot2_SUBSTANTIATE_Input_praise0();
        void dyn_REG_boot3_INITIALISE_Input_praise0();
        float dyn_REG_get_Item_Input_praise0_valueA();
        float dyn_REG_get_Item_Input_praise0_valueB();
        void dyn_REG_set_Item_Input_praise0_valueA(float newValue);
        void dyn_REG_set_Item_Input_praise0_valueB(float newValue);
    private:
        static float* _stat_REG_ptr_Input_praise0_valueA;
        static float* _stat_REG_ptr_Input_praise0_valueB;
        static void stat_REG_boot1_DEFINE_Input_praise0_valueA();
        static void stat_REG_boot1_DEFINE_Input_praise0_valueB();
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueA();
        static void stat_REG_boot2_SUBSTANTIATE_Input_praise0_valueB();
        static void stat_REG_boot3_INITIALISE_Input_praise0_valueA();
        static void stat_REG_boot3_INITIALISE_Input_praise0_valueB();
        static float* stat_REG_get_Ptr_Input_praise0_valueA();
        static float* stat_REG_get_Ptr_Input_praise0_valueB();
    };
}
#endif