// An example of indirect recursion

void indirectRecFun1()
{
    // Some code...
    indirectRecFun2();
}

void indirectRecFun2()
{
    // Some code...
    indirectRecFun3();
}

void indirectRecFun3()
{
    // Some code...
    indirectRecFun1();
}
