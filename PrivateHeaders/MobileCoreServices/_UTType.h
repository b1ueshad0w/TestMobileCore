//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileCoreServices/_LSQueryResult.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface _UTType : _LSQueryResult <NSSecureCoding, NSCopying>
{
}

+ (struct __CFArray *)_copyIdentifiersWithQuery:(id)arg1;
+ (_Bool)_isDeclaration:(id)arg1 equalToDeclaration:(id)arg2;
+ (id)_localizationDictionaryForTypeWithIdentifier:(id)arg1 UUID:(id)arg2 preferredLocalizations:(id)arg3;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURL *_iconURL; // @dynamic _iconURL;
@property(readonly, nonatomic) NSSet *_pedigree; // @dynamic _pedigree;
@property(readonly, nonatomic) NSString *_kernelExtensionName; // @dynamic _kernelExtensionName;
@property(readonly, nonatomic) NSDictionary *_localizedDescriptionDictionary; // @dynamic _localizedDescriptionDictionary;
@property(readonly, nonatomic) NSString *_unlocalizedDescription; // @dynamic _unlocalizedDescription;
@property(readonly, nonatomic, getter=_isAppleInternal) _Bool _appleInternal; // @dynamic _appleInternal;
@property(readonly, nonatomic, getter=_isPublic) _Bool _public; // @dynamic _public;
@property(readonly, nonatomic, getter=_isActive) _Bool _active; // @dynamic _active;
@property(readonly, nonatomic) NSArray *parentIdentifiers; // @dynamic parentIdentifiers;
- (_Bool)conformsToTypeIdentifier:(id)arg1;
- (_Bool)conformsToType:(id)arg1;
@property(readonly, nonatomic) NSURL *referenceURL; // @dynamic referenceURL;
@property(readonly, nonatomic) NSDictionary *tagSpecification; // @dynamic tagSpecification;
@property(readonly, nonatomic, getter=isDeclared) _Bool declared; // @dynamic declared;
@property(readonly, nonatomic, getter=isDynamic) _Bool dynamic; // @dynamic dynamic;
@property(readonly, nonatomic) NSDictionary *declaration; // @dynamic declaration;
@property(readonly, nonatomic) NSURL *declaringBundleURL; // @dynamic declaringBundleURL;
@property(readonly, nonatomic) NSString *localizedDescription; // @dynamic localizedDescription;
@property(readonly, nonatomic) NSNumber *version; // @dynamic version;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)_localizedDescriptionWithPreferredLocalizations:(id)arg1;

@end

