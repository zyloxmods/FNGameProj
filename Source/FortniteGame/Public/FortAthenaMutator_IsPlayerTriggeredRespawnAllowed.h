#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_IsPlayerTriggeredRespawnAllowed.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_IsPlayerTriggeredRespawnAllowed : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsPlayerTriggeredRespawnAllowed;
    
public:
    AFortAthenaMutator_IsPlayerTriggeredRespawnAllowed();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

