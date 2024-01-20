#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EGameReadiness.h"
#include "FortTeamMemberEntryBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamMemberEntryBase : public UCommonButton {
    GENERATED_BODY()
public:
    UFortTeamMemberEntryBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMemberGameReadinessChanged(EGameReadiness ReadyStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentMemberLocal() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTeamMemberEstablished(bool bHasValidMember);
    
};

