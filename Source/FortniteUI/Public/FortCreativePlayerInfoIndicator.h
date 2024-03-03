#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EFortMinigameState.h"
#include "EPlayerIndicatorDisplayMode.h"
#include "FortActorIndicatorWidget.h"
#include "FortCreativePlayerInfoIndicator.generated.h"

class AFortMinigame;
class AFortPlayerState;
class AFortPlayerStateAthena;
class AFortVolume;
class APlayerState;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativePlayerInfoIndicator : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationWhileDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationWhileAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScreenSpaceOffsetToScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortMinigameState> ValidMinigameTypesToShowIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepTargetUntilNewValidTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ShieldBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DBNOBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* TrackedPlayerState;
    
public:
    UFortCreativePlayerInfoIndicator();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerExitedVolume(APlayerState* Client, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnteredVolume(APlayerState* Client, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);
    
    UFUNCTION(BlueprintCallable)
    void HandleIndicatorRulesChanged(EPlayerIndicatorDisplayMode DisplayMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleHitPointsChanged(AFortPlayerState* PlayerState, float Health, float HealthMax, float Shield, float ShieldMax);
    
};

