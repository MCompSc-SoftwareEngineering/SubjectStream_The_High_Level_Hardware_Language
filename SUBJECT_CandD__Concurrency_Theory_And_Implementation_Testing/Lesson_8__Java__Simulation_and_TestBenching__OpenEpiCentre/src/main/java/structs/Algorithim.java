package structs;
import engine.Framework;
import structs.praise_sets.Algorithim_praise0;
import structs.praise_sets.Algorithim_praise1;
import structs.praise_sets.Algorithim_praise2;
import structs.praise_sets.Algorithim_praise3;
public class Algorithim
{
    private static Algorithim_Control _stat_CLASS_Algorithim_Control;
    private static Object _stat_REG_Algorithmsubset;
    // public.
    public Algorithim()
    {
        System.out.printf("entered STRUCT_CLASS Algorithim()%n");
        stat_CLASS_boot0_DECLAIRE_Algorithim();
        stat_CLASS_boot1_DEFINE_Algorithim();
        stat_CLASS_boot3_INITIALISE_Algorithim();
        stat_REG_boot0_DECLAIRE_Algorithim();
        System.out.printf("exiting STRUCT_CLASS Algorithim()%n");
    }
    public Algorithim_Control dyn_CLASS_get_Algorithim_Control()
    {
        return stat_CLASS_get_Algorithim_Control();
    }
    public void dyn_REG_boot1_DEFINE_Algorithim()
    {
        System.out.printf("entered dyn_REG_boot1_DEFINE_Algorithim().%n");

        System.out.printf("exiting dyn_REG_boot1_DEFINE_Algorithim().%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Algorithim()
    {
        System.out.printf("entered dyn_REG_boot2_SUBSTANTIATE_Algorithim().%n");
        stat_REG_boot2_SUBSTANTIATE_Algorithmsubset();
        System.out.printf("exiting dyn_REG_boot2_SUBSTANTIATE_Algorithim().%n");
    }
    public void dyn_REG_boot3_INITIALISE_Algorithim(User_Algorithm objUserAlgorithim)
    {
        System.out.printf("entered dyn_REG_boot3_INITIALISE_Algorithim().%n");
        stat_REG_boot3_INITIALISE_Algorithmsubset(objUserAlgorithim);
        System.out.printf("exiting dyn_REG_boot3_INITIALISE_Algorithim().%n");
    }
    public void dyn_REG_boot4_INSTANTIATE_Algorithim()
    {
        System.out.printf("entered dyn_REG_boot4_INSTANTIATE_Algorithim().%n");

        System.out.printf("exiting dyn_REG_boot4_INSTANTIATE_Algorithim().%n");
    }
    public Object dyn_REG_get_Algorithmsubset()
    {
        return stat_REG_get_Algorithmsubset();
    }
    public void dyn_REG_set_Algorithmsubset(Algorithim_praise0 objAlgorithimPraise0)
    {
        stat_REG_set_Algorithmsubset((Object)objAlgorithimPraise0);
    }
    public void dyn_REG_set_Algorithmsubset(Algorithim_praise1 objAlgorithimPraise1)
    {
        stat_REG_set_Algorithmsubset((Object)objAlgorithimPraise1);
    }
    public void dyn_REG_set_Algorithmsubset(Algorithim_praise2 objAlgorithimPraise2)
    {
        stat_REG_set_Algorithmsubset((Object)objAlgorithimPraise2);
    }
    public void dyn_REG_set_Algorithmsubset(Algorithim_praise3 objAlgorithimPraise3)
    {
        stat_REG_set_Algorithmsubset((Object)objAlgorithimPraise3);
    }
    // private.
    private static void stat_CLASS_boot0_DECLAIRE_Algorithim()
    {
        System.out.printf("entered stat_CLASS_boot0_DECLAIRE_Algorithim().%n");

        System.out.printf("exiting stat_CLASS_boot0_DECLAIRE_Algorithim().%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Algorithim()
    {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Algorithim().%n");
        stat_CLASS_boot1_DEFINE_Algorithim_Control();
        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Algorithim().%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Algorithim_Control()
    {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Algorithim_Control().%n");
        _stat_CLASS_Algorithim_Control = null;
        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Algorithim_Control().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Algorithim()
    {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Algorithim().%n");
        stat_CLASS_boot3_INITIALISE_Algorithim_Control();
        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Algorithim().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Algorithim_Control()
    {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Algorithim_Control().%n");
        _stat_CLASS_Algorithim_Control = new Algorithim_Control();
        while(stat_CLASS_get_Algorithim_Control() == null) { }
        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Algorithim_Control().%n");
    }
    private static Algorithim_Control stat_CLASS_get_Algorithim_Control()
    {
        return _stat_CLASS_Algorithim_Control;
    }
    private static void stat_REG_boot0_DECLAIRE_Algorithim()
    {
        System.out.printf("entered stat_REG_boot0_DECLAIRE_Algorithim().%n");

        System.out.printf("exiting stat_REG_boot0_DECLAIRE_Algorithim().%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_Algorithmsubset()
    {
        System.out.printf("entered stat_REG_boot2_SUBSTANTIATE_Algorithmsubset().%n");
        _stat_REG_Algorithmsubset = new Object();
        while(stat_REG_get_Algorithmsubset() == null) { }
        System.out.printf("exiting stat_REG_boot2_SUBSTANTIATE_Algorithmsubset().%n");
    }
    private static void stat_REG_boot3_INITIALISE_Algorithmsubset(User_Algorithm objUserAlgorithim)
    {
        System.out.printf("entered stat_REG_boot3_INITIALISE_Algorithmsubset().%n");
        _stat_REG_Algorithmsubset = objUserAlgorithim.dyn_REG_get_Item_On_List_Of_Algorithmsubsets(0);
        System.out.printf("exiting stat_REG_boot3_INITIALISE_Algorithmsubset().%n");
    }
    private static Object stat_REG_get_Algorithmsubset()
    {
        return _stat_REG_Algorithmsubset;
    }
    private static void stat_REG_set_Algorithmsubset(Object objSubset)
    {
        _stat_REG_Algorithmsubset = objSubset;
    }
}