//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSJSEventDelegate.h"
#import "WCCanvasDynamicDataLoaderDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WSActionSheetDelegate.h"
#import "WSMusicDelegate.h"

@class FTSWebSearchMgr, MMUIViewController, NSDictionary, NSString, WAWebSearchMgr, WCCanvasDynamicDataLoader, WSActionSheet;

@interface WSJSEventHandler : NSObject <WCCommentDetailViewControllerFBDelegate, WSMusicDelegate, WSActionSheetDelegate, WCCanvasDynamicDataLoaderDelegate, FTSJSEventDelegate>
{
    MMUIViewController *_baseViewController;
    id <WSJSEventHandleDelegate> _delegate;
    FTSWebSearchMgr *_webSearchMgr;
    WSActionSheet *_actionSheet;
    WAWebSearchMgr *_waSearchMgr;
    WCCanvasDynamicDataLoader *_dataLoader;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WSActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) __weak MMUIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void)dealloc;
@property(nonatomic) __weak id <WSJSEventHandleDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishLoadWebView:(id)arg1;
- (void)enableSearchBar;
- (void)hideKeyboard;
- (void)notifyPageOfMusicStatusChanged:(id)arg1;
- (void)onCancelSearchActionSheet:(id)arg1;
- (void)onCanvasDynamicXMLReturn:(id)arg1 error:(int)arg2 forCanvasId:(id)arg3;
- (void)onClearHistoryOperation:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onDeleteData;
- (void)onDeleteSearchHistory:(id)arg1;
- (void)onDoSearchOpLog:(id)arg1;
- (void)onFailReceiveJson;
- (id)onGetBaseViewController;
- (id)onGetSearchHistory:(id)arg1;
- (void)onGoToRecVideoList:(id)arg1;
- (void)onImagePreview:(id)arg1;
- (void)onInsertHistoryOperation:(id)arg1;
- (id)onInsertVideoPlayerWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onLaunchDetailPageForWeApp:(id)arg1;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onMakePhoneCall:(id)arg1;
- (void)onOpenADCanvasPage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onOpenContact:(id)arg1;
- (void)onOpenEmotionPage:(id)arg1;
- (void)onOpenLocation:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenSearchCanvas:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onOpenVisitHistory:(id)arg1;
- (void)onOpenWAWidgetLogViewWithParams:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onOperateVideoPlayerWithParams:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)onReceiveJson:(id)arg1;
- (void)onRemoveVideoPlayerWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (void)onReportWeAppSearchRealTime:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onSearchHotWord:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (id)onShowSearchActionSheet:(id)arg1;
- (void)onSwitchSearchContext:(id)arg1;
- (void)onTapWAWidgetWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)onUpdateReddotTimeStamps:(id)arg1;
- (void)onUpdateVideoPlayerWithParams:(id)arg1;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onViewTypeChange:(id)arg1;
- (void)onWidgetClearCrashProtectCount:(id)arg1;
- (void)registerWSMusicHandler;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) WAWebSearchMgr *waSearchMgr; // @synthesize waSearchMgr=_waSearchMgr;
@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
- (void)startMusicPlayer:(id)arg1;
- (_Bool)viewControllerHasNavController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

