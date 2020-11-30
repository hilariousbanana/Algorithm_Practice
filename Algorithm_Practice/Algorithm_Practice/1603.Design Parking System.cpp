class ParkingSystem
{
public:
    vector<int> count;
    ParkingSystem(int big, int medium, int small)
    {
        count = { big, medium, small };
    }

    bool addCar(int carType)
    {
        switch (carType)
        {
        case 1: //Big
            if (count[0] > 0)
            {
                count[0]--;
                return true;
            }
            break; //Med
        case 2:
            if (count[1] > 0)
            {
                count[1]--;
                return true;
            }
            break;
        case 3: //Small
            if (count[2] > 0)
            {
                count[2]--;
                return true;
            }
            break;
        }
        return false;
    }
};