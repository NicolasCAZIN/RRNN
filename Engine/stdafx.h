#pragma once
#ifdef USE_VLD
// #include <vld.h>
#endif 

#include <boost/tuple/tuple.hpp>
#include <boost/asio.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/set.hpp>
#include <boost/serialization/utility.hpp>
#include <boost/iostreams/filtering_streambuf.hpp>
#include <boost/iostreams/filter/bzip2.hpp>
#include <boost/iostreams/filter/zlib.hpp>
#include <boost/iostreams/filter/gzip.hpp>
#include <boost/iostreams/copy.hpp>
#include <boost/interprocess/managed_shared_memory.hpp>
#include <boost/interprocess/windows_shared_memory.hpp>
#include <boost/interprocess/managed_windows_shared_memory.hpp>
#include <boost/interprocess/containers/set.hpp>
#include <boost/interprocess/containers/vector.hpp>
#include <boost/interprocess/containers/map.hpp>
#include <boost/interprocess/allocators/allocator.hpp>
#include <vector>
#include <memory>
#include <functional>
#include <list>
#include <string>
#include <sstream>
#include <iostream>
#include <mutex>
#include <thread>
#include <queue>
#include <set>
#include <future>
#include <map>
#include <ctime>
#include <boost/optional.hpp>
#include <boost/crc.hpp>

#include <windows.h>