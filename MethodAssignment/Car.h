//
//  Car.h
//  MethodAssignment
//
//  Created by tho dang on 2015-04-13.
//  Copyright (c) 2015 TD. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject

//Accessors
-(BOOL)isRunning;
-(void)setRunning:(BOOL)running;
-(NSString *)model;
-(void)setModel:(NSString *)model;

//Calculated values

-(double)maximumSpeed;
-(double)maximumSpeedUsingLocale:(NSLocale *)locale;

//Action Methods
-(void)startEngine;
-(void)driveForDistance:(id)theOrigin toDestination: (id)theDestination;
-(void)turnByAngle :(double)theAngle;
-(void)turnToAngle:(double)theAngle;

//Error handling methods

-(BOOL)loadPassenger:(id)aPassenger error:(NSError **)error;
//Constructor methods
-(id)initWithModel:(NSString *)amodel;
-(id)initWithModel:(NSString *)amodel mileage:(double)theMileage;
//Comparison methods
-(BOOL)isEqualToCar:(Car *)anotherCar;
-(Car *)fasterCar:(Car *)anotherCar;
-(Car *)slowerCar:(Car *)anotherCar;

//Factory methods
+(Car *)car;
+(Car *)carWithModel:(NSString *)aModel;
+(Car *)carWithModel:(NSString *)aModel mileage :(double)theMileage;
//Singletonn methods
+(Car *)shareCar;



@end
