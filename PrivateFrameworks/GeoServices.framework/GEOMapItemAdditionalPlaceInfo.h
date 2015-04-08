/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, GEOPlace, NSString;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {
    GEOPlace *_place;
}

@property(readonly) double areaInMeters;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) GEOMapRegion * mapRegion;
@property(readonly) NSString * name;
@property(readonly) int placeType;

- (double)areaInMeters;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;
- (id)initWithPlace:(id)arg1;
- (id)mapRegion;
- (id)name;
- (int)placeType;

@end