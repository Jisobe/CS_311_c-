#include "Browser.h"
#include <string>
#include <iostream>

std::string Browser::findIpAddress(const std::string& address) {
	return "127.0.0.1";
}

std::string Browser::sendHttpRequest(const std::string& ip) {
	return "<html></html>";
}

void Browser::navigate(const std::string& address) {
	std::string ip = findIpAddress(address);
	auto result = sendHttpRequest(ip);
	std::cout << result;
}
