using cor_cpp_dll;

class CorEigenCsMain
{
    public static void Run()
    {
        System.Console.WriteLine("CorCsConsoleApp");

        var v = new Vector3F(1, 2, 3);

        System.Console.WriteLine("v.get_x " + v.get_x().ToString());

    }
}


