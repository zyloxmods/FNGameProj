#pragma once
#include "CoreMinimal.h"
#include "MinigameWidgetBase.h"
#include "FortCreativeBossInfo.generated.h"

class AFortPlayerState;
class AFortPlayerStateAthena;
class UCommonTextBlock;
class UCreativePlayerHealthInfoComponent;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeBossInfo : public UMinigameWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHealthbarIfLocalPlayerIsBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ShieldBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DBNOBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* BossPlayerState;
    
public:
    UFortCreativeBossInfo();
private:
    UFUNCTION(BlueprintCallable)
    void OnBossPlayerStateChanged(AFortPlayerStateAthena* PlayerState, UCreativePlayerHealthInfoComponent* HealthInfoComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleHitPointsChanged(AFortPlayerState* PlayerState, float Health, float HealthMax, float Shield, float ShieldMax);
    
};

