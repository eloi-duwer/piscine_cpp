#ifndef _LOGGER_HPP_
# define _LOGGER_HPP_

#include <string>

class Logger {

typedef void (Logger::*logAction)(std::string);

	public:
		Logger( std::string logFile, std::string programName );
		void	log(std::string const & dest, std::string const & message);

		//Class constants
		static	std::string fileLog;
		static	std::string consoleLog;

	private:
		std::string 		_logFile;
		std::string		makeLogEntry(std::string message);
		logAction		_logActions[2];
		std::string		_logActionNames[2];
		std::string		_programName;
		void			logToConsole(std::string message);
		void			logToFile(std::string message);
		static	unsigned short _nbOfActionsPossible;

};


# endif
