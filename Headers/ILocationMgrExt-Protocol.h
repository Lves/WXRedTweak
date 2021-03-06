//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CLHeading, CLLocation, NSDictionary, NSError;

@protocol ILocationMgrExt

@optional
- (_Bool)isUpdatingGPSLocation:(unsigned long long)arg1;
- (void)onDidFindAddress:(NSDictionary *)arg1 forTag:(unsigned long long)arg2;
- (void)onGPSAccurateLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationChanged:(CLLocation *)arg1 withTag:(unsigned long long)arg2;
- (void)onGPSLocationError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingChanged:(CLHeading *)arg1 withTag:(unsigned long long)arg2;
- (void)onHeadingError:(int)arg1 withTag:(unsigned long long)arg2;
- (void)onMapLocationChanged:(CLLocation *)arg1 withTag:(long long)arg2;
- (void)onMapLocationError:(NSError *)arg1 withTag:(long long)arg2;
@end

