//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INewABTestMgrExt.h"
#import "ReportStrategyExt.h"

@class NSMutableDictionary, NSString;

@interface MMMonitorConfigMgr : NSObject <ReportStrategyExt, INewABTestMgrExt>
{
    NSMutableDictionary *m_dicMainThreadMonitorCongfig;
    NSString *_autoUploadConfigString;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned int)UinHash:(unsigned int)arg1;
@property(retain, nonatomic) NSString *autoUploadConfigString; // @synthesize autoUploadConfigString=_autoUploadConfigString;
- (void)dealloc;
- (unsigned long long)getAlreadyUploadCnt;
- (float)getCPUUsagePercent;
- (unsigned int)getCheckPeriodTime;
- (id)getConfigFilePath;
- (id)getDateStringFromDate:(id)arg1;
- (int)getDeviceUnder;
- (unsigned long long)getFrameDropLimit;
- (_Bool)getIsAutoReport;
- (_Bool)getIsMonitor;
- (_Bool)getMainThreadHandle;
- (unsigned long long)getMaxDailyReport;
- (unsigned long long)getOneTimeUpload;
- (unsigned int)getPerStackInterval;
- (unsigned long long)getReportEnv;
- (unsigned long long)getRunloopTimeOut;
- (id)init;
- (_Bool)isHitSample:(double)arg1;
- (_Bool)isIPXXExpired;
- (void)lazyInitiateConfigMgr;
- (void)loadConfig;
- (void)onIPXX:(id)arg1;
- (void)onIPXXReportBlockDump:(id)arg1;
- (void)onIPXXStrategy:(id)arg1;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (void)onStategy:(id)arg1;
- (_Bool)parseCommonNode:(struct XmlReaderNode_t *)arg1 toConfig:(id)arg2;
- (_Bool)saveAlreadyUploadCnt:(unsigned long long)arg1;
- (void)saveDumpReportConfig;
- (void)saveIsMonitorState:(_Bool)arg1;
- (void)saveMainThreadHandle:(_Bool)arg1 withFrameDropLimit:(unsigned long long)arg2 withPerStackInterval:(unsigned long long)arg3 withDeviceUnder:(int)arg4;
- (_Bool)updateAlreadyUploadCnt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

