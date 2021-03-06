//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCAccountBindPhoneForRegCGIDelegate.h"

@class NSString, WCAccountBaseControlLogic<WCAccountVerifyCodeHandlerDelegate>, WCAccountBindPhoneForRegCGI, WCAccountControlData;

@interface WCAccountVerifyCodeHandler : NSObject <WCAccountBindPhoneForRegCGIDelegate>
{
    WCAccountBaseControlLogic<WCAccountVerifyCodeHandlerDelegate> *_delegate;
    WCAccountControlData *_data;
    WCAccountBindPhoneForRegCGI *_modelLogic;
    _Bool _bNeedSetPwd;
    unsigned int _uiTryCount;
    NSString *_phoneNumberWithCC;
}

- (void).cxx_destruct;
- (_Bool)checkPhoneNumberStatus:(unsigned int)arg1;
- (_Bool)checkVerifyCode:(id)arg1;
- (id)getRegSessionID;
- (void)getVerifyCode;
- (_Bool)getVerifyCodeReady;
- (id)initWithData:(id)arg1 Delegate:(id)arg2;
- (void)onCheckLoginPhoneNumberStatus:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onGetVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
@property(retain, nonatomic) NSString *phoneNumberWithCC; // @synthesize phoneNumberWithCC=_phoneNumberWithCC;
- (void)startCheckNumberStatusAndLoading;
- (void)startCheckVerifyCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

