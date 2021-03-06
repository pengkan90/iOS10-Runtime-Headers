/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoEditRenderer : NSObject {
    id /* block */  __completionHandler;
    AVAssetExportSession * __exportSession;
    id /* block */  __progressHandler;
    <PUVideoEditRendererDelegate> * _delegate;
    struct { 
        bool respondsToStatusDidChange; 
    }  _delegateFlags;
    NSString * _exportPresetName;
    NSURL * _outputURL;
    PLPhotoEditRenderer * _photoEditRenderer;
    AVAsset * _sourceAsset;
    long long  _status;
}

@property (nonatomic, readonly, copy) id /* block */ _completionHandler;
@property (setter=_setExportSession:, nonatomic, retain) AVAssetExportSession *_exportSession;
@property (nonatomic, readonly, copy) id /* block */ _progressHandler;
@property (nonatomic) <PUVideoEditRendererDelegate> *delegate;
@property (nonatomic, readonly, copy) NSString *exportPresetName;
@property (nonatomic, readonly, copy) NSURL *outputURL;
@property (nonatomic, readonly, copy) PLPhotoEditRenderer *photoEditRenderer;
@property (nonatomic, readonly, copy) AVAsset *sourceAsset;
@property (setter=_setStatus:, nonatomic) long long status;

- (void).cxx_destruct;
- (id /* block */)_completionHandler;
- (id)_exportSession;
- (void)_handleDidExport;
- (void)_handleDidPrepareVideoComposition:(id)arg1 forAsset:(id)arg2 error:(id)arg3;
- (id /* block */)_progressHandler;
- (void)_reportProgress;
- (void)_runCompletionHandlerWithError:(id)arg1;
- (void)_setExportSession:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (void)cancelRendering;
- (void)dealloc;
- (id)delegate;
- (id)exportPresetName;
- (id)initWithSourceAsset:(id)arg1 photoEditRenderer:(id)arg2 outputURL:(id)arg3 exportPresetName:(id)arg4 progressHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)outputURL;
- (id)photoEditRenderer;
- (void)render;
- (void)setDelegate:(id)arg1;
- (id)sourceAsset;
- (long long)status;

@end
