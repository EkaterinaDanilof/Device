#include <iostream>
class Device
{
public:
	Device(int batteryLife):_batteryLife(batteryLife){}
	

	int ShowSpec(int batteryLife) {
		return double(batteryLife/60);
	}

private:
	int _batteryLife;
};

class Player : public Device
{
	int _totalTracks;

public:
	
	Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
	{
	}

	void ShowTotalTracks()
	{
		std::cout << _totalTracks << std::endl;
	}
};

int main()
{
	Player a(50,80);
	a.ShowTotalTracks();
}

