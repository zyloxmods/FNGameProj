#pragma once
#include "CoreMinimal.h"
#include "EGameReadiness.h"
#include "FortBasicTeamMemberEntry.h"
#include "FortTeamMemberPedestalNameplate.generated.h"

class UCommonTextBlock;
class UFortPlayerPowerRating;
class UMatchmakingInputIndicatorBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamMemberPedestalNameplate : public UFortBasicTeamMemberEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ReadyStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMatchmakingInputIndicatorBase* InputIndicator_ActiveInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerPowerRating* PowerRating_CampaignPower;
    
public:
    UFortTeamMemberPedestalNameplate();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyStatusChanged(EGameReadiness GameReadiness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayReadyAudio(bool bIsReadyForMatchmaking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPedestalSelectedChanged(bool bIsSelected);
    
};

