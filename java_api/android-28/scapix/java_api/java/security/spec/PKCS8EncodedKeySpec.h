// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/security/spec/EncodedKeySpec.h>

#ifndef SCAPIX_JAVA_SECURITY_SPEC_PKCS8ENCODEDKEYSPEC_H
#define SCAPIX_JAVA_SECURITY_SPEC_PKCS8ENCODEDKEYSPEC_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace java::security::spec {

class PKCS8EncodedKeySpec : public object_base<SCAPIX_META_STRING("java/security/spec/PKCS8EncodedKeySpec"),
	java::security::spec::EncodedKeySpec>
{
public:

	static ref<PKCS8EncodedKeySpec> new_object(ref<link::java::array<jbyte>> encodedKey);
	ref<link::java::array<jbyte>> getEncoded();
	ref<java::lang::String> getFormat();

protected:

	PKCS8EncodedKeySpec(handle_type h) : base_(h) {}

};

} // namespace java::security::spec
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace java::security::spec {

inline ref<PKCS8EncodedKeySpec> PKCS8EncodedKeySpec::new_object(ref<link::java::array<jbyte>> encodedKey) { return base_::new_object(encodedKey); }
inline ref<link::java::array<jbyte>> PKCS8EncodedKeySpec::getEncoded() { return call_method<SCAPIX_META_STRING("getEncoded"), ref<link::java::array<jbyte>>>(); }
inline ref<java::lang::String> PKCS8EncodedKeySpec::getFormat() { return call_method<SCAPIX_META_STRING("getFormat"), ref<java::lang::String>>(); }

} // namespace java::security::spec
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_SECURITY_SPEC_PKCS8ENCODEDKEYSPEC_H
