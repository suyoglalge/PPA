import Marvellous.PPA;
import Marvellous.infosystem.Python;
import Marvellous.LB;

class Packagedemo //hyacha pudh public nhi lihla bcoz hyala koni baher nhi lihnar tya mule nhi lihl
{
    public static void main(String[] args) 
    {
        PPA pobj = new PPA();
        Python pyobj = new Python();
        LB lobj = new LB();

        pobj.PPA_fun();
        lobj.LB_fun();
        pyobj.PPA_fun();
    }
}
