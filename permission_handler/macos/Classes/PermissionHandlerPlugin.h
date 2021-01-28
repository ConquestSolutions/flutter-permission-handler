#import <FlutterMacOS/FlutterMacOS.h>
#import "PermissionManager.h"

@interface PermissionHandlerPlugin : NSObject<FlutterPlugin>
- (instancetype)initWithPermissionManager:(PermissionManager *)permissionManager;
@end
