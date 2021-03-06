// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_TEXT_PARSEPOSITION_H
#define SCAPIX_JAVA_TEXT_PARSEPOSITION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::text {

class ParsePosition : public object_base<SCAPIX_META_STRING("java/text/ParsePosition"),
	java::lang::Object>
{
public:

	static ref<ParsePosition> new_object(jint index);
	jint getIndex();
	void setIndex(jint index);
	void setErrorIndex(jint ei);
	jint getErrorIndex();
	jboolean equals(ref<java::lang::Object> obj);
	jint hashCode();
	ref<java::lang::String> toString();

protected:

	ParsePosition(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::text {

inline ref<ParsePosition> ParsePosition::new_object(jint index) { return base_::new_object(index); }
inline jint ParsePosition::getIndex() { return call_method<SCAPIX_META_STRING("getIndex"), jint>(); }
inline void ParsePosition::setIndex(jint index) { return call_method<SCAPIX_META_STRING("setIndex"), void>(index); }
inline void ParsePosition::setErrorIndex(jint ei) { return call_method<SCAPIX_META_STRING("setErrorIndex"), void>(ei); }
inline jint ParsePosition::getErrorIndex() { return call_method<SCAPIX_META_STRING("getErrorIndex"), jint>(); }
inline jboolean ParsePosition::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline jint ParsePosition::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> ParsePosition::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_PARSEPOSITION_H
