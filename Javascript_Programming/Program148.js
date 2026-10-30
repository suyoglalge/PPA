function DisplayFactor(iNo)
{
    console.log("Factors of:",iNo)

    for(let icnt = 1; icnt<=(iNo/2) ; icnt++)
    {
        if(iNo%icnt==0)
        {
            console.log(icnt)
        }
    }
}

function main()
{
    DisplayFactor(12);
}

main()