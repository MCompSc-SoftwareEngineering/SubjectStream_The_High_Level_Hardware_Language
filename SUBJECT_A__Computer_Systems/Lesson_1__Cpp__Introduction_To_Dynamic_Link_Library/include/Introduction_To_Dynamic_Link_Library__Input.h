#ifndef CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INPUT_H
#define CLIB_INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INTRODUCTION_TO_DYNAMIC_LINK_LIBRARY__INPUT_H
namespace MyLIBS
{
    struct Introduction_To_Dynamic_Link_Library__Input
    {
    public:
    	void dyn_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input();
        void dyn_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input();
        void dyn_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input();
		void dyn_REG_boot4_INSTANTIATE_Introduction_To_Dynamic_Link_Library__Input();
    	double dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a();
    	double dyn_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b();
    	void dyn_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_a(double value);
    	void dyn_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_b(double value);
    	static void stat_CLASS_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input();
    	static void stat_CLASS_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input();
    	static void stat_CLASS_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input();
    	static void stat_REG_boot0_DECLAIRE_Introduction_To_Dynamic_Link_Library__Input();
    private:
        static double* stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_a;
		static double* stat_REG_Introduction_To_Dynamic_Link_Library__Input__value_b;
		static void stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input__value_a();
        static void stat_REG_boot1_DEFINE_Introduction_To_Dynamic_Link_Library__Input__value_b();
		static void stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input__value_a();
        static void stat_REG_boot2_SUBSTANTIATE_Introduction_To_Dynamic_Link_Library__Input__value_b();
		static void stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input__value_a();
        static void stat_REG_boot3_INITIALISE_Introduction_To_Dynamic_Link_Library__Input__value_b();
		static double* stat_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_a();
		static double* stat_REG_get_Introduction_To_Dynamic_Link_Library__Input__value_b();
        static void stat_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_a(double value);
        static void stat_REG_set_Introduction_To_Dynamic_Link_Library__Input__value_b(double value);
    };
}
#endif