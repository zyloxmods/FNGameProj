#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "EFortDonutIdleGameObject.h"
#include "OnDonutDayNightCycleChangedDelegate.h"
#include "OnDonutIdleGameEndScoreDelegate.h"
#include "OnDonutIdleGameScoreChangedDelegate.h"
#include "DonutChallengeIdleGame.generated.h"

class UCommonButton;
class UCurveFloat;
class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UDonutChallengeIdleGame : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutIdleGameScoreChanged OnNewHighScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutIdleGameScoreChanged OnDistanceScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutIdleGameScoreChanged OnSpeedScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutIdleGameScoreChanged OnStyleScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutIdleGameEndScore OnEndMatchScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDonutDayNightCycleChanged OnDayNightCycleChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BoundsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayNightCycleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTopSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BumpyRideSpeedReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D PlayerCollisionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D PlayerCollisionSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNumLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObjectSpawnPlacementRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfTreeSpawnAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfRockSpawnAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfBigRockSpawnAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumOfJumpPadSpawnAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve_BonusSpawn_Trees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve_BonusSpawn_SmallBumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve_BonusSpawn_Bumps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve_BonusSpawn_JumpPads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Param_Player_Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Param_Player_FacingLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PlayerBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TreeBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RockBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BigRockBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush JumpPadBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TorchBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MonsterBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ChimiBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ArmBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_Jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_MediumJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_SuperJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Anim_BumpyRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_MobileInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_MobileInput_Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Jump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MobileJump;
    
public:
    UDonutChallengeIdleGame();
private:
    UFUNCTION(BlueprintCallable)
    void TryJump();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartGame();
    
private:
    UFUNCTION(BlueprintCallable)
    void EndSuperJump();
    
    UFUNCTION(BlueprintCallable)
    void EndJump();
    
    UFUNCTION(BlueprintCallable)
    void EndBumpyRide();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugBPFloat(float InFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateStyle(int32 NewStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateSpeed(int32 NewSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateDistance(int32 NewDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPShowHighScore(int32 inNewHighScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnSpeedUpdated(int32 NewCurSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnNextLevelReached();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnMonsterNearChanged(bool bIsNearLevelMonster);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnJump();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnGameInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnFailedJumpPress();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnFacingDirectionChanged(bool bIsLeftFacing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnCrash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnCollision(EFortDonutIdleGameObject ObjectType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPGameOver();
    
};

