// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_ORG_W3C_DOM_LS_LSEXCEPTION_H
#define SCAPIX_ORG_W3C_DOM_LS_LSEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace org::w3c::dom::ls {

class LSException : public object_base<SCAPIX_META_STRING("org/w3c/dom/ls/LSException"),
	java::lang::RuntimeException>
{
public:

	static jshort PARSE_ERR_();
	static jshort SERIALIZE_ERR_();
	jshort code();
	void code(jshort);

	static ref<LSException> new_object(jshort code, ref<java::lang::String> message);

protected:

	LSException(handle_type h) : base_(h) {}

};

} // namespace org::w3c::dom::ls
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace org::w3c::dom::ls {

inline jshort LSException::PARSE_ERR_() { return get_static_field<SCAPIX_META_STRING("PARSE_ERR"), jshort>(); }
inline jshort LSException::SERIALIZE_ERR_() { return get_static_field<SCAPIX_META_STRING("SERIALIZE_ERR"), jshort>(); }
inline jshort LSException::code() { return get_field<SCAPIX_META_STRING("code"), jshort>(); }
inline void LSException::code(jshort v) { set_field<SCAPIX_META_STRING("code"), jshort>(v); }
inline ref<LSException> LSException::new_object(jshort code, ref<java::lang::String> message) { return base_::new_object(code, message); }

} // namespace org::w3c::dom::ls
} // namespace scapix::java_api

#endif // SCAPIX_ORG_W3C_DOM_LS_LSEXCEPTION_H
