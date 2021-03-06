//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNNoteItemUtilBase.h"

#import "ILocationThumbMgrExt.h"
#import "MMPickLocationViewControllerDelegate.h"
#import "ViewLocationDelegate.h"

@class MMPickLocationViewController, NSString;

@interface WNNoteLocationItemUtil : WNNoteItemUtilBase <MMPickLocationViewControllerDelegate, ILocationThumbMgrExt, ViewLocationDelegate>
{
    MMPickLocationViewController *_locationViewCtrl;
}

- (void).cxx_destruct;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (id)cropImage:(id)arg1 toFitSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)getIconHLName;
- (id)getIconName;
- (id)getLocationItemThumbTaskNameWithLat:(double)arg1 Lng:(double)arg2 Scale:(double)arg3;
- (id)getTitle;
- (id)init;
- (void)insertItem:(id)arg1 isUpdate:(_Bool)arg2 isConfigData:(_Bool)arg3;
- (void)onAddItemBegin:(id)arg1;
- (void)onCancelInsert;
- (void)onCancelSeletctedLocation;
- (void)onClickItem:(id)arg1;
- (void)onCreatPostLocationView;
- (void)onFinishSelectedLocation;
- (id)onGetRightBarButton;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

