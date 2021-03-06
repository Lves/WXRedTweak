//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmotionCollectionFooterViewDelegate.h"
#import "StoreEmotionGetDonorListCgiDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class EmoticonStoreItem, EmotionCollectionFooterView, EmotionRewardResponseInfo, EmotionStoreRewardDonorHeader, NSArray, NSString, StoreEmotionGetDonorListCgi, UICollectionView, UIImage;

@interface MMStoreEmotionRewardChartsViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, StoreEmotionGetDonorListCgiDelegate, EmotionCollectionFooterViewDelegate>
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    NSArray *m_donors;
    StoreEmotionGetDonorListCgi *m_getDonorListCgi;
    UICollectionView *m_collectionView;
    EmotionStoreRewardDonorHeader *m_collectionHeaderView;
    EmotionCollectionFooterView *m_collectionFooterView;
    UIImage *m_defaultHeadImage;
}

- (void).cxx_destruct;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (void)initView;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onClose;
- (void)onGetDonorsListFailedWithPid:(id)arg1;
- (void)onGetDonorsListSuccessedWithPid:(id)arg1 Donors:(id)arg2 DonorNum:(unsigned int)arg3 hasMore:(_Bool)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

