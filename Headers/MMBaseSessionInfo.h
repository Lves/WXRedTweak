//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BaseSessionInfo.h"
#import "WCTTableCoding.h"

@class CBaseContact, CMessageWrap, NSString, PBCMessageWrap;

@interface MMBaseSessionInfo : NSObject <WCTTableCoding, BaseSessionInfo>
{
    NSString *sessionId;
    unsigned int unreadCount;
    unsigned int lastMsgUpdateTime;
    NSString *draftMsg;
    unsigned int draftMsgTime;
    unsigned int sessionFlag;
    PBCMessageWrap *pbLastMessage;
    unsigned int outUnreadCount;
    unsigned int outUnreadMsgTime;
    CBaseContact *contact;
    CMessageWrap *lastMessage;
    unsigned int sessionTopTime;
    unsigned int sessionUnTopTime;
    NSString *_atUserList;
}

+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (CDUnknownBlockType)PropertyNamed;
+ (id)baseSessionInfoWithUsrName:(id)arg1;
+ (id)baseSessionInfoWithUsrName:(id)arg1 contact:(id)arg2 lastMessage:(id)arg3;
+ (const struct WCTProperty *)draftMsg;
+ (const struct WCTProperty *)draftMsgTime;
+ (const struct WCTProperty *)lastMsgUpdateTime;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)outUnreadCount;
+ (const struct WCTProperty *)outUnreadMsgTime;
+ (const struct WCTProperty *)pbLastMessage;
+ (const struct WCTProperty *)sessionFlag;
+ (const struct WCTProperty *)sessionId;
+ (const struct WCTProperty *)sessionTopTime;
+ (const struct WCTProperty *)sessionUnTopTime;
+ (const struct WCTProperty *)unreadCount;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *atUserList; // @synthesize atUserList=_atUserList;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) CBaseContact *contact; // @synthesize contact;
- (void)copyFieldFromSessionInfo:(id)arg1;
@property(retain, nonatomic) NSString *draftMsg; // @synthesize draftMsg;
@property(nonatomic) unsigned int draftMsgTime; // @synthesize draftMsgTime;
- (id)genContact;
- (id)genLastMessage;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSessionInfo:(id)arg1;
@property(retain, nonatomic) CMessageWrap *lastMessage; // @synthesize lastMessage;
@property(nonatomic) unsigned int lastMsgUpdateTime; // @synthesize lastMsgUpdateTime;
@property(nonatomic) unsigned int outUnreadCount; // @synthesize outUnreadCount;
@property(nonatomic) unsigned int outUnreadMsgTime; // @synthesize outUnreadMsgTime;
@property(retain, nonatomic) PBCMessageWrap *pbLastMessage; // @synthesize pbLastMessage;
@property(nonatomic) unsigned int sessionFlag; // @synthesize sessionFlag;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(nonatomic) unsigned int sessionTopTime; // @synthesize sessionTopTime;
@property(nonatomic) unsigned int sessionUnTopTime; // @synthesize sessionUnTopTime;
- (void)setContact:(id)arg1;
@property(nonatomic) _Bool showRedDotOuter;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount;
- (void)updateContact;
- (void)updateDraftAndTime:(id)arg1 Time:(unsigned int)arg2;
- (void)updateLastMessage;
- (void)updateSessionInfo;
- (void)updateUnreadCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

