/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableIndexSet;

@interface TSTConcurrentMutableIndexSet : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    NSMutableIndexSet *mMutableIndexSet;
    } mRWLock;
}

- (void)addIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)enumerateIndexesUsingBlock:(id)arg1;
- (id)init;
- (void)removeAllIndexes;

@end
