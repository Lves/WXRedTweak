//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface WAWebViewMenuNavBarProperties : NSObject
{
    _Bool _rightButtonHidden;
    _Bool _loading;
    int _navMode;
    int _statusBarType;
    long long _menuState;
    NSString *_navTitle;
    UIColor *_navBarColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) long long menuState; // @synthesize menuState=_menuState;
@property(retain, nonatomic) UIColor *navBarColor; // @synthesize navBarColor=_navBarColor;
@property(nonatomic) int navMode; // @synthesize navMode=_navMode;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(nonatomic) _Bool rightButtonHidden; // @synthesize rightButtonHidden=_rightButtonHidden;
@property(nonatomic) int statusBarType; // @synthesize statusBarType=_statusBarType;

@end

