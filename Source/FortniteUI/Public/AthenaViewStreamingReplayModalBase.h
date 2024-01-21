#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaViewStreamingReplayModalBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaViewStreamingReplayModalBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaViewStreamingReplayModalBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayStreamingDSSReplay(const FString& GameSessionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidGameSessionId(const FString& GameSessionId) const;
    
};

