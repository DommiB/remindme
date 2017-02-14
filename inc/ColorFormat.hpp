#ifndef COLORFORMAT_HPP
#define COLORFORMAT_HPP

#include <iostream>

namespace colorformat {
	inline std::ostream &reset(std::ostream &stream) { return stream << "\033[00m"; }
	
	inline std::ostream &bold(std::ostream &stream) { return stream << "\033[1m"; }
	
	inline std::ostream &dark(std::ostream &stream) { return stream << "\033[2m"; }
	
	inline std::ostream &underline(std::ostream &stream) { return stream << "\033[4m"; }
	
	inline std::ostream &blink(std::ostream &stream) { return stream << "\033[5m"; }
	
	inline std::ostream &reverse(std::ostream &stream) { return stream << "\033[7m"; }
	
	inline std::ostream &concealed(std::ostream &stream) { return stream << "\033[8m"; }
	
	inline std::ostream &grey(std::ostream &stream) { return stream << "\033[30m"; }
	
	inline std::ostream &red(std::ostream &stream) { return stream << "\033[31m"; }
	
	inline std::ostream &green(std::ostream &stream) { return stream << "\033[32m"; }
	
	inline std::ostream &yellow(std::ostream &stream) { return stream << "\033[33m"; }
	
	inline std::ostream &blue(std::ostream &stream) { return stream << "\033[34m"; }
	
	inline std::ostream &magenta(std::ostream &stream) { return stream << "\033[35m"; }
	
	inline std::ostream &cyan(std::ostream &stream) { return stream << "\033[36m"; }
	
	inline std::ostream &white(std::ostream &stream) { return stream << "\033[37m"; }
	
	inline std::ostream &on_grey(std::ostream &stream) { return stream << "\033[40m"; }
	
	inline std::ostream &on_red(std::ostream &stream) { return stream << "\033[41m"; }
	
	inline std::ostream &on_green(std::ostream &stream) { return stream << "\033[42m"; }
	
	inline std::ostream &on_yellow(std::ostream &stream) { return stream << "\033[43m"; }
	
	inline std::ostream &on_blue(std::ostream &stream) { return stream << "\033[44m"; }
	
	inline std::ostream &on_magenta(std::ostream &stream) { return stream << "\033[45m"; }
	
	inline std::ostream &on_cyan(std::ostream &stream) { return stream << "\033[46m"; }
	
	inline std::ostream &on_white(std::ostream &stream) { return stream << "\033[47m"; }
} // namespace colorformat

#endif // COLORFORMAT_HPP
