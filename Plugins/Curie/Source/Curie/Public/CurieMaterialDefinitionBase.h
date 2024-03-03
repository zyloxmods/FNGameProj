#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "CurieMaterialDefinitionBase.generated.h"

USTRUCT(BlueprintType)
struct CURIE_API FCurieMaterialDefinitionBase : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ElementalImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ElementAttachmentImmunities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ElementsAllowedWhenCannotBeDamaged;
    
public:
    FCurieMaterialDefinitionBase();
};

