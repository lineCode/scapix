// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMEREXCEPTION_H
#define SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMEREXCEPTION_H

namespace scapix::java_api {

namespace java::io { class PrintStream; }
namespace java::io { class PrintWriter; }
namespace java::lang { class String; }
namespace java::lang { class Throwable; }
namespace javax::xml::transform { class SourceLocator; }

namespace javax::xml::transform {

class TransformerException : public object_base<SCAPIX_META_STRING("javax/xml/transform/TransformerException"),
	java::lang::Exception>
{
public:

	static ref<TransformerException> new_object(ref<java::lang::String> message);
	static ref<TransformerException> new_object(ref<java::lang::Throwable> e);
	static ref<TransformerException> new_object(ref<java::lang::String> message, ref<java::lang::Throwable> e);
	static ref<TransformerException> new_object(ref<java::lang::String> message, ref<javax::xml::transform::SourceLocator> locator);
	static ref<TransformerException> new_object(ref<java::lang::String> message, ref<javax::xml::transform::SourceLocator> locator, ref<java::lang::Throwable> e);
	ref<javax::xml::transform::SourceLocator> getLocator();
	void setLocator(ref<javax::xml::transform::SourceLocator> location);
	ref<java::lang::Throwable> getException();
	ref<java::lang::Throwable> getCause();
	ref<java::lang::Throwable> initCause(ref<java::lang::Throwable> cause);
	ref<java::lang::String> getMessageAndLocation();
	ref<java::lang::String> getLocationAsString();
	void printStackTrace();
	void printStackTrace(ref<java::io::PrintStream> s);
	void printStackTrace(ref<java::io::PrintWriter> s);

protected:

	TransformerException(handle_type h) : base_(h) {}

};

} // namespace javax::xml::transform
} // namespace scapix::java_api

#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/javax/xml/transform/SourceLocator.h>

namespace scapix::java_api {
namespace javax::xml::transform {

inline ref<TransformerException> TransformerException::new_object(ref<java::lang::String> message) { return base_::new_object(message); }
inline ref<TransformerException> TransformerException::new_object(ref<java::lang::Throwable> e) { return base_::new_object(e); }
inline ref<TransformerException> TransformerException::new_object(ref<java::lang::String> message, ref<java::lang::Throwable> e) { return base_::new_object(message, e); }
inline ref<TransformerException> TransformerException::new_object(ref<java::lang::String> message, ref<javax::xml::transform::SourceLocator> locator) { return base_::new_object(message, locator); }
inline ref<TransformerException> TransformerException::new_object(ref<java::lang::String> message, ref<javax::xml::transform::SourceLocator> locator, ref<java::lang::Throwable> e) { return base_::new_object(message, locator, e); }
inline ref<javax::xml::transform::SourceLocator> TransformerException::getLocator() { return call_method<SCAPIX_META_STRING("getLocator"), ref<javax::xml::transform::SourceLocator>>(); }
inline void TransformerException::setLocator(ref<javax::xml::transform::SourceLocator> location) { return call_method<SCAPIX_META_STRING("setLocator"), void>(location); }
inline ref<java::lang::Throwable> TransformerException::getException() { return call_method<SCAPIX_META_STRING("getException"), ref<java::lang::Throwable>>(); }
inline ref<java::lang::Throwable> TransformerException::getCause() { return call_method<SCAPIX_META_STRING("getCause"), ref<java::lang::Throwable>>(); }
inline ref<java::lang::Throwable> TransformerException::initCause(ref<java::lang::Throwable> cause) { return call_method<SCAPIX_META_STRING("initCause"), ref<java::lang::Throwable>>(cause); }
inline ref<java::lang::String> TransformerException::getMessageAndLocation() { return call_method<SCAPIX_META_STRING("getMessageAndLocation"), ref<java::lang::String>>(); }
inline ref<java::lang::String> TransformerException::getLocationAsString() { return call_method<SCAPIX_META_STRING("getLocationAsString"), ref<java::lang::String>>(); }
inline void TransformerException::printStackTrace() { return call_method<SCAPIX_META_STRING("printStackTrace"), void>(); }
inline void TransformerException::printStackTrace(ref<java::io::PrintStream> s) { return call_method<SCAPIX_META_STRING("printStackTrace"), void>(s); }
inline void TransformerException::printStackTrace(ref<java::io::PrintWriter> s) { return call_method<SCAPIX_META_STRING("printStackTrace"), void>(s); }

} // namespace javax::xml::transform
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_TRANSFORM_TRANSFORMEREXCEPTION_H
