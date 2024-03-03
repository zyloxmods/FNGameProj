#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortVoteType.h"
#include "FortMissionActivationWidgetPanel.generated.h"

class UFortMissionActivationInfo;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMissionActivationWidgetPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMissionActivationInfo* InfoObject;
    
public:
    UFortMissionActivationWidgetPanel();
    UFUNCTION(BlueprintCallable)
    void SetInfoObject(UFortMissionActivationInfo* NewInfoObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteUpdatedBP(EFortVoteType VoteType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMultiplayerChangedBP(bool bIsMultiplayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32 VoteResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InfoObjectUpdated();
    
};

