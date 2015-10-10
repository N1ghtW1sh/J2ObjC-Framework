//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/traversal/NodeFilter.java
//

#ifndef _OrgW3cDomTraversalNodeFilter_H_
#define _OrgW3cDomTraversalNodeFilter_H_

#include <j2objc/J2ObjC_header.h>

@protocol OrgW3cDomNode;

#define OrgW3cDomTraversalNodeFilter_FILTER_ACCEPT 1
#define OrgW3cDomTraversalNodeFilter_FILTER_REJECT 2
#define OrgW3cDomTraversalNodeFilter_FILTER_SKIP 3
#define OrgW3cDomTraversalNodeFilter_SHOW_ALL -1
#define OrgW3cDomTraversalNodeFilter_SHOW_ELEMENT 1
#define OrgW3cDomTraversalNodeFilter_SHOW_ATTRIBUTE 2
#define OrgW3cDomTraversalNodeFilter_SHOW_TEXT 4
#define OrgW3cDomTraversalNodeFilter_SHOW_CDATA_SECTION 8
#define OrgW3cDomTraversalNodeFilter_SHOW_ENTITY_REFERENCE 16
#define OrgW3cDomTraversalNodeFilter_SHOW_ENTITY 32
#define OrgW3cDomTraversalNodeFilter_SHOW_PROCESSING_INSTRUCTION 64
#define OrgW3cDomTraversalNodeFilter_SHOW_COMMENT 128
#define OrgW3cDomTraversalNodeFilter_SHOW_DOCUMENT 256
#define OrgW3cDomTraversalNodeFilter_SHOW_DOCUMENT_TYPE 512
#define OrgW3cDomTraversalNodeFilter_SHOW_DOCUMENT_FRAGMENT 1024
#define OrgW3cDomTraversalNodeFilter_SHOW_NOTATION 2048

/*!
 @brief Filters are objects that know how to "filter out" nodes.
 If a
 <code>NodeIterator</code> or <code>TreeWalker</code> is given a
 <code>NodeFilter</code>, it applies the filter before it returns the next
 node. If the filter says to accept the node, the traversal logic returns
 it; otherwise, traversal looks for the next node and pretends that the
 node that was rejected was not there.
 <p>The DOM does not provide any filters. <code>NodeFilter</code> is just an
 interface that users can implement to provide their own filters.
 <p><code>NodeFilters</code> do not need to know how to traverse from node
 to node, nor do they need to know anything about the data structure that
 is being traversed. This makes it very easy to write filters, since the
 only thing they have to know how to do is evaluate a single node. One
 filter may be used with a number of different kinds of traversals,
 encouraging code reuse.
 <p>See also the <a href='http://www.w3.org/TR/2000/REC-DOM-Level-2-Traversal-Range-20001113'>Document Object Model (DOM) Level 2 Traversal and Range Specification</a>.
 @since DOM Level 2
 */
@protocol OrgW3cDomTraversalNodeFilter < NSObject, JavaObject >

/*!
 @brief Test whether a specified node is visible in the logical view of a
 <code>TreeWalker</code> or <code>NodeIterator</code>.
 This function
 will be called by the implementation of <code>TreeWalker</code> and
 <code>NodeIterator</code>; it is not normally called directly from
 user code. (Though you could do so if you wanted to use the same
 filter to guide your own application logic.)
 @param n The node to check to see if it passes the filter or not.
 @return A constant to determine whether the node is accepted,
 rejected, or skipped, as defined above.
 */
- (jshort)acceptNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomTraversalNodeFilter)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, FILTER_ACCEPT, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, FILTER_REJECT, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, FILTER_SKIP, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_ALL, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_ELEMENT, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_ATTRIBUTE, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_TEXT, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_CDATA_SECTION, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_ENTITY_REFERENCE, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_ENTITY, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_PROCESSING_INSTRUCTION, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_COMMENT, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_DOCUMENT, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_DOCUMENT_TYPE, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_DOCUMENT_FRAGMENT, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomTraversalNodeFilter, SHOW_NOTATION, jint)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomTraversalNodeFilter)

#endif // _OrgW3cDomTraversalNodeFilter_H_