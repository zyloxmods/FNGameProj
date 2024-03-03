#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaChallengeRewardTrackEntry.generated.h"

class UAthenaChallengeRewardDisplayEntry;
class UFortItemDefinition;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaChallengeRewardTrackEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionRewardParamName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> RewardToRepresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BundleRewardIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ConnectorLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ConnectorRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeRewardDisplayEntry* MissionReward;
    
public:
    UAthenaChallengeRewardTrackEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StyleChange(bool bViewingPrestige);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetToDefaultState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLastNodeInTrack(bool bIsLast);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAsCurrentPreviewItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NextRewardToEarn(bool bNext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompletedNextNode(bool bAnimate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompletedCurrentNode(bool bAnimate, bool LastReward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearPreviewSelection();
    
};

