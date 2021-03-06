#pragma once

#ifdef USE_VLD
// #include <vld.h>
#endif 
#include <signal.h>
#include <algorithm>
#include <numeric>
#include <future>
#include <thread>
#include <utility>
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <functional>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <mutex>
#include <tuple>
#include <memory>
#include <queue>
#include <boost/asio.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/serialization/access.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>
#include <boost/archive/basic_binary_oarchive.hpp>
#include <boost/archive/basic_binary_iarchive.hpp>

#include <boost/asio/io_service.hpp>

#include <boost/log/trivial.hpp>
#include <boost/log/sources/global_logger_storage.hpp>
#include <boost/log/sources/severity_channel_logger.hpp>
#include <boost/log/attributes/mutable_constant.hpp>
#include <boost/log/utility/manipulators/add_value.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/log/core.hpp>
#include <boost/log/common.hpp>
#include <boost/log/sinks.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/expressions/keyword.hpp>
#include <boost/log/attributes.hpp>
#include <boost/log/utility/exception_handler.hpp>
#include <boost/log/utility/setup/console.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/utility/setup/filter_parser.hpp>
#include <boost/log/utility/setup/formatter_parser.hpp>
#include <boost/log/utility/setup/from_stream.hpp>
#include <boost/log/utility/setup/settings.hpp>
#include <boost/log/sinks/sync_frontend.hpp>
#include <boost/log/sinks/text_ostream_backend.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <boost/tuple/tuple.hpp>

#include <string>
#include <fstream>
#include <string>
#include <memory>