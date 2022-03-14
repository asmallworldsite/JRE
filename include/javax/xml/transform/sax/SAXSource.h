//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/sax/SAXSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformSaxSAXSource")
#ifdef RESTRICT_JavaxXmlTransformSaxSAXSource
#define INCLUDE_ALL_JavaxXmlTransformSaxSAXSource 0
#else
#define INCLUDE_ALL_JavaxXmlTransformSaxSAXSource 1
#endif
#undef RESTRICT_JavaxXmlTransformSaxSAXSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformSaxSAXSource_) && (INCLUDE_ALL_JavaxXmlTransformSaxSAXSource || defined(INCLUDE_JavaxXmlTransformSaxSAXSource))
#define JavaxXmlTransformSaxSAXSource_

#define RESTRICT_JavaxXmlTransformSource 1
#define INCLUDE_JavaxXmlTransformSource 1
#include "javax/xml/transform/Source.h"

@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxXMLReader;

/*!
 @brief <p>Acts as an holder for SAX-style Source.
 </p>
  
 <p>Note that XSLT requires namespace support. Attempting to transform an
  input source that is not
  generated with a namespace-aware parser may result in errors.
  Parsers can be made namespace aware by calling the 
 <code>javax.xml.parsers.SAXParserFactory.setNamespaceAware(boolean awareness)</code> method.</p>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 446598 $, $Date: 2006-09-15 05:55:40 -0700 (Fri, 15 Sep 2006) $
 */
@interface JavaxXmlTransformSaxSAXSource : NSObject < JavaxXmlTransformSource >
@property (readonly, copy, class) NSString *FEATURE NS_SWIFT_NAME(FEATURE);

#pragma mark Public

/*!
 @brief <p>Zero-argument default constructor.
 If this constructor is used, and
  no SAX source is set using 
 <code>setInputSource(InputSource inputSource)</code> , then the 
 <code>Transformer</code> will
  create an empty source <code>org.xml.sax.InputSource</code> using 
 <code>new InputSource()</code>.</p>
 - seealso: javax.xml.transform.Transformer#transform(Source xmlSource, Result outputTarget)
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a <code>SAXSource</code>, using a SAX <code>InputSource</code>.
 The <code>javax.xml.transform.Transformer</code> or 
 <code>javax.xml.transform.sax.SAXTransformerFactory</code> creates a
  reader via <code>org.xml.sax.helpers.XMLReaderFactory</code>
  (if setXMLReader is not used), sets itself as
  the reader's <code>org.xml.sax.ContentHandler</code>, and calls
  reader.parse(inputSource).
 @param inputSource An input source reference that must be non-null  and that will be passed to the parse method of the reader.
 */
- (instancetype __nonnull)initWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)inputSource;

/*!
 @brief Create a <code>SAXSource</code>, using an <code>org.xml.sax.XMLReader</code>
  and a SAX InputSource.The <code>javax.xml.transform.Transformer</code>
  or <code>javax.xml.transform.sax.SAXTransformerFactory</code> will set itself
  to be the reader's <code>org.xml.sax.ContentHandler</code>, and then will call
  reader.parse(inputSource).
 @param reader An XMLReader to be used for the parse.
 @param inputSource A SAX input source reference that must be non-null  and that will be passed to the reader parse method.
 */
- (instancetype __nonnull)initWithOrgXmlSaxXMLReader:(id<OrgXmlSaxXMLReader>)reader
                            withOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)inputSource;

/*!
 @brief Get the SAX InputSource to be used for the Source.
 @return A valid InputSource reference, or null.
 */
- (OrgXmlSaxInputSource *)getInputSource;

/*!
 @brief <p>Get the base ID (URI or system ID) from where URIs
  will be resolved.
 </p>
 @return Base URL for the <code>Source</code>, or <code>null</code>.
 */
- (NSString *)getSystemId;

/*!
 @brief Get the XMLReader to be used for the Source.
 @return A valid XMLReader or XMLFilter reference, or null.
 */
- (id<OrgXmlSaxXMLReader>)getXMLReader;

/*!
 @brief Set the SAX InputSource to be used for the Source.
 @param inputSource A valid InputSource reference.
 */
- (void)setInputSourceWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)inputSource;

/*!
 @brief Set the system identifier for this Source.If an input source
  has already been set, it will set the system ID or that
  input source, otherwise it will create a new input source.
 <p>The system identifier is optional if there is a byte stream
  or a character stream, but it is still useful to provide one,
  since the application can use it to resolve relative URIs
  and can include it in error messages and warnings (the parser
  will attempt to open a connection to the URI only if
  no byte stream or character stream is specified).</p>
 @param systemId The system identifier as a URI string.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

/*!
 @brief Set the XMLReader to be used for the Source.
 @param reader A valid XMLReader or XMLFilter reference.
 */
- (void)setXMLReaderWithOrgXmlSaxXMLReader:(id<OrgXmlSaxXMLReader>)reader;

/*!
 @brief Attempt to obtain a SAX InputSource object from a Source
  object.
 @param source Must be a non-null Source reference.
 @return An InputSource, or null if Source can not be converted.
 */
+ (OrgXmlSaxInputSource *)sourceToInputSourceWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxSAXSource)

/*!
 @brief If <code>javax.xml.transform.TransformerFactory.getFeature</code>
  returns true when passed this value as an argument,
  the Transformer supports Source input of this type.
 */
inline NSString *JavaxXmlTransformSaxSAXSource_get_FEATURE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformSaxSAXSource_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformSaxSAXSource, FEATURE, NSString *)

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXSource_init(JavaxXmlTransformSaxSAXSource *self);

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXSource *new_JavaxXmlTransformSaxSAXSource_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXSource *create_JavaxXmlTransformSaxSAXSource_init(void);

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXSource_initWithOrgXmlSaxXMLReader_withOrgXmlSaxInputSource_(JavaxXmlTransformSaxSAXSource *self, id<OrgXmlSaxXMLReader> reader, OrgXmlSaxInputSource *inputSource);

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXSource *new_JavaxXmlTransformSaxSAXSource_initWithOrgXmlSaxXMLReader_withOrgXmlSaxInputSource_(id<OrgXmlSaxXMLReader> reader, OrgXmlSaxInputSource *inputSource) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXSource *create_JavaxXmlTransformSaxSAXSource_initWithOrgXmlSaxXMLReader_withOrgXmlSaxInputSource_(id<OrgXmlSaxXMLReader> reader, OrgXmlSaxInputSource *inputSource);

FOUNDATION_EXPORT void JavaxXmlTransformSaxSAXSource_initWithOrgXmlSaxInputSource_(JavaxXmlTransformSaxSAXSource *self, OrgXmlSaxInputSource *inputSource);

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXSource *new_JavaxXmlTransformSaxSAXSource_initWithOrgXmlSaxInputSource_(OrgXmlSaxInputSource *inputSource) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxXmlTransformSaxSAXSource *create_JavaxXmlTransformSaxSAXSource_initWithOrgXmlSaxInputSource_(OrgXmlSaxInputSource *inputSource);

FOUNDATION_EXPORT OrgXmlSaxInputSource *JavaxXmlTransformSaxSAXSource_sourceToInputSourceWithJavaxXmlTransformSource_(id<JavaxXmlTransformSource> source);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxSAXSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformSaxSAXSource")
