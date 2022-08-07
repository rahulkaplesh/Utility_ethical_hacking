# - Find libpcap++
# Find libpcap library.
# Once done this will define
#
#  libpcap++_INCLUDE_DIR    - where to find lic++ header files, etc.
#  libpcap++_FOUND          - True if libpcap++ found.

if(NOT EXISTS "${libpcap++_INCLUDE_DIR}")
    find_path(libpcap++_INCLUDE_DIR NAMES crypt.h HINTS ${CMAKE_SOURCE_DIR}/external/libssh2)
endif()

# handle the QUIETLY and REQUIRED arguments and set libpcap++_FOUND to TRUE if
# all listed variables are TRUE
if(EXISTS "${libpcap++_INCLUDE_DIR}")
    include(FindPackageHandleStandardArgs)
    mark_as_advanced(libpcap++_INCLUDE_DIR)
endif()

if(EXISTS "${libpcap++_INCLUDE_DIR}")
    set(libpcap++_FOUND 1)
else()
    message(FATAL_ERROR "Unable to find libpcap++")
    set(libpcap++_FOUND 0)
endif()