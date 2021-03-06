// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_TEXT_FORMAT_H
#define SCAPIX_JAVA_TEXT_FORMAT_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class StringBuffer; }
namespace java::text { class AttributedCharacterIterator; }
namespace java::text { class FieldPosition; }
namespace java::text { class ParsePosition; }
namespace java::text { class Format_Field; }

namespace java::text {

class Format : public object_base<SCAPIX_META_STRING("java/text/Format"),
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	using Field = Format_Field;

	ref<java::lang::String> format(ref<java::lang::Object> obj);
	ref<java::lang::StringBuffer> format(ref<java::lang::Object> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::text::AttributedCharacterIterator> formatToCharacterIterator(ref<java::lang::Object> obj);
	ref<java::lang::Object> parseObject(ref<java::lang::String> p1, ref<java::text::ParsePosition> p2);
	ref<java::lang::Object> parseObject(ref<java::lang::String> source);
	ref<java::lang::Object> clone();

protected:

	Format(handle_type h) : base_(h) {}

};

} // namespace java::text
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>

namespace scapix::java_api {
namespace java::text {

inline ref<java::lang::String> Format::format(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(obj); }
inline ref<java::lang::StringBuffer> Format::format(ref<java::lang::Object> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::text::AttributedCharacterIterator> Format::formatToCharacterIterator(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("formatToCharacterIterator"), ref<java::text::AttributedCharacterIterator>>(obj); }
inline ref<java::lang::Object> Format::parseObject(ref<java::lang::String> p1, ref<java::text::ParsePosition> p2) { return call_method<SCAPIX_META_STRING("parseObject"), ref<java::lang::Object>>(p1, p2); }
inline ref<java::lang::Object> Format::parseObject(ref<java::lang::String> source) { return call_method<SCAPIX_META_STRING("parseObject"), ref<java::lang::Object>>(source); }
inline ref<java::lang::Object> Format::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }

} // namespace java::text
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_TEXT_FORMAT_H
