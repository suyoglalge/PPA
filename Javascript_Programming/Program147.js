function DisplayFactor(iNo)
{
    for(let i = 1; i<=iNo ; i++)
    {
        if(iNo%i==0)
        {
            console.log(i)
        }
    }
}

function main()
{
    DisplayFactor(12);
}

main()