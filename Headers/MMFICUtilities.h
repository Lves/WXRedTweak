//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMFICUtilities : NSObject
{
}

+ (id)DirectoryPath;
+ (unsigned long long)FICByteAlign:(unsigned long long)arg1 alignment:(unsigned long long)arg2;
+ (unsigned long long)FICByteAlignForCoreAnimation:(unsigned long long)arg1;
+ (id)FICStringWithUUIDBytes:(CDStruct_bd2f613f)arg1;
+ (CDStruct_bd2f613f)FICUUIDBytesFromMD5HashOfString:(id)arg1;
+ (CDStruct_bd2f613f)FICUUIDBytesWithString:(id)arg1;
+ (int)PageSize;

@end

