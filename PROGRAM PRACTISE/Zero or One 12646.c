
#include<cstdio>
#include<string>

    main()
    {
        string str;
        while((gets(str))
        {
            switch (str)
            {
                case "0 0 0":
                    System.out.println("*");
                    break;
                case "1 1 1":
                    System.out.println("*");
                    break;
                case "0 1 1":
                    System.out.println("A");
                    break;
                case "1 0 0":
                    System.out.println("A");
                    break;
                case "1 0 1":
                    System.out.println("B");
                    break;
                case "0 1 0":
                    System.out.println("B");
                    break;
                case "1 1 0":
                    System.out.println("C");
                    break;
                case "0 0 1":
                    System.out.println("C");
                    break;
            }
        }
        return 0;
    }
