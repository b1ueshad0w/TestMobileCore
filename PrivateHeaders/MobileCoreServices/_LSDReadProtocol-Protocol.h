//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class LSDocumentProxy, NSArray, NSSet, NSString, NSURL, NSUUID, _LSDiskUsage;

@protocol _LSDReadProtocol
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(NSSet *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)mapBundleIdentifiers:(NSSet *)arg1 orMachOUUIDs:(NSSet *)arg2 completionHandler:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (void)getResourceValuesForKeys:(NSSet *)arg1 URL:(NSURL *)arg2 preferredLocalizations:(NSArray *)arg3 completionHandler:(void (^)(NSDictionary *, NSSet *, NSError *))arg4;
- (void)getLocalizationDictionaryForTypeWithIdentifier:(NSString *)arg1 UUID:(NSUUID *)arg2 preferredLocalizations:(NSArray *)arg3 completionHandler:(void (^)(NSDictionary *))arg4;
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(void (^)(NSSet *, NSSet *, NSError *))arg1;
- (void)bindDocumentProxy:(LSDocumentProxy *)arg1 completionHandler:(void (^)(LSDocumentProxy *, NSError *))arg2;
- (void)resolveQueries:(NSSet *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(void (^)(NSUUID *, NSNumber *))arg1;
- (void)getDiskUsage:(_LSDiskUsage *)arg1 completionHandler:(void (^)(_LSDiskUsage *, NSError *))arg2;
- (void)getURLOverrideForURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)getLocalizedNameWithBundleType:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 bundleUUID:(NSString *)arg3 context:(NSString *)arg4 shortNameOnly:(_Bool)arg5 preferredLocalizations:(NSArray *)arg6 completionHandler:(void (^)(NSString *, NSError *))arg7;
- (void)getKernelPackageExtensionsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)getServerStoreWithCompletionHandler:(void (^)(_CSStoreXPCRepresentation *, NSURL *, NSError *))arg1;
- (void)getServerStatusWithCompletionHandler:(void (^)(unsigned int))arg1;
@end

