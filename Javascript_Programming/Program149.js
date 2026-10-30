function SumFactor(iNo)
{
    let iAns=0

    for(let icnt = 1; icnt<=(iNo/2) ; icnt++)
    {
        if(iNo%icnt==0)
        {
            iAns = iAns+icnt
        }
    }
    return iAns
}

function main()
{
    let iret=0;

    iret = SumFactor(12);

    console.log("Summestion of factor ",iret);
}

main()