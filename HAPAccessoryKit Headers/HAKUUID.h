/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSUUID;

@interface HAKUUID : NSObject <NSCopying, NSCoding>
{
    unsigned long long _type;
    NSUUID *_uuid;
}

+ (BOOL)isValidUUIDString:(id)arg1;
+ (id)cbUUIDMapping;
+ (id)UUIDWithUUID:(id)arg1;
+ (id)UUIDWithUUIDString:(id)arg1;
+ (id)nameMapping;
@property(retain, nonatomic, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cbUUID;
- (id)name;
- (id)shortenedUUIDString;
- (id)UUIDString;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCBUUID:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)init;
- (id)truncatedUUIDString;

@end

