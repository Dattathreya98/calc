int cl(int num1, int num2, int op)
{
    int result;
    result=0;

     switch(op)
    {
        case 1:
            result = num1 + num2;
            break;

        case 2:
            result = num1 - num2;
            break;

        case 3:
            result = num1 * num2;
            break;

        case 4:
            result = num1 / num2;
            break;

        default:
           return 0;
    }
    if (num2==0)
    {

    result= 0;
    }



    return result;

}


