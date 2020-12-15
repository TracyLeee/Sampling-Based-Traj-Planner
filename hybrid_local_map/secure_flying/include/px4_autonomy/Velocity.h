// Generated by gencpp from file px4_autonomy/Velocity.msg
// DO NOT EDIT!


#ifndef PX4_AUTONOMY_MESSAGE_VELOCITY_H
#define PX4_AUTONOMY_MESSAGE_VELOCITY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace px4_autonomy
{
template <class ContainerAllocator>
struct Velocity_
{
  typedef Velocity_<ContainerAllocator> Type;

  Velocity_()
    : header()
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , yaw_rate(0.0)  {
    }
  Velocity_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , yaw_rate(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _yaw_rate_type;
  _yaw_rate_type yaw_rate;





  typedef boost::shared_ptr< ::px4_autonomy::Velocity_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::px4_autonomy::Velocity_<ContainerAllocator> const> ConstPtr;

}; // struct Velocity_

typedef ::px4_autonomy::Velocity_<std::allocator<void> > Velocity;

typedef boost::shared_ptr< ::px4_autonomy::Velocity > VelocityPtr;
typedef boost::shared_ptr< ::px4_autonomy::Velocity const> VelocityConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::px4_autonomy::Velocity_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::px4_autonomy::Velocity_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace px4_autonomy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'px4_autonomy': ['/home/cc/catkin_ws/src/px4_autonomy/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::px4_autonomy::Velocity_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::px4_autonomy::Velocity_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::px4_autonomy::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::px4_autonomy::Velocity_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::px4_autonomy::Velocity_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::px4_autonomy::Velocity_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::px4_autonomy::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "04d21c832be9e4610ea2dfb84361c20a";
  }

  static const char* value(const ::px4_autonomy::Velocity_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x04d21c832be9e461ULL;
  static const uint64_t static_value2 = 0x0ea2dfb84361c20aULL;
};

template<class ContainerAllocator>
struct DataType< ::px4_autonomy::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "px4_autonomy/Velocity";
  }

  static const char* value(const ::px4_autonomy::Velocity_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::px4_autonomy::Velocity_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 yaw_rate\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::px4_autonomy::Velocity_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::px4_autonomy::Velocity_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.yaw_rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Velocity_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::px4_autonomy::Velocity_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::px4_autonomy::Velocity_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "yaw_rate: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PX4_AUTONOMY_MESSAGE_VELOCITY_H
