#pragma once
#include <string>

class Browser
{
public:
	void navigate(const std::string& address);
private:
	std::string findIpAddress(const std::string& address);
	std::string sendHttpRequest(const std::string& ip);
};
