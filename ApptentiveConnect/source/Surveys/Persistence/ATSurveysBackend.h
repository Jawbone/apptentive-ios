//
//  ATSurveysBackend.h
//  ApptentiveSurveys
//
//  Created by Andrew Wooster on 11/4/11.
//  Copyright (c) 2011 Apptentive. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ATSurvey;

extern NSString *const ATSurveyNewSurveyAvailableNotification;
extern NSString *const ATSurveySentNotification;

extern NSString *const ATSurveyIDKey;

@interface ATSurveysBackend : NSObject {
@private
	ATSurvey *currentSurvey;
}
+ (ATSurveysBackend *)sharedBackend;
- (ATSurvey *)currentSurvey;
- (void)resetSurvey;
- (void)setDidSendSurvey:(ATSurvey *)survey;
- (BOOL)hasSurveyAvailableWithNoTags;
- (BOOL)hasSurveyAvailableWithTags:(NSSet *)tags;
@end

@interface ATSurveysBackend (Private)
- (BOOL)surveyAlreadySubmitted:(ATSurvey *)survey;
@end
