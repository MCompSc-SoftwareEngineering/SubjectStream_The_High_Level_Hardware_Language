#ifndef CPP_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY_CLIB_MYDLL_H
#define CPP_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY_CLIB_MYDLL_H
extern "C" {
    namespace MyLIBS {
        class CLIB_MyDLL {
            public:
            static void* stat_App_FUNCT_MyLIBS__CLIB_MyDLL__generate_Program();
            static unsigned char* stat_App_FUNCT_MyLIBS__CLIB_MyDLL__get_flag_isPGM_INSTANTIATED();
            static void stat_App_FUNCT_MyLIBS__CLIB_MyDLL__terminate_Program();
            static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__add_a_b();
            static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__subtract_a_b();
            static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__multiply_a_b();
            static void stat_do_FUNCT_MyLIBS__CLIB_MyDLL__divide_a_b();
            static unsigned char* stat_get_FUNCT_MyLIBS__CLIB_MyDLL__Output__value();
            static void stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_a(unsigned char* value);
            static void stat_set_FUNCT_MyLIBS__CLIB_MyDLL_Input__value_b(unsigned char* value);
        private:
            static void stat_APP_FUNCT_MyLIBS__CLIB_MyDLL__Calc_IsAllINSTANTIATED();
            static void stat_CLASS_boot1_DEFINE_MyLIBS__CLIB_MyDLL__Framework();
            static void stat_CLASS_boot3_INITIALISE_MyLIBS__CLIB_MyDLL__Framework();
            static class Introduction_To_Dynamic_Link_Library__Framework* stat_CLASS_get_ptr_MyLIBS__CLIB_MyDLL__Framework();
            static void stat_REG_boot1_DEFINE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED();
            static void stat_REG_boot2_SUBSTANTIATE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED();
            static void stat_REG_boot3_INITIALISE_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED();
            static bool* stat_REG_get_MyLIBS__CLIB_MyDLL__isFlagINSTANTIATED();
        };
    }
}
#endif //CPP_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY_CLIB_MYDLL_H