/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableDictionary, NSMutableString;



@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager 
{
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsFrameset;

}


- (id)copyDictionaryWithSizeInfos:(BOOL)arg1;
- (id)newResourceWithName:(id)arg1;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;
- (void)setIsFrameset;
- (id)resourceUrlProtocol;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (NSInteger)resourceCount;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)cssStylesheetString;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushCssToPath:(id)arg1;
- (id)name;
- (void)dealloc;

@end