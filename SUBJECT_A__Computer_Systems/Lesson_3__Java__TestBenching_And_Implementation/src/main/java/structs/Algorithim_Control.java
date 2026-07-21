package structs;
import structs.praise_sets.Algorithim_praise0;
import structs.praise_sets.Algorithim_praise1;
import structs.praise_sets.Algorithim_praise2;
import structs.praise_sets.Algorithim_praise3;
public class Algorithim_Control
{
    public Algorithim_Control()
    {

    }
    public void SelectSetAlgorithmsubset(Algorithim objAlgorithim, User_Algorithm objUserAlgorithim, int praiseId)
    {
        switch(praiseId)
        {
            case 0:
                Algorithim_praise0 inputPraise0 = (Algorithim_praise0)objAlgorithim.dyn_REG_get_Algorithmsubset();
                objAlgorithim.dyn_REG_set_Algorithmsubset(inputPraise0);
                break;

            case 1:
                Algorithim_praise1 inputPraise1 = (Algorithim_praise1)objAlgorithim.dyn_REG_get_Algorithmsubset();
                objAlgorithim.dyn_REG_set_Algorithmsubset(inputPraise1);
                break;

            case 2:
                Algorithim_praise2 inputPraise2 = (Algorithim_praise2)objAlgorithim.dyn_REG_get_Algorithmsubset();
                objAlgorithim.dyn_REG_set_Algorithmsubset(inputPraise2);
                break;

            case 3:
                Algorithim_praise3 inputPraise3 = (Algorithim_praise3)objAlgorithim.dyn_REG_get_Algorithmsubset();
                objAlgorithim.dyn_REG_set_Algorithmsubset(inputPraise3);
                break;
        }
    }
}
