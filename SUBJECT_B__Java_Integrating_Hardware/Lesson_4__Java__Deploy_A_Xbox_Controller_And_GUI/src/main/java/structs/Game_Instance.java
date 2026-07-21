package structs;
import engine.Framework;
import structs.peripheralSamples.XboxController;
public class Game_Instance {
    private static XboxController[] _stat_REG_Array_Of_xboxController;
    public Game_Instance()
    {
        stat_CLASS_boot0_DECLAIRE_Game_Instance();
        stat_REG_boot0_DECLAIRE_Game_Instance();
    }
    public void dyn_APP_saveSampleOfController(char controllerId, XboxController sample) {
        stat_REG_get_Array_Of_xboxController()[controllerId] = sample;
    }
    public void dyn_CLASS_boot1_DEFINE_Game_Instance()
    {
        System.out.printf("entered dyn_CLASS_boot1_DEFINE_Game_Instance().%n");
        stat_CLASS_boot1_DEFINE_Game_Instance();
        System.out.printf("exiting dyn_CLASS_boot1_DEFINE_Game_Instance().%n");
    }
    public void dyn_CLASS_boot3_INITIALISE_Game_Instance()
    {
        System.out.printf("entered dyn_CLASS_boot3_INITIALISE_Game_Instance().%n");
        stat_CLASS_boot3_INITIALISE_Game_Instance();
        System.out.printf("exiting dyn_CLASS_boot3_INITIALISE_Game_Instance().%n");
    }
    public void dyn_REG_boot1_DEFINE_Game_Instance(Framework obj) {
        System.out.printf("entered dyn_REG_boot1_DEFINE_Game_Instance().%n");
        stat_REG_boot1_DEFINE_xboxController();
        System.out.printf("exiting dyn_REG_boot1_DEFINE_Game_Instance().%n");
    }
    public void dyn_REG_boot2_SUBSTANTIATE_Game_Instance(Framework obj) {
        System.out.printf("entered dyn_REG_boot2_SUBSTANTIATE_Game_Instance().%n");
        stat_REG_boot2_SUBSTANTIATE_xboxController();
        System.out.printf("exiting dyn_REG_boot2_SUBSTANTIATE_Game_Instance().%n");
    }
    public void dyn_REG_boot3_INITIALISE_Game_Instance(Framework obj, XboxController controller) {
        System.out.printf("entered dyn_REG_boot3_INITIALISE_Game_Instance().%n");
        stat_REG_boot3_INITIALISE_xboxController(controller);
        System.out.printf("exiting dyn_REG_boot3_INITIALISE_Game_Instance().%n");
    }
    public void dyn_REG_boot4_INSTANTIATE_Game_Instance(Framework obj) {
        System.out.printf("entered dyn_REG_boot4_INSTANTIATE_Game_Instance().%n");

        System.out.printf("exiting dyn_REG_boot4_INSTANTIATE_Game_Instance().%n");
    }
    public XboxController dyn_REG_get_Item_On_Array_Of_xboxController(char controllerId) {
        return stat_REG_get_Item_On_Array_Of_xboxController(controllerId);
    }
// private.
    private static void stat_CLASS_boot0_DECLAIRE_Game_Instance()
    {
        System.out.printf("entered stat_CLASS_boot0_DECLAIRE_Game_Instance().%n");

        System.out.printf("exiting stat_CLASS_boot0_DECLAIRE_Game_Instance().%n");
    }
    private static void stat_CLASS_boot1_DEFINE_Game_Instance()
    {
        System.out.printf("entered stat_CLASS_boot1_DEFINE_Game_Instance().%n");

        System.out.printf("exiting stat_CLASS_boot1_DEFINE_Game_Instance().%n");
    }
    private static void stat_CLASS_boot3_INITIALISE_Game_Instance()
    {
        System.out.printf("entered stat_CLASS_boot3_INITIALISE_Game_Instance().%n");

        System.out.printf("exiting stat_CLASS_boot3_INITIALISE_Game_Instance().%n");
    }
    private static void stat_REG_boot0_DECLAIRE_Game_Instance()
    {
        System.out.printf("entered stat_REG_boot0_DECLAIRE_xboxController().%n");

        System.out.printf("exiting stat_REG_boot0_DECLAIRE_xboxController().%n");
    }
    private static void stat_REG_boot1_DEFINE_xboxController()
    {
        System.out.printf("entered stat_REG_boot1_DEFINE_xboxController().%n");
        _stat_REG_Array_Of_xboxController = null;
        System.out.printf("exiting stat_REG_boot1_DEFINE_xboxController().%n");
    }
    private static void stat_REG_boot2_SUBSTANTIATE_xboxController()
    {
        System.out.printf("entered stat_REG_boot2_SUBSTANTIATE_xboxController().%n");
        _stat_REG_Array_Of_xboxController = new XboxController[1];//todo make 4 detect and save
        while(stat_REG_get_Array_Of_xboxController() == null) { }
        System.out.printf("exiting stat_REG_boot2_SUBSTANTIATE_xboxController().%n");
    }
    private static void stat_REG_boot3_INITIALISE_xboxController(XboxController controller)
    {
        System.out.printf("entered stat_REG_boot3_INITIALISE_xboxController().%n");
        _stat_REG_Array_Of_xboxController[0] = controller;
        System.out.printf("exiting stat_REG_boot3_INITIALISE_xboxController().%n");
    }
    private static XboxController[] stat_REG_get_Array_Of_xboxController()
    {
        return _stat_REG_Array_Of_xboxController;
    }
    public XboxController stat_REG_get_Item_On_Array_Of_xboxController(char controllerId) {
        return _stat_REG_Array_Of_xboxController[controllerId];
    }
}