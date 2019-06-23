// Generated by gencpp from file sensor_msgs/NavSatStatus.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_MESSAGE_NAVSATSTATUS_H
#define SENSOR_MSGS_MESSAGE_NAVSATSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sensor_msgs
{
template <class ContainerAllocator>
struct NavSatStatus_
{
  typedef NavSatStatus_<ContainerAllocator> Type;

  NavSatStatus_()
    : status(0)
    , service(0)  {
    }
  NavSatStatus_(const ContainerAllocator& _alloc)
    : status(0)
    , service(0)  {
    }



   typedef int8_t _status_type;
  _status_type status;

   typedef uint16_t _service_type;
  _service_type service;


    enum { STATUS_NO_FIX = -1 };
     enum { STATUS_FIX = 0 };
     enum { STATUS_SBAS_FIX = 1 };
     enum { STATUS_GBAS_FIX = 2 };
     enum { SERVICE_GPS = 1u };
     enum { SERVICE_GLONASS = 2u };
     enum { SERVICE_COMPASS = 4u };
     enum { SERVICE_GALILEO = 8u };
 

  typedef boost::shared_ptr< ::sensor_msgs::NavSatStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::NavSatStatus_<ContainerAllocator> const> ConstPtr;

}; // struct NavSatStatus_

typedef ::sensor_msgs::NavSatStatus_<std::allocator<void> > NavSatStatus;

typedef boost::shared_ptr< ::sensor_msgs::NavSatStatus > NavSatStatusPtr;
typedef boost::shared_ptr< ::sensor_msgs::NavSatStatus const> NavSatStatusConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::NavSatStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/usr/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/build/ros-common-msgs-b5ydaM/ros-common-msgs-1.12.3/geometry_msgs/msg'], 'sensor_msgs': ['/build/ros-common-msgs-b5ydaM/ros-common-msgs-1.12.3/sensor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::NavSatStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::NavSatStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::NavSatStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "331cdbddfa4bc96ffc3b9ad98900a54c";
  }

  static const char* value(const ::sensor_msgs::NavSatStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x331cdbddfa4bc96fULL;
  static const uint64_t static_value2 = 0xfc3b9ad98900a54cULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/NavSatStatus";
  }

  static const char* value(const ::sensor_msgs::NavSatStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Navigation Satellite fix status for any Global Navigation Satellite System\n\
\n\
# Whether to output an augmented fix is determined by both the fix\n\
# type and the last time differential corrections were received.  A\n\
# fix is valid when status >= STATUS_FIX.\n\
\n\
int8 STATUS_NO_FIX =  -1        # unable to fix position\n\
int8 STATUS_FIX =      0        # unaugmented fix\n\
int8 STATUS_SBAS_FIX = 1        # with satellite-based augmentation\n\
int8 STATUS_GBAS_FIX = 2        # with ground-based augmentation\n\
\n\
int8 status\n\
\n\
# Bits defining which Global Navigation Satellite System signals were\n\
# used by the receiver.\n\
\n\
uint16 SERVICE_GPS =     1\n\
uint16 SERVICE_GLONASS = 2\n\
uint16 SERVICE_COMPASS = 4      # includes BeiDou.\n\
uint16 SERVICE_GALILEO = 8\n\
\n\
uint16 service\n\
";
  }

  static const char* value(const ::sensor_msgs::NavSatStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.service);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct NavSatStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::NavSatStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::NavSatStatus_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int8_t>::stream(s, indent + "  ", v.status);
    s << indent << "service: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.service);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_NAVSATSTATUS_H
