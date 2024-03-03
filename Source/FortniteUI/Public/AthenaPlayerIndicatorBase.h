#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETeamMemberState.h"
#include "FortActorIndicatorWidget.h"
#include "AthenaPlayerIndicatorBase.generated.h"

class AFortPlayerStateAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPlayerIndicatorBase : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinMaxSizeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinMaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarAwayScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationWhenDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocationWhenNotDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UnscaledScreenSpaceRelativeOffset;
    
public:
    UAthenaPlayerIndicatorBase();
private:
    UFUNCTION(BlueprintCallable)
    void HandleCurrentPawnChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleTeamMemberStateChanged(ETeamMemberState TeamMemberState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleTalkingStateChanged(bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandlePlayerStateSet(AFortPlayerStateAthena* PlayerStateAthena);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandlePlayerNameReplicated(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandlePinColorChanged(const FLinearColor& PinColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleDBNOStateChanged(bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHandleBeingRevivedStateChanged(bool bIsBeingRevived, float MaxReviveTime);
    
};

