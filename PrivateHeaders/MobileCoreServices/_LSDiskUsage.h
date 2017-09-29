//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface _LSDiskUsage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSMutableDictionary *_usage;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)supportsSecureCoding;
+ (id)ODRUsageForBundleIdentifier:(id)arg1 error:(id *)arg2;
+ (id)ODRConnection;
+ (id)dynamicUsageForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
@property(readonly, nonatomic) NSNumber *onDemandResourcesUsage; // @dynamic onDemandResourcesUsage;
@property(readonly, nonatomic) NSNumber *dynamicUsage; // @dynamic dynamicUsage;
@property(readonly, nonatomic) NSNumber *staticUsage; // @dynamic staticUsage;
- (void)dealloc;
- (id)init;
- (_Bool)_fetchWithXPCConnection:(id)arg1 error:(id *)arg2;
- (id)_initWithBundleIdentifier:(id)arg1 alreadyKnownUsage:(id)arg2;
- (_Bool)fetchClientSideWithError:(id *)arg1;
- (_Bool)fetchServerSideWithError:(id *)arg1;

@end

