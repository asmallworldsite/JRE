//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/guava/build_result/java/com/google/common/collect/AbstractIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractIterator")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractIterator
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractIterator 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractIterator 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComGoogleCommonCollectAbstractIterator_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractIterator || defined(INCLUDE_ComGoogleCommonCollectAbstractIterator))
#define ComGoogleCommonCollectAbstractIterator_

#define RESTRICT_ComGoogleCommonCollectUnmodifiableIterator 1
#define INCLUDE_ComGoogleCommonCollectUnmodifiableIterator 1
#include "com/google/common/collect/UnmodifiableIterator.h"

/*!
 @brief This class provides a skeletal implementation of the <code>Iterator</code> interface, to make this
  interface easier to implement for certain types of data sources.
 <p><code>Iterator</code> requires its implementations to support querying the end-of-data status
  without changing the iterator's state, using the <code>hasNext</code> method. But many data sources,
  such as <code>java.io.Reader.read()</code>, do not expose this information; the only way to discover
  whether there is any data left is by trying to retrieve it. These types of data sources are
  ordinarily difficult to write iterators for. But using this class, one must implement only the 
 <code>computeNext</code> method, and invoke the <code>endOfData</code> method when appropriate. 
 <p>Another example is an iterator that skips over null elements in a backing iterator. This could
  be implemented as: 
 @code
 public static Iterator<String> skipNulls(final Iterator<String> in) {
    return new AbstractIterator<String>() {
      protected String computeNext() {
        while (in.hasNext()) {
          String s = in.next();
          if (s != null) {
            return s;
          }        }
        return endOfData();
      }
    };  }  
 
@endcode
  
 <p>This class supports iterators that include null elements.
 @author Kevin Bourrillion
 @since 2.0
 */
@interface ComGoogleCommonCollectAbstractIterator : ComGoogleCommonCollectUnmodifiableIterator

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

/*!
 @brief Returns the next element in the iteration without advancing the iteration, according to the
  contract of <code>PeekingIterator.peek()</code>.
 <p>Implementations of <code>AbstractIterator</code> that wish to expose this functionality should
  implement <code>PeekingIterator</code>.
 */
- (id)peek;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns the next element.
 <b>Note:</b> the implementation must call <code>endOfData()</code> when
  there are no elements left in the iteration. Failure to do so could result in an infinite loop. 
 <p>The initial invocation of <code>hasNext()</code> or <code>next()</code> calls this method, as does
  the first invocation of <code>hasNext</code> or <code>next</code> following each successful call to 
 <code>next</code>. Once the implementation either invokes <code>endOfData</code> or throws an exception, 
 <code>computeNext</code> is guaranteed to never be called again. 
 <p>If this method throws an exception, it will propagate outward to the <code>hasNext</code> or 
 <code>next</code> invocation that invoked this method. Any further attempts to use the iterator will
  result in an <code>IllegalStateException</code>.
  
 <p>The implementation of this method may not invoke the <code>hasNext</code>, <code>next</code>, or 
 <code>peek()</code> methods on this instance; if it does, an <code>IllegalStateException</code> will
  result.
 @return the next element if there was one. If <code>endOfData</code> was called during execution,
      the return value will be ignored.
 @throw RuntimeExceptionif any unrecoverable error happens. This exception will propagate
      outward to the <code>hasNext()</code>, <code>next()</code>, or <code>peek()</code> invocation that invoked
      this method. Any further attempts to use the iterator will result in an <code>IllegalStateException</code>
 .
 */
- (id)computeNext;

/*!
 @brief Implementations of <code>computeNext</code> <b>must</b> invoke this method when there are no
  elements left in the iteration.
 @return <code>null</code>; a convenience so your <code>computeNext</code> implementation can use the
      simple statement <code>return endOfData();</code>
 */
- (id)endOfData;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractIterator)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractIterator_init(ComGoogleCommonCollectAbstractIterator *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractIterator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractIterator")
