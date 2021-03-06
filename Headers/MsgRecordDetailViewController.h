//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate.h"
#import "FavForwardLogicDelegate.h"
#import "FavRecordNodeViewDelegate.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "IRecordDownloadExt.h"
#import "MMWebViewDelegate.h"
#import "MsgRecordFileDetailDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "ViewLocationDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"
#import "tableViewDelegate.h"

@class CMessageWrap, FavForwardLogicController, MMTableView, MMUIWindow, NSArray, NSString, ScanQRCodeLogicController, UIView, WCActionSheet;

@interface MsgRecordDetailViewController : MMUIViewController <MMWebViewDelegate, FavForwardLogicDelegate, WCNetworkMediaPlayerDelegate, BaseScanLogicDelegate, IMsgExt, MsgRecordFileDetailDelegate, WCActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, tableViewDelegate, FavRecordNodeViewDelegate, ViewLocationDelegate, IRecordDownloadExt, IMsgRevokeExt, UIAlertViewDelegate>
{
    MMTableView *m_tableView;
    unsigned int m_uiLongPressedIndex;
    CMessageWrap *m_recordMsg;
    MMUIWindow *m_fullScreenWindow;
    ScanQRCodeLogicController *_scanQRCodeLogic;
    int m_qrcodeActionSheetIndex;
    WCActionSheet *favImgLongPressAction;
    FavForwardLogicController *m_favForwardController;
    NSString *m_chatDate;
    NSString *m_chatDatePrefix;
    UIView *m_headerView;
    UIView *m_headerContainView;
    UIView *m_headerSepLine;
    UIView *m_statusBarBkgView;
    double lastContentOffset;
    _Bool isDragging;
    NSArray *m_dataList;
    NSString *m_title;
    NSString *_chatName;
}

- (void).cxx_destruct;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(_Bool)arg3;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)OnRecordMessageDownloadOK:(id)arg1;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustViewAndNavBarRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (void)dealloc;
- (void)didFinishedLoading:(id)arg1;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)genHeadCell:(id)arg1 indexPath:(id)arg2;
- (void)genTimeCell:(id)arg1;
- (id)getFavForawrdViewController;
- (double)getHeaderHeight;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (long long)getRowsInContentSection;
- (void)initNavigationBar;
- (void)initTableView;
- (id)initWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 title:(id)arg2 dataList:(id)arg3;
- (void)jumpToDetail:(id)arg1;
- (void)jumpToViewStreamVideo:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onAddFavData2Fav;
- (void)onClickOnImgNode:(id)arg1 DataIndex:(unsigned int)arg2;
- (void)onClickOnNode:(id)arg1;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onExitFullScreen;
- (void)onForwardFavDataWrap2Msg;
- (void)onForwardFavDataWrap2WC;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onLongPressImgNode:(id)arg1;
- (void)onSaveFavDataImg;
- (void)onScanEnds;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onWillLongPressImgNode:(id)arg1;
- (void)pulseAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)resetHeader:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectFileData:(id)arg1;
- (void)selectGoodsData:(id)arg1;
- (void)selectLocationData:(id)arg1;
- (void)selectMallProductData:(id)arg1;
- (void)selectMusicData:(id)arg1;
- (void)selectRecordData:(id)arg1;
- (void)selectTVData:(id)arg1;
- (void)selectUrlData:(id)arg1;
- (void)selectVideoData:(id)arg1;
- (void)showTopBar;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tryReloadMsg;
- (void)updateChatDate;
- (_Bool)useTransparentNavibar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

