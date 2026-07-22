#include "../../include/engine/CLIB_OpenEpiCentre__Global.h"
#include <cstring>
#include <iostream>
enum Axis
    {
        X,
        Y,
        Z
    };
    enum Praise
    {
        ADDER
    };
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::_stat_REG_ptr_number_Of_Implemented_Cores;
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::_stat_REG__ptr_number_Of_Praise_Events;
// public.
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::CLIB_OpenEpiCentre__Global()
    {
        std::cout << "entered CONSTRUCTOR of CLIB_OpenEpiCentre_Global()." << std::endl;
        stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global();
        stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global();
        stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global();
        stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global();
        std::cout << "exiting CONSTRUCTOR of CLIB_OpenEpiCentre_Global()." << std::endl;
    }
    CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::~CLIB_OpenEpiCentre__Global()
    {
        delete _stat_REG_ptr_number_Of_Implemented_Cores;
        delete _stat_REG__ptr_number_Of_Praise_Events;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global()" << std::endl;
        stat_REG_boot1_DEFINE_number_Of_Implemented_Cores();
        stat_REG_boot1_DEFINE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot1_DEFINE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global()" << std::endl;
        stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores();
        stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot2_SUBSTANTIATE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered dyn_REG_boot3_INITIALISE_dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_GlobalCLIB_OpenEpiCentre_Global()" << std::endl;
        stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores();
        stat_REG_boot3_INITIALISE_number_Of_Praise_Events();
        std::cout << "exiting dyn_REG_boot3_INITIALISE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global()" << std::endl;

        std::cout << "exiting dyn_REG_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::dyn_REG_get_Item_number_Of_Implemented_Cores()
    {
        return *stat_REG_get_Ptr_number_Of_Implemented_Cores();
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::dyn_REG_get_Item_number_Of_Praise_Events()
    {
        return *stat_REG_get_Ptr_number_Of_Praise_Events();
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot0_DECLARE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot1_DEFINE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot3_INITIALISE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global()" << std::endl;

        std::cout << "exiting stat_CLASS_boot4_INSTANTIATE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global()
    {
        std::cout << "entered stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global()" << std::endl;

        std::cout << "exiting stat_REG_boot0_DECLARE_CLIB_OpenEpiCentre_Global()" << std::endl;
    }
    int CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_Bool_To_Int(bool value)
    {
        int* temp = nullptr;
        *temp = 2;
        if (value) {
            *temp = 1;;
        }
        if (!value) {
            *temp = 0;
        }
        return *temp;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbBoolean_To_MsbByteArray(bool value)
    {
        unsigned char* buffer;
        for (uint8_t bitIndex = 0; bitIndex < sizeof(unsigned char); bitIndex++) {
            buffer[bitIndex] = static_cast<unsigned char>(value);
        }
        return buffer;
    }
    bool CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbBoolean(const unsigned char* byteArray)
    {
        return (byteArray[7] & 1) != 0;
    }
    double CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbDouble(const unsigned char* byteArray)
    {
        double temp;
        std::memcpy(&temp, byteArray, sizeof(double));
        return temp;
    }
    float CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_MsbFloat(const unsigned char* byteArray)
    {
        float temp;
        std::memcpy(&temp, byteArray, sizeof(float));
        return temp;
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbByteArray_To_Msbuint8_t(const unsigned char* byteArray)
    {
        uint8_t temp;
        std::memcpy(&temp, byteArray, sizeof(uint8_t));
        return temp;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbFloat_To_MsbByteArray(float value)
    {
        unsigned char* buffer;
        std::memcpy(buffer, &value, sizeof(float));
        return buffer;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_MsbDouble_To_MsbByteArray(double value)
    {
        unsigned char* buffer;
        std::memcpy(buffer, &value, sizeof(double));
        return buffer;
    }
    unsigned char* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_CONVERT_uint8_t_to_ByteArray(uint8_t value)
    {
        unsigned char* buffer;
        std::memcpy(buffer, &value, sizeof(uint8_t));
        return buffer;
    }
// private.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_boot1_DEFINE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_boot1_DEFINE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = nullptr;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Implemented_Cores()
    {
        _stat_REG_ptr_number_Of_Implemented_Cores = new uint8_t();
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(UINT8_MAX);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_boot2_SUBSTANTIATE_number_Of_Praise_Events()
    {
        _stat_REG__ptr_number_Of_Praise_Events = new uint8_t();
        *_stat_REG__ptr_number_Of_Praise_Events = static_cast<uint8_t>(UINT8_MAX);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_boot3_INITIALISE_number_Of_Implemented_Cores()
    {
        *_stat_REG_ptr_number_Of_Implemented_Cores = static_cast<uint8_t>(4);
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_boot3_INITIALISE_number_Of_Praise_Events()
    {
        *_stat_REG__ptr_number_Of_Praise_Events = static_cast<uint8_t>(1);
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_get_Ptr_number_Of_Implemented_Cores()
    {
        return _stat_REG_ptr_number_Of_Implemented_Cores;
    }
    uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre__Global::stat_REG_get_Ptr_number_Of_Praise_Events()
    {
        return _stat_REG__ptr_number_Of_Praise_Events;
    }