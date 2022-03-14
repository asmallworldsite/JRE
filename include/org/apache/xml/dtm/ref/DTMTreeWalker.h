//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMTreeWalker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMTreeWalker")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMTreeWalker
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMTreeWalker 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMTreeWalker 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMTreeWalker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgApacheXmlDtmRefDTMTreeWalker_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMTreeWalker || defined(INCLUDE_OrgApacheXmlDtmRefDTMTreeWalker))
#define OrgApacheXmlDtmRefDTMTreeWalker_

@protocol OrgApacheXmlDtmDTM;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This class does a pre-order walk of the DTM tree, calling a ContentHandler
  interface as it goes.As such, it's more like the Visitor design pattern
  than like the DOM's TreeWalker.
 I think normally this class should not be needed, because 
  of DTM#dispatchToEvents.
 */
@interface OrgApacheXmlDtmRefDTMTreeWalker : NSObject {
 @public
  /*!
   @brief DomHelper for this TreeWalker
   */
  id<OrgApacheXmlDtmDTM> m_dtm_;
  /*!
   @brief Flag indicating whether following text to be processed is raw text
   */
  jboolean nextIsRaw_;
}

#pragma mark Public

/*!
 @brief Constructor.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructor.
 @param contentHandler The implemention of the  contentHandler operation (toXMLString, digest, ...)
 */
- (instancetype __nonnull)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)contentHandler
                                   withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Get the ContentHandler used for the tree walk.
 @return the ContentHandler used for the tree walk
 */
- (id<OrgXmlSaxContentHandler>)getcontentHandler;

/*!
 @brief Set the ContentHandler used for the tree walk.
 @param ch the ContentHandler to be the result of the tree walk.
 */
- (void)setcontentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 @brief Set the DTM to be traversed.
 @param dtm The Document Table Model to be used.
 */
- (void)setDTMWithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Perform a non-recursive pre-order/post-order traversal,
  operating as a Visitor.startNode (preorder) and endNode
  (postorder) are invoked for each node as we traverse over them,
  with the result that the node is written out to m_contentHandler.
 @param pos Node in the tree at which to start (and end) traversal --  in other words, the root of the subtree to traverse over.
 @throw TransformerException
 */
- (void)traverseWithInt:(jint)pos;

/*!
 @brief Perform a non-recursive pre-order/post-order traversal,
  operating as a Visitor.startNode (preorder) and endNode
  (postorder) are invoked for each node as we traverse over them,
  with the result that the node is written out to m_contentHandler.
 @param pos Node in the tree where to start traversal
 @param top Node in the tree where to end traversal.  If top==DTM.NULL, run through end of document.
 @throw TransformerException
 */
- (void)traverseWithInt:(jint)pos
                withInt:(jint)top;

#pragma mark Protected

/*!
 @brief End processing of given node
 @param node Node we just finished processing
 @throw org.xml.sax.SAXException
 */
- (void)endNodeWithInt:(jint)node;

/*!
 @brief Start processing given node
 @param node Node to process
 @throw org.xml.sax.SAXException
 */
- (void)startNodeWithInt:(jint)node;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMTreeWalker)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefDTMTreeWalker, m_dtm_, id<OrgApacheXmlDtmDTM>)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMTreeWalker_init(OrgApacheXmlDtmRefDTMTreeWalker *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMTreeWalker *new_OrgApacheXmlDtmRefDTMTreeWalker_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMTreeWalker *create_OrgApacheXmlDtmRefDTMTreeWalker_init(void);

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlDtmDTM_(OrgApacheXmlDtmRefDTMTreeWalker *self, id<OrgXmlSaxContentHandler> contentHandler, id<OrgApacheXmlDtmDTM> dtm);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMTreeWalker *new_OrgApacheXmlDtmRefDTMTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlDtmDTM_(id<OrgXmlSaxContentHandler> contentHandler, id<OrgApacheXmlDtmDTM> dtm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMTreeWalker *create_OrgApacheXmlDtmRefDTMTreeWalker_initWithOrgXmlSaxContentHandler_withOrgApacheXmlDtmDTM_(id<OrgXmlSaxContentHandler> contentHandler, id<OrgApacheXmlDtmDTM> dtm);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMTreeWalker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMTreeWalker")
