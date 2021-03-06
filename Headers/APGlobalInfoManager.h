//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIAPNetworkMonitor, MidasIAPUserInfo, MidasIapOrderInfo, MidasLifecycleInfo, NSArray, NSString;

@interface APGlobalInfoManager : NSObject
{
    NSString *_offerId;
    MidasIAPNetworkMonitor *_reachability;
    _Bool _excludeBundle;
    _Bool _hideLoading;
    _Bool _disableReprovidePrompt;
    NSString *version;
    NSString *_networkType;
    id runtimeDelegate;
    NSString *_Result_url;
    NSString *_Mall_url;
    MidasIAPUserInfo *_userInfo;
    MidasIapOrderInfo *_iapOrderInfo;
    MidasLifecycleInfo *_lifecycleInfo;
    NSArray *_productObjs;
}

+ (id)singleton;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *Mall_url; // @synthesize Mall_url=_Mall_url;
@property(copy, nonatomic) NSString *Result_url; // @synthesize Result_url=_Result_url;
@property(readonly, nonatomic) NSString *Version; // @synthesize Version=version;
- (void)dealloc;
@property(nonatomic) _Bool disableReprovidePrompt; // @synthesize disableReprovidePrompt=_disableReprovidePrompt;
@property(nonatomic) _Bool excludeBundle; // @synthesize excludeBundle=_excludeBundle;
@property(nonatomic) _Bool hideLoading; // @synthesize hideLoading=_hideLoading;
@property(readonly, nonatomic) MidasIapOrderInfo *iapOrderInfo; // @synthesize iapOrderInfo=_iapOrderInfo;
- (id)init;
@property(readonly, nonatomic) MidasLifecycleInfo *lifecycleInfo; // @synthesize lifecycleInfo=_lifecycleInfo;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSArray *productObjs; // @synthesize productObjs=_productObjs;
- (void)reachabilityChanged:(id)arg1;
- (void)reset;
@property(nonatomic) __weak id runtimeDelegate; // @synthesize runtimeDelegate;
- (void)updateNetworkStatus:(id)arg1;
@property(readonly, nonatomic) MidasIAPUserInfo *userInfo; // @synthesize userInfo=_userInfo;

@end

