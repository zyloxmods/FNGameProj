#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaViewStreamingReplayModalBase.generated.h"

class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaViewStreamingReplayModalBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_SessionSearch;
    
public:
    UAthenaViewStreamingReplayModalBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayStreamingDSSReplay(const FString& GameSessionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidGameSessionId(const FString& GameSessionId) const;
    
};

