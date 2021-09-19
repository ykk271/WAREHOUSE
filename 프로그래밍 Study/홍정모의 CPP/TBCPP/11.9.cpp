#include <iostream>
using namespace std;

class USBDevice
{
private:
	long m_id;

public:
	USBDevice(long id) : m_id(id) {}

	long getID() { return m_id; }

	void plugAndPlay() {}
};

class NetWorkDevice
{
private:
	long m_id;

public:
	NetWorkDevice(long id) : m_id(id) {}

	long getID() { return m_id; }

	void newWorking() {}
};


class USBNetworkDevice : public USBDevice, public NetWorkDevice
{
public:
	USBNetworkDevice(long usb_id, long net_id)
		: USBDevice(usb_id), NetWorkDevice(net_id)
	{}
	

};

int main()
{
	USBNetworkDevice my_device(3.14, 6.022);

	my_device.plugAndPlay();
	my_device.newWorking();

	my_device.USBDevice::getID();
	my_device.NetWorkDevice::getID();


}
