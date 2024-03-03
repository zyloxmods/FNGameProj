#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ShouldDestroyActorsOnPlacement.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_ShouldDestroyActorsOnPlacement : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldDestroyOnPlacement;
    
public:
    AFortAthenaMutator_ShouldDestroyActorsOnPlacement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

