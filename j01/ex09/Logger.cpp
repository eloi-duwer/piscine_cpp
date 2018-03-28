#include <string>
#include <iostream>
#include <fstream>
#include <ctime>
#include <time.h>
#include <sstream>
#include "Logger.hpp"

Logger::Logger( std::string logFile, std::string programName) :
_logFile(logFile),
_programName(programName) {

	this->_logActions[0] = &Logger::logToFile;
	this->_logActions[1] = &Logger::logToConsole;
	this->_logActionNames[0] = Logger::fileLog;
	this->_logActionNames[1] = Logger::consoleLog;
	
};

void	Logger::logToConsole( std::string message ) {

	std::cout << message << std::endl;

}

void	Logger::logToFile( std::string message) {

	std::fstream file(this->_logFile.data(), std::fstream::app);
	file << message << std::endl;
	file.close();

}

std::string	Logger::makeLogEntry(std::string message) {

	time_t rawTime = time(NULL);	
	struct tm *current = localtime(&rawTime);
	std::ostringstream ret;
		ret << "[" << current->tm_year + 1900 << \
		current->tm_mon + 1 << current->tm_mday << \
		"_" << current->tm_hour + 1 << current->tm_min \
		<< current->tm_sec << "] Log from program " << this->_programName << ": " << message;
	return ret.str();

}

void	Logger::log(std::string const & dest, std::string const & message) {
	
	int i = 0;
	while (i < Logger::_nbOfActionsPossible) {
		if (this->_logActionNames[i].compare(dest) == 0) {
			(this->*_logActions[i])(this->makeLogEntry(message));
			return;
		}
		++i;
	}
	std::cout << "The destination " << dest << " is not supported yet" << std::endl;

}

std::string	Logger::fileLog = "something";
std::string	Logger::consoleLog = "weDontCare";
unsigned short	Logger::_nbOfActionsPossible = 2;
