#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_SpawnLocationQuery.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_SpawnLocationQuery : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery LocationQuery;
    
public:
    AFortAthenaMutator_SpawnLocationQuery();
};

