/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSError;

@interface SUPlayerStatus : NSObject <NSCopying> {
    double _currentTime;
    double _duration;
    NSError *_error;
    int _state;
}

@property double currentTime;
@property double duration;
@property int playerState;
@property(retain) NSError * error;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)error;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (void)setPlayerState:(int)arg1;
- (int)playerState;
- (void)setError:(id)arg1;

@end