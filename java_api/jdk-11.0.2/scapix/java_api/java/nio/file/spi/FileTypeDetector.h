// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_NIO_FILE_SPI_FILETYPEDETECTOR_H
#define SCAPIX_JAVA_NIO_FILE_SPI_FILETYPEDETECTOR_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::nio::file { class Path; }

namespace java::nio::file::spi {

class FileTypeDetector : public object_base<SCAPIX_META_STRING("java/nio/file/spi/FileTypeDetector"),
	java::lang::Object>
{
public:

	ref<java::lang::String> probeContentType(ref<java::nio::file::Path> p1);

protected:

	FileTypeDetector(handle_type h) : base_(h) {}

};

} // namespace java::nio::file::spi
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/file/Path.h>

namespace scapix::java_api {
namespace java::nio::file::spi {

inline ref<java::lang::String> FileTypeDetector::probeContentType(ref<java::nio::file::Path> p1) { return call_method<SCAPIX_META_STRING("probeContentType"), ref<java::lang::String>>(p1); }

} // namespace java::nio::file::spi
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_NIO_FILE_SPI_FILETYPEDETECTOR_H
