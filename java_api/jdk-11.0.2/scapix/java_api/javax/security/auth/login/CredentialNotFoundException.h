// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/javax/security/auth/login/CredentialException.h>

#ifndef SCAPIX_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALNOTFOUNDEXCEPTION_H
#define SCAPIX_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALNOTFOUNDEXCEPTION_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace javax::security::auth::login {

class CredentialNotFoundException : public object_base<SCAPIX_META_STRING("javax/security/auth/login/CredentialNotFoundException"),
	javax::security::auth::login::CredentialException>
{
public:

	static ref<CredentialNotFoundException> new_object();
	static ref<CredentialNotFoundException> new_object(ref<java::lang::String> msg);

protected:

	CredentialNotFoundException(handle_type h) : base_(h) {}

};

} // namespace javax::security::auth::login
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace javax::security::auth::login {

inline ref<CredentialNotFoundException> CredentialNotFoundException::new_object() { return base_::new_object(); }
inline ref<CredentialNotFoundException> CredentialNotFoundException::new_object(ref<java::lang::String> msg) { return base_::new_object(msg); }

} // namespace javax::security::auth::login
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_SECURITY_AUTH_LOGIN_CREDENTIALNOTFOUNDEXCEPTION_H
