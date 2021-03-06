//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMImageScrollViewHelper : NSObject
{
    _Bool dontCalcPreviewRect;
    _Bool noSingleTaps;
    _Bool noDoubleTaps;
    _Bool dontSupportVerticalLongImage;
    _Bool dontSupportHorizontalLongImage;
    id <MMImageScrollViewHelperDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)InitGestureRecognizer;
- (void)ZoomForPoint:(struct CGPoint)arg1;
- (struct CGSize)calculateImageFitSizeForPreview:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (void)dealloc;
@property(nonatomic) _Bool dontCalcPreviewRect; // @synthesize dontCalcPreviewRect;
@property(nonatomic) _Bool dontSupportHorizontalLongImage; // @synthesize dontSupportHorizontalLongImage;
@property(nonatomic) _Bool dontSupportVerticalLongImage; // @synthesize dontSupportVerticalLongImage;
- (id)init;
- (void)initHelper:(struct CGSize)arg1;
- (void)initHelper:(struct CGSize)arg1 orientation:(long long)arg2;
- (void)initHelper:(struct CGSize)arg1 orientation:(long long)arg2 containSize:(struct CGSize)arg3;
@property(nonatomic) __weak id <MMImageScrollViewHelperDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool noDoubleTaps; // @synthesize noDoubleTaps;
@property(nonatomic) _Bool noSingleTaps; // @synthesize noSingleTaps;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;

@end

