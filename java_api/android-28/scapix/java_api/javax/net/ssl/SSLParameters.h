// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVAX_NET_SSL_SSLPARAMETERS_H
#define SCAPIX_JAVAX_NET_SSL_SSLPARAMETERS_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::security { class AlgorithmConstraints; }
namespace java::util { class Collection; }
namespace java::util { class List; }

namespace javax::net::ssl {

class SSLParameters : public object_base<SCAPIX_META_STRING("javax/net/ssl/SSLParameters"),
	java::lang::Object>
{
public:

	static ref<SSLParameters> new_object();
	static ref<SSLParameters> new_object(ref<link::java::array<java::lang::String>> cipherSuites);
	static ref<SSLParameters> new_object(ref<link::java::array<java::lang::String>> cipherSuites, ref<link::java::array<java::lang::String>> protocols);
	ref<link::java::array<java::lang::String>> getCipherSuites();
	void setCipherSuites(ref<link::java::array<java::lang::String>> cipherSuites);
	ref<link::java::array<java::lang::String>> getProtocols();
	void setProtocols(ref<link::java::array<java::lang::String>> protocols);
	jboolean getWantClientAuth();
	void setWantClientAuth(jboolean wantClientAuth);
	jboolean getNeedClientAuth();
	void setNeedClientAuth(jboolean needClientAuth);
	ref<java::security::AlgorithmConstraints> getAlgorithmConstraints();
	void setAlgorithmConstraints(ref<java::security::AlgorithmConstraints> constraints);
	ref<java::lang::String> getEndpointIdentificationAlgorithm();
	void setEndpointIdentificationAlgorithm(ref<java::lang::String> algorithm);
	void setServerNames(ref<java::util::List> serverNames);
	ref<java::util::List> getServerNames();
	void setSNIMatchers(ref<java::util::Collection> matchers);
	ref<java::util::Collection> getSNIMatchers();
	void setUseCipherSuitesOrder(jboolean honorOrder);
	jboolean getUseCipherSuitesOrder();

protected:

	SSLParameters(handle_type h) : base_(h) {}

};

} // namespace javax::net::ssl
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmConstraints.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>

namespace scapix::java_api {
namespace javax::net::ssl {

inline ref<SSLParameters> SSLParameters::new_object() { return base_::new_object(); }
inline ref<SSLParameters> SSLParameters::new_object(ref<link::java::array<java::lang::String>> cipherSuites) { return base_::new_object(cipherSuites); }
inline ref<SSLParameters> SSLParameters::new_object(ref<link::java::array<java::lang::String>> cipherSuites, ref<link::java::array<java::lang::String>> protocols) { return base_::new_object(cipherSuites, protocols); }
inline ref<link::java::array<java::lang::String>> SSLParameters::getCipherSuites() { return call_method<SCAPIX_META_STRING("getCipherSuites"), ref<link::java::array<java::lang::String>>>(); }
inline void SSLParameters::setCipherSuites(ref<link::java::array<java::lang::String>> cipherSuites) { return call_method<SCAPIX_META_STRING("setCipherSuites"), void>(cipherSuites); }
inline ref<link::java::array<java::lang::String>> SSLParameters::getProtocols() { return call_method<SCAPIX_META_STRING("getProtocols"), ref<link::java::array<java::lang::String>>>(); }
inline void SSLParameters::setProtocols(ref<link::java::array<java::lang::String>> protocols) { return call_method<SCAPIX_META_STRING("setProtocols"), void>(protocols); }
inline jboolean SSLParameters::getWantClientAuth() { return call_method<SCAPIX_META_STRING("getWantClientAuth"), jboolean>(); }
inline void SSLParameters::setWantClientAuth(jboolean wantClientAuth) { return call_method<SCAPIX_META_STRING("setWantClientAuth"), void>(wantClientAuth); }
inline jboolean SSLParameters::getNeedClientAuth() { return call_method<SCAPIX_META_STRING("getNeedClientAuth"), jboolean>(); }
inline void SSLParameters::setNeedClientAuth(jboolean needClientAuth) { return call_method<SCAPIX_META_STRING("setNeedClientAuth"), void>(needClientAuth); }
inline ref<java::security::AlgorithmConstraints> SSLParameters::getAlgorithmConstraints() { return call_method<SCAPIX_META_STRING("getAlgorithmConstraints"), ref<java::security::AlgorithmConstraints>>(); }
inline void SSLParameters::setAlgorithmConstraints(ref<java::security::AlgorithmConstraints> constraints) { return call_method<SCAPIX_META_STRING("setAlgorithmConstraints"), void>(constraints); }
inline ref<java::lang::String> SSLParameters::getEndpointIdentificationAlgorithm() { return call_method<SCAPIX_META_STRING("getEndpointIdentificationAlgorithm"), ref<java::lang::String>>(); }
inline void SSLParameters::setEndpointIdentificationAlgorithm(ref<java::lang::String> algorithm) { return call_method<SCAPIX_META_STRING("setEndpointIdentificationAlgorithm"), void>(algorithm); }
inline void SSLParameters::setServerNames(ref<java::util::List> serverNames) { return call_method<SCAPIX_META_STRING("setServerNames"), void>(serverNames); }
inline ref<java::util::List> SSLParameters::getServerNames() { return call_method<SCAPIX_META_STRING("getServerNames"), ref<java::util::List>>(); }
inline void SSLParameters::setSNIMatchers(ref<java::util::Collection> matchers) { return call_method<SCAPIX_META_STRING("setSNIMatchers"), void>(matchers); }
inline ref<java::util::Collection> SSLParameters::getSNIMatchers() { return call_method<SCAPIX_META_STRING("getSNIMatchers"), ref<java::util::Collection>>(); }
inline void SSLParameters::setUseCipherSuitesOrder(jboolean honorOrder) { return call_method<SCAPIX_META_STRING("setUseCipherSuitesOrder"), void>(honorOrder); }
inline jboolean SSLParameters::getUseCipherSuitesOrder() { return call_method<SCAPIX_META_STRING("getUseCipherSuitesOrder"), jboolean>(); }

} // namespace javax::net::ssl
} // namespace scapix::java_api

#endif // SCAPIX_JAVAX_NET_SSL_SSLPARAMETERS_H
