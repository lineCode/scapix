// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_IO_OBJECTSTREAMCONSTANTS_H
#define SCAPIX_JAVA_IO_OBJECTSTREAMCONSTANTS_H

namespace scapix::java_api {

namespace java::io { class SerializablePermission; }

namespace java::io {

class ObjectStreamConstants : public object_base<SCAPIX_META_STRING("java/io/ObjectStreamConstants"),
	java::lang::Object>
{
public:

	static jshort STREAM_MAGIC_();
	static jshort STREAM_VERSION_();
	static jbyte TC_BASE_();
	static jbyte TC_NULL_();
	static jbyte TC_REFERENCE_();
	static jbyte TC_CLASSDESC_();
	static jbyte TC_OBJECT_();
	static jbyte TC_STRING_();
	static jbyte TC_ARRAY_();
	static jbyte TC_CLASS_();
	static jbyte TC_BLOCKDATA_();
	static jbyte TC_ENDBLOCKDATA_();
	static jbyte TC_RESET_();
	static jbyte TC_BLOCKDATALONG_();
	static jbyte TC_EXCEPTION_();
	static jbyte TC_LONGSTRING_();
	static jbyte TC_PROXYCLASSDESC_();
	static jbyte TC_ENUM_();
	static jbyte TC_MAX_();
	static jint baseWireHandle();
	static jbyte SC_WRITE_METHOD_();
	static jbyte SC_BLOCK_DATA_();
	static jbyte SC_SERIALIZABLE_();
	static jbyte SC_EXTERNALIZABLE_();
	static jbyte SC_ENUM_();
	static ref<java::io::SerializablePermission> SUBSTITUTION_PERMISSION_();
	static ref<java::io::SerializablePermission> SUBCLASS_IMPLEMENTATION_PERMISSION_();
	static ref<java::io::SerializablePermission> SERIAL_FILTER_PERMISSION_();
	static jint PROTOCOL_VERSION_1_();
	static jint PROTOCOL_VERSION_2_();


protected:

	ObjectStreamConstants(handle_type h) : base_(h) {}

};

} // namespace java::io
} // namespace scapix::java_api

#include <scapix/java_api/java/io/SerializablePermission.h>

namespace scapix::java_api {
namespace java::io {

inline jshort ObjectStreamConstants::STREAM_MAGIC_() { return get_static_field<SCAPIX_META_STRING("STREAM_MAGIC"), jshort>(); }
inline jshort ObjectStreamConstants::STREAM_VERSION_() { return get_static_field<SCAPIX_META_STRING("STREAM_VERSION"), jshort>(); }
inline jbyte ObjectStreamConstants::TC_BASE_() { return get_static_field<SCAPIX_META_STRING("TC_BASE"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_NULL_() { return get_static_field<SCAPIX_META_STRING("TC_NULL"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_REFERENCE_() { return get_static_field<SCAPIX_META_STRING("TC_REFERENCE"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_CLASSDESC_() { return get_static_field<SCAPIX_META_STRING("TC_CLASSDESC"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_OBJECT_() { return get_static_field<SCAPIX_META_STRING("TC_OBJECT"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_STRING_() { return get_static_field<SCAPIX_META_STRING("TC_STRING"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_ARRAY_() { return get_static_field<SCAPIX_META_STRING("TC_ARRAY"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_CLASS_() { return get_static_field<SCAPIX_META_STRING("TC_CLASS"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_BLOCKDATA_() { return get_static_field<SCAPIX_META_STRING("TC_BLOCKDATA"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_ENDBLOCKDATA_() { return get_static_field<SCAPIX_META_STRING("TC_ENDBLOCKDATA"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_RESET_() { return get_static_field<SCAPIX_META_STRING("TC_RESET"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_BLOCKDATALONG_() { return get_static_field<SCAPIX_META_STRING("TC_BLOCKDATALONG"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_EXCEPTION_() { return get_static_field<SCAPIX_META_STRING("TC_EXCEPTION"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_LONGSTRING_() { return get_static_field<SCAPIX_META_STRING("TC_LONGSTRING"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_PROXYCLASSDESC_() { return get_static_field<SCAPIX_META_STRING("TC_PROXYCLASSDESC"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_ENUM_() { return get_static_field<SCAPIX_META_STRING("TC_ENUM"), jbyte>(); }
inline jbyte ObjectStreamConstants::TC_MAX_() { return get_static_field<SCAPIX_META_STRING("TC_MAX"), jbyte>(); }
inline jint ObjectStreamConstants::baseWireHandle() { return get_static_field<SCAPIX_META_STRING("baseWireHandle"), jint>(); }
inline jbyte ObjectStreamConstants::SC_WRITE_METHOD_() { return get_static_field<SCAPIX_META_STRING("SC_WRITE_METHOD"), jbyte>(); }
inline jbyte ObjectStreamConstants::SC_BLOCK_DATA_() { return get_static_field<SCAPIX_META_STRING("SC_BLOCK_DATA"), jbyte>(); }
inline jbyte ObjectStreamConstants::SC_SERIALIZABLE_() { return get_static_field<SCAPIX_META_STRING("SC_SERIALIZABLE"), jbyte>(); }
inline jbyte ObjectStreamConstants::SC_EXTERNALIZABLE_() { return get_static_field<SCAPIX_META_STRING("SC_EXTERNALIZABLE"), jbyte>(); }
inline jbyte ObjectStreamConstants::SC_ENUM_() { return get_static_field<SCAPIX_META_STRING("SC_ENUM"), jbyte>(); }
inline ref<java::io::SerializablePermission> ObjectStreamConstants::SUBSTITUTION_PERMISSION_() { return get_static_field<SCAPIX_META_STRING("SUBSTITUTION_PERMISSION"), ref<java::io::SerializablePermission>>(); }
inline ref<java::io::SerializablePermission> ObjectStreamConstants::SUBCLASS_IMPLEMENTATION_PERMISSION_() { return get_static_field<SCAPIX_META_STRING("SUBCLASS_IMPLEMENTATION_PERMISSION"), ref<java::io::SerializablePermission>>(); }
inline ref<java::io::SerializablePermission> ObjectStreamConstants::SERIAL_FILTER_PERMISSION_() { return get_static_field<SCAPIX_META_STRING("SERIAL_FILTER_PERMISSION"), ref<java::io::SerializablePermission>>(); }
inline jint ObjectStreamConstants::PROTOCOL_VERSION_1_() { return get_static_field<SCAPIX_META_STRING("PROTOCOL_VERSION_1"), jint>(); }
inline jint ObjectStreamConstants::PROTOCOL_VERSION_2_() { return get_static_field<SCAPIX_META_STRING("PROTOCOL_VERSION_2"), jint>(); }

} // namespace java::io
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_IO_OBJECTSTREAMCONSTANTS_H
