//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MobileCoreServices/_LSAppLinkPlugIn.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn
{
    _Bool _usesDetailsDictionary;
    _Bool _requiresApproval;
    NSString *_SWCServiceName;
}

@property _Bool requiresApproval; // @synthesize requiresApproval=_requiresApproval;
@property _Bool usesDetailsDictionary; // @synthesize usesDetailsDictionary=_usesDetailsDictionary;
@property(copy) NSString *SWCServiceName; // @synthesize SWCServiceName=_SWCServiceName;
- (void)getAppLinkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)callingBundleIdentifier;
- (_Bool)getApplicationProxy:(id *)arg1 forSWCResults:(id)arg2;
- (_Bool)appHasApproval:(id)arg1;
- (void)dealloc;
- (id)init;

@end

