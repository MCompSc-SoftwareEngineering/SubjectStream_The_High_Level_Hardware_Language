#ifndef OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__GLOBAL_H
#define OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE__GLOBAL_H
#include <cstdint>
namespace CLIBOpenEpiCentre
{
    class CLIB_OpenEpiCentre__Global
    {
    public:
        CLIB_OpenEpiCentre__Global();
        virtual ~CLIB_OpenEpiCentre__Global();
        void dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
        void dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global();
        void dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
        void dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global();
        uint8_t dyn_REG_get_Item_number_Of_Implemented_Cores();
        uint8_t dyn_REG_get_Item_number_Of_Praise_Events();
        static void stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
        static void stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global();
        static void stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global();
        static int stat_CONVERT_Bool_To_Int(bool value);
        static unsigned char* stat_CONVERT_MsbBoolean_To_MsbByteArray(bool value);
        static bool stat_CONVERT_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray);
        static double stat_CONVERT_MsbByteArray_To_MsbDouble(const unsigned char* byteArray);
        static float stat_CONVERT_MsbByteArray_To_MsbFloat(const unsigned char* byteArray);
        static uint8_t stat_CONVERT_MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray);
        static unsigned char* stat_CONVERT_MsbInt_To_MsbByteArray(uint8_t value);
        static unsigned char* stat_CONVERT_MsbFloat_To_MsbByteArray(float value);
        static unsigned char* stat_CONVERT_MsbDouble_To_MsbByteArray(double value);
        static unsigned char* stat_CONVERT_uint8_t_to_ByteArray(uint8_t value);
    private:
        static uint8_t* _stat_REG_ptr_number_Of_Implemented_Cores;
        static uint8_t* _stat_REG__ptr_number_Of_Praise_Events;
        static void stat_REG_boot1_DEFINE_number_Of_Implemented_Cores();
        static void stat_REG_boot1_DEFINE_number_Of_Praise_Events();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores();
        static void stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events();
        static void stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores();
        static void stat_REG_boot3_INITIALISE_number_Of_Praise_Events();
        static uint8_t* stat_REG_get_Ptr_number_Of_Implemented_Cores();
        static uint8_t* stat_REG_get_Ptr_number_Of_Praise_Events();
    };
}
#endif //OPENEPICENTRE_BACKENDUBUNTU_CLIB_OPENEPICENTRE_GLOBAL_H
