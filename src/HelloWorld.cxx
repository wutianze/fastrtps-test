// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file HelloWorld.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "HelloWorld.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

HelloWorld::HelloWorld()
{
    // m_index com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6ddf90b0
    m_index = 0;
    // m_timestamp com.eprosima.idl.parser.typecode.PrimitiveTypeCode@57536d79
    m_timestamp = 0;
    // m_message com.eprosima.idl.parser.typecode.StringTypeCode@3b0143d3
    m_message ="";

}

HelloWorld::~HelloWorld()
{



}

HelloWorld::HelloWorld(const HelloWorld &x)
{
    m_index = x.m_index;
    m_timestamp = x.m_timestamp;
    m_message = x.m_message;
}

HelloWorld::HelloWorld(HelloWorld &&x)
{
    m_index = x.m_index;
    m_timestamp = x.m_timestamp;
    m_message = std::move(x.m_message);
}

HelloWorld& HelloWorld::operator=(const HelloWorld &x)
{

    m_index = x.m_index;
    m_timestamp = x.m_timestamp;
    m_message = x.m_message;

    return *this;
}

HelloWorld& HelloWorld::operator=(HelloWorld &&x)
{

    m_index = x.m_index;
    m_timestamp = x.m_timestamp;
    m_message = std::move(x.m_message);

    return *this;
}

size_t HelloWorld::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;


    return current_alignment - initial_alignment;
}

size_t HelloWorld::getCdrSerializedSize(const HelloWorld& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.message().size() + 1;


    return current_alignment - initial_alignment;
}

void HelloWorld::serialize(eprosima::fastcdr::Cdr &scdr) const
{

    scdr << m_index;
    scdr << m_timestamp;
    scdr << m_message;
}

void HelloWorld::deserialize(eprosima::fastcdr::Cdr &dcdr)
{

    dcdr >> m_index;
    dcdr >> m_timestamp;
    dcdr >> m_message;
}

/*!
 * @brief This function sets a value in member index
 * @param _index New value for member index
 */
void HelloWorld::index(uint64_t _index)
{
m_index = _index;
}

/*!
 * @brief This function returns the value of member index
 * @return Value of member index
 */
uint64_t HelloWorld::index() const
{
    return m_index;
}

/*!
 * @brief This function returns a reference to member index
 * @return Reference to member index
 */
uint64_t& HelloWorld::index()
{
    return m_index;
}

/*!
 * @brief This function sets a value in member timestamp
 * @param _timestamp New value for member timestamp
 */
void HelloWorld::timestamp(uint64_t _timestamp)
{
m_timestamp = _timestamp;
}

/*!
 * @brief This function returns the value of member timestamp
 * @return Value of member timestamp
 */
uint64_t HelloWorld::timestamp() const
{
    return m_timestamp;
}

/*!
 * @brief This function returns a reference to member timestamp
 * @return Reference to member timestamp
 */
uint64_t& HelloWorld::timestamp()
{
    return m_timestamp;
}

/*!
 * @brief This function copies the value in member message
 * @param _message New value to be copied in member message
 */
void HelloWorld::message(const std::string &_message)
{
m_message = _message;
}

/*!
 * @brief This function moves the value in member message
 * @param _message New value to be moved in member message
 */
void HelloWorld::message(std::string &&_message)
{
m_message = std::move(_message);
}

/*!
 * @brief This function returns a constant reference to member message
 * @return Constant reference to member message
 */
const std::string& HelloWorld::message() const
{
    return m_message;
}

/*!
 * @brief This function returns a reference to member message
 * @return Reference to member message
 */
std::string& HelloWorld::message()
{
    return m_message;
}

size_t HelloWorld::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
    size_t current_align = current_alignment;






    return current_align;
}

bool HelloWorld::isKeyDefined()
{
   return false;
}

void HelloWorld::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
    (void) scdr;
     
     
     
}
