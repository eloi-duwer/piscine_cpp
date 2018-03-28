#include "Logger.hpp"

int main( int argc, char **argv ) {

	argc = 0;
	Logger logger("res.log", argv[0]);
	logger.log(Logger::fileLog, "Server compromised");
	logger.log(Logger::consoleLog, "Everything is broken!");
	logger.log(Logger::fileLog, "We're all gonna die!");
	logger.log("Wrong log type", "This message is not gonna be logged");
	return 0;

}
