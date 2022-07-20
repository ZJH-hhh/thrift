/**
 * Autogenerated by Thrift Compiler (0.16.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "match_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace match_service {


User::~User() noexcept {
}


void User::__set_id(const int32_t val) {
  this->id = val;
}

void User::__set_name(const std::string& val) {
  this->name = val;
}

void User::__set_sorce(const int32_t val) {
  this->sorce = val;
}
std::ostream& operator<<(std::ostream& out, const User& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t User::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->sorce);
          this->__isset.sorce = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t User::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("User");

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sorce", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->sorce);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(User &a, User &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.name, b.name);
  swap(a.sorce, b.sorce);
  swap(a.__isset, b.__isset);
}

User::User(const User& other0) {
  id = other0.id;
  name = other0.name;
  sorce = other0.sorce;
  __isset = other0.__isset;
}
User& User::operator=(const User& other1) {
  id = other1.id;
  name = other1.name;
  sorce = other1.sorce;
  __isset = other1.__isset;
  return *this;
}
void User::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "User(";
  out << "id=" << to_string(id);
  out << ", " << "name=" << to_string(name);
  out << ", " << "sorce=" << to_string(sorce);
  out << ")";
}

} // namespace
