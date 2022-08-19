int len = s.length();
    do
    {
        if (s[len - 1] == 'I')

            num += 1;

        else if (s[len - 1] == 'V')
        {
            if (s[len - 2] == 'I')
            {
                num += 4;
                len--;
            }
            else
                num += 5;
        }

        else if (s[len - 1] == 'X')
        {
            if (s[len - 2] == 'I')
            {
                num += 9;
                len--;
            }
            else
                num += 10;
        }
        else if (s[len - 1] == 'L')
        {
            if (s[len - 2] == 'X')
            {
                num += 40;
                len--;
            }
            else
                num += 50;
        }
        else if (s[len - 1] == 'C')
        {
            if (s[len - 2] == 'X')
            {
                num += 90;
                len--;
            }
            else
                num += 100;
        }

        else if (s[len - 1] == 'D')
        {
            if (s[len - 2] == 'C')
            {
                num += 400;
                len--;
            }
            else
                num += 500;
        }
        else if (s[len - 1] == 'M')
        {
            if (s[len - 2] == 'C')
            {
                num += 900;
                len--;
            }
            else
                num += 1000;
        }

        len--;
    } while (len != 0);