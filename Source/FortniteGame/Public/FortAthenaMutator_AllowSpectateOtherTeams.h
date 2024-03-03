#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_AllowSpectateOtherTeams.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_AllowSpectateOtherTeams : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowSpectateOtherTeams;
    
public:
    AFortAthenaMutator_AllowSpectateOtherTeams();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

