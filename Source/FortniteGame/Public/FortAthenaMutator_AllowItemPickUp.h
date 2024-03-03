#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_AllowItemPickUp.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_AllowItemPickUp : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowItemPickUp;
    
public:
    AFortAthenaMutator_AllowItemPickUp();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

