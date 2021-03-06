// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_H
#define SCAPIX_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::xml::parsers {

class ParserConfigurationException : public object_base<SCAPIX_META_STRING("javax/xml/parsers/ParserConfigurationException"),
	java::lang::Exception>
{
public:

	static ref<ParserConfigurationException> new_object();
	static ref<ParserConfigurationException> new_object(ref<java::lang::String> msg);

protected:

	ParserConfigurationException(handle_type h) : base_(h) {}

};

} // namespace javax::xml::parsers
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::xml::parsers {

inline ref<ParserConfigurationException> ParserConfigurationException::new_object() { return base_::new_object(); }
inline ref<ParserConfigurationException> ParserConfigurationException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }

} // namespace javax::xml::parsers
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION_H
