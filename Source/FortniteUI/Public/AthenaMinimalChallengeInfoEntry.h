#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaMinimalChallengeInfoEntry.generated.h"

class UAthenaChallengeProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMinimalChallengeInfoEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_ObjectivesComplete;
    
public:
    UAthenaMinimalChallengeInfoEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeInfoSet(bool bIsInProgress);
    
};

