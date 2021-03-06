// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_SQL_ARRAY_H
#define SCAPIX_JAVA_SQL_ARRAY_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::sql { class ResultSet; }
namespace java::util { class Map; }

namespace java::sql {

class Array : public object_base<SCAPIX_META_STRING("java/sql/Array"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getBaseTypeName();
	jint getBaseType();
	ref<java::lang::Object> getArray();
	ref<java::lang::Object> getArray(ref<java::util::Map> p1);
	ref<java::lang::Object> getArray(jlong p1, jint p2);
	ref<java::lang::Object> getArray(jlong p1, jint p2, ref<java::util::Map> p3);
	ref<java::sql::ResultSet> getResultSet();
	ref<java::sql::ResultSet> getResultSet(ref<java::util::Map> p1);
	ref<java::sql::ResultSet> getResultSet(jlong p1, jint p2);
	ref<java::sql::ResultSet> getResultSet(jlong p1, jint p2, ref<java::util::Map> p3);
	void free();

protected:

	Array(handle_type h) : base_(h) {}

};

} // namespace java::sql
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/sql/ResultSet.h>
#include <scapix/java_api/java/util/Map.h>

namespace scapix::java_api {
namespace java::sql {

inline ref<java::lang::String> Array::getBaseTypeName() { return call_method<SCAPIX_META_STRING("getBaseTypeName"), ref<java::lang::String>>(); }
inline jint Array::getBaseType() { return call_method<SCAPIX_META_STRING("getBaseType"), jint>(); }
inline ref<java::lang::Object> Array::getArray() { return call_method<SCAPIX_META_STRING("getArray"), ref<java::lang::Object>>(); }
inline ref<java::lang::Object> Array::getArray(ref<java::util::Map> p1) { return call_method<SCAPIX_META_STRING("getArray"), ref<java::lang::Object>>(p1); }
inline ref<java::lang::Object> Array::getArray(jlong p1, jint p2) { return call_method<SCAPIX_META_STRING("getArray"), ref<java::lang::Object>>(p1, p2); }
inline ref<java::lang::Object> Array::getArray(jlong p1, jint p2, ref<java::util::Map> p3) { return call_method<SCAPIX_META_STRING("getArray"), ref<java::lang::Object>>(p1, p2, p3); }
inline ref<java::sql::ResultSet> Array::getResultSet() { return call_method<SCAPIX_META_STRING("getResultSet"), ref<java::sql::ResultSet>>(); }
inline ref<java::sql::ResultSet> Array::getResultSet(ref<java::util::Map> p1) { return call_method<SCAPIX_META_STRING("getResultSet"), ref<java::sql::ResultSet>>(p1); }
inline ref<java::sql::ResultSet> Array::getResultSet(jlong p1, jint p2) { return call_method<SCAPIX_META_STRING("getResultSet"), ref<java::sql::ResultSet>>(p1, p2); }
inline ref<java::sql::ResultSet> Array::getResultSet(jlong p1, jint p2, ref<java::util::Map> p3) { return call_method<SCAPIX_META_STRING("getResultSet"), ref<java::sql::ResultSet>>(p1, p2, p3); }
inline void Array::free() { return call_method<SCAPIX_META_STRING("free"), void>(); }

} // namespace java::sql
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SQL_ARRAY_H
