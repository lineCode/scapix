// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_SOURCELOCATOR_H
#define SCAPIX_JAVAX_XML_TRANSFORM_SOURCELOCATOR_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::xml::transform {

class SourceLocator : public object_base<SCAPIX_META_STRING("javax/xml/transform/SourceLocator"),
	java::lang::Object>
{
public:

	ref<java::lang::String> getPublicId();
	ref<java::lang::String> getSystemId();
	jint getLineNumber();
	jint getColumnNumber();

protected:

	SourceLocator(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::xml::transform {

inline ref<java::lang::String> SourceLocator::getPublicId() { return call_method<SCAPIX_META_STRING("getPublicId"), ref<java::lang::String>>(); }
inline ref<java::lang::String> SourceLocator::getSystemId() { return call_method<SCAPIX_META_STRING("getSystemId"), ref<java::lang::String>>(); }
inline jint SourceLocator::getLineNumber() { return call_method<SCAPIX_META_STRING("getLineNumber"), jint>(); }
inline jint SourceLocator::getColumnNumber() { return call_method<SCAPIX_META_STRING("getColumnNumber"), jint>(); }

} // namespace javax::xml::transform
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_SOURCELOCATOR_H
