/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISHashError : NSObject <NSCopying> {
    NSString *_actualHashString;
    NSString *_expectedHashString;
    long long _rangeEnd;
    long long _rangeStart;
}

@property(copy) NSString * actualHashString;
@property(copy) NSString * expectedHashString;
@property(readonly) NSString * hashFailureHeaderString;
@property long long rangeEnd;
@property long long rangeStart;

- (id)actualHashString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)expectedHashString;
- (id)hashFailureHeaderString;
- (long long)rangeEnd;
- (long long)rangeStart;
- (void)setActualHashString:(id)arg1;
- (void)setExpectedHashString:(id)arg1;
- (void)setRangeEnd:(long long)arg1;
- (void)setRangeStart:(long long)arg1;

@end
