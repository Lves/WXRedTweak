//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardRefreshComponent.h"

@class UIActivityIndicatorView;

@interface WCShareCardListRefreshHeader : WCCardRefreshComponent
{
    double _insetTDelta;
    UIActivityIndicatorView *_loadingView;
}

+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)endRefreshing;
@property(nonatomic) double insetTDelta; // @synthesize insetTDelta=_insetTDelta;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (void)placeSubviews;
- (void)prepare;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;

@end

