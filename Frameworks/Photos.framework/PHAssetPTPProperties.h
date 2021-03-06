/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSString, PHAsset;

@interface PHAssetPTPProperties : NSObject {
    PHAsset *_asset;
    NSString *_exifTimestampString;
    NSString *_importSessionID;
}

@property(readonly) PHAsset * asset;
@property(readonly) NSString * exifTimestampString;
@property(readonly) NSString * importSessionID;

- (void).cxx_destruct;
- (id)asset;
- (id)exifTimestampString;
- (id)importSessionID;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end
