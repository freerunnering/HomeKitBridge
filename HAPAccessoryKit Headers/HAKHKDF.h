/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface HAKHKDF : NSObject
{
    unsigned long long _type;
    NSData *_pseudoRandomKey;
}

+ (id)hashWithType:(unsigned long long)arg1 key:(id)arg2 salt:(id)arg3 info:(id)arg4 length:(unsigned long long)arg5;
@property(retain, nonatomic) NSData *pseudoRandomKey; // @synthesize pseudoRandomKey=_pseudoRandomKey;

- (id)expandWithInfo:(id)arg1 length:(unsigned long long)arg2;
- (void)extractWithSalt:(id)arg1 inputKey:(id)arg2;
- (unsigned int)hmacAlgorithm;
- (unsigned long long)digestLength;
- (id)initWithHKDFType:(unsigned long long)arg1;
- (id)init;

@end

