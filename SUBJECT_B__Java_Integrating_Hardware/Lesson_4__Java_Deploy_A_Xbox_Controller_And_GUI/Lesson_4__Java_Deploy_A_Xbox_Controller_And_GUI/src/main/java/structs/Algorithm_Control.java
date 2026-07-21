package structs;
import structs.praisesubsets.Algorithm_praise0;
import structs.praisesubsets.Algorithm_praise1;
import structs.praisesubsets.Algorithm_praise2;
import structs.praisesubsets.Algorithm_praise3;
public class Algorithm_Control 
{
    public Algorithm_Control()
    {
        //todo remove this class.
    }
    public void SelectSetAlgorithmSubset(Algorithm objAlgorithm, User_Algorithm objUserAlgorithm, int praiseId)
    {
        switch(praiseId)
        {
        case 0:
            Algorithm_praise0 inputPraise0 = (Algorithm_praise0)objAlgorithm.dyn_REG_get_AlgorithmSubset();
            objAlgorithm.dyn_REG_set_AlgorithmSubset(inputPraise0);
             break;

        case 1:
            Algorithm_praise1 inputPraise1 = (Algorithm_praise1)objAlgorithm.dyn_REG_get_AlgorithmSubset();
            objAlgorithm.dyn_REG_set_AlgorithmSubset(inputPraise1);
            break;

        case 2:
            Algorithm_praise2 inputPraise2 = (Algorithm_praise2)objAlgorithm.dyn_REG_get_AlgorithmSubset();
            objAlgorithm.dyn_REG_set_AlgorithmSubset(inputPraise2);
            break;

        case 3:
            Algorithm_praise3 inputPraise3 = (Algorithm_praise3)objAlgorithm.dyn_REG_get_AlgorithmSubset();
            objAlgorithm.dyn_REG_set_AlgorithmSubset(inputPraise3);
            break;
        }
    }
}
