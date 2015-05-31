/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "HAKValueConstraints.h"

@class NSNumber;

@interface HAKStringConstraints : HAKValueConstraints
{
    NSNumber *_maximumLength;
}

@property(copy, nonatomic) NSNumber *maximumLength; // @synthesize maximumLength=_maximumLength;

- (id)initWithMaximumLength:(id)arg1;

- (BOOL)validateValue:(id)arg1;
- (id)attributes;

@end
