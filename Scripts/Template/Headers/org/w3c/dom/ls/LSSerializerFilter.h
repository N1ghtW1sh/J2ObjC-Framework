//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/ls/LSSerializerFilter.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomLsLSSerializerFilter")
#ifdef RESTRICT_OrgW3cDomLsLSSerializerFilter
#define INCLUDE_ALL_OrgW3cDomLsLSSerializerFilter 0
#else
#define INCLUDE_ALL_OrgW3cDomLsLSSerializerFilter 1
#endif
#undef RESTRICT_OrgW3cDomLsLSSerializerFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomLsLSSerializerFilter_) && (INCLUDE_ALL_OrgW3cDomLsLSSerializerFilter || defined(INCLUDE_OrgW3cDomLsLSSerializerFilter))
#define OrgW3cDomLsLSSerializerFilter_

#define RESTRICT_OrgW3cDomTraversalNodeFilter 1
#define INCLUDE_OrgW3cDomTraversalNodeFilter 1
#include "../../../../org/w3c/dom/traversal/NodeFilter.h"

/*!
 @brief <code>LSSerializerFilter</code>s provide applications the ability to
 examine nodes as they are being serialized and decide what nodes should
 be serialized or not.
 The <code>LSSerializerFilter</code> interface is
 based on the <code>NodeFilter</code> interface defined in [<a href='http://www.w3.org/TR/2000/REC-DOM-Level-2-Traversal-Range-20001113'>DOM Level 2 Traversal and      Range</a>]
 .
 <p> <code>Document</code>, <code>DocumentType</code>,
 <code>DocumentFragment</code>, <code>Notation</code>, <code>Entity</code>
 , and children of <code>Attr</code> nodes are not passed to the filter.
 The child nodes of an <code>EntityReference</code> node are only passed
 to the filter if the <code>EntityReference</code> node is skipped by the
 method <code>LSParserFilter.acceptNode()</code>.
 <p> When serializing an <code>Element</code>, the element is passed to the
 filter before any of its attributes are passed to the filter. Namespace
 declaration attributes, and default attributes (except in the case when "
 discard-default-content" is set to <code>false</code>), are never passed
 to the filter.
 <p> The result of any attempt to modify a node passed to a
 <code>LSSerializerFilter</code> is implementation dependent.
 <p> DOM applications must not raise exceptions in a filter. The effect of
 throwing exceptions from a filter is DOM implementation dependent.
 <p> For efficiency, a node passed to the filter may not be the same as the
 one that is actually in the tree. And the actual node (node object
 identity) may be reused during the process of filtering and serializing a
 document.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-LS-20040407'>Document Object Model (DOM) Level 3 Load
 and Save Specification</a>.
 */
@protocol OrgW3cDomLsLSSerializerFilter < OrgW3cDomTraversalNodeFilter, NSObject, JavaObject >

/*!
 @brief Tells the <code>LSSerializer</code> what types of nodes to show to the
 filter.
 If a node is not shown to the filter using this attribute, it
 is automatically serialized. See <code>NodeFilter</code> for
 definition of the constants. The constants <code>SHOW_DOCUMENT</code>
 , <code>SHOW_DOCUMENT_TYPE</code>, <code>SHOW_DOCUMENT_FRAGMENT</code>
 , <code>SHOW_NOTATION</code>, and <code>SHOW_ENTITY</code> are
 meaningless here, such nodes will never be passed to a
 <code>LSSerializerFilter</code>.
 <br> Unlike [<a href='http://www.w3.org/TR/2000/REC-DOM-Level-2-Traversal-Range-20001113'>DOM Level 2 Traversal and      Range</a>]
 , the <code>SHOW_ATTRIBUTE</code> constant indicates that the
 <code>Attr</code> nodes are shown and passed to the filter.
 <br> The constants used here are defined in [<a href='http://www.w3.org/TR/2000/REC-DOM-Level-2-Traversal-Range-20001113'>DOM Level 2 Traversal and      Range</a>]
 .
 */
- (jint)getWhatToShow;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsLSSerializerFilter)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsLSSerializerFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomLsLSSerializerFilter")
