/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLRequest : NSObject <CVMLWarningRecorder> {
    bool  _cancellable;
    NSObject<OS_dispatch_queue> * _cancellationQueue;
    NSObject<OS_dispatch_semaphore> * _cancellationSemaphore;
    id /* block */  _completionHandler;
    CVMLDetector * _detector;
    NSDictionary * _options;
    NSString * _requestName;
    NSArray * _results;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _roi;
    CVMLWarningRecorder * _warningRecorder;
}

@property bool cancellable;
@property (retain) NSObject<OS_dispatch_semaphore> *cancellationSemaphore;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *options;
@property (readonly) NSString *requestName;
@property (readonly) NSArray *results;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } roi;
@property (readonly) Class superclass;

+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4;
+ (bool)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5;
+ (bool)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5;
+ (bool)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3;
+ (bool)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (bool)getPixelFocalLength:(float*)arg1 inOptions:(id)arg2 withDefaultValue:(float)arg3 error:(id*)arg4;
+ (bool)getRequiredObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5;
+ (void)initialize;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)requestWithName:(id)arg1 options:(id)arg2;
+ (id)requestWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (bool)cancellable;
- (id)cancellationSemaphore;
- (id /* block */)completionHandler;
- (id)imageRequestHandlerForHandler:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalCancelRequestWithHandler:(id)arg1 error:(id*)arg2;
- (bool)internalProcessWithHandler:(id)arg1 error:(id*)arg2;
- (id)options;
- (bool)processWithHandler:(id)arg1 error:(id*)arg2;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (id)requestName;
- (id)results;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })roi;
- (void)setCancellable:(bool)arg1;
- (void)setCancellationSemaphore:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResults:(id)arg1;
- (void)setRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)valueForWarning:(id)arg1;
- (id)warnings;

@end
