//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol EnterpriseSearchDataControllerDelegate <NSObject>

@optional
- (void)onRemoteSearchMoreCompleted:(NSString *)arg1 range:(unsigned int)arg2 result:(NSDictionary *)arg3;
- (_Bool)shouldProcessRemoteSearchResp:(NSString *)arg1 range:(unsigned int)arg2;
@end

