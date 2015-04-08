/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID, NSString;

@interface CKDiscoveredUserInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_firstName;
    NSString *_lastName;
    void *_oldDisplayContact;
    CKRecordID *_userRecordID;
}

@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(readonly) void* oldDisplayContact;
@property(copy) CKRecordID * userRecordID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1 firstName:(id)arg2 lastName:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (void*)oldDisplayContact;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;

@end