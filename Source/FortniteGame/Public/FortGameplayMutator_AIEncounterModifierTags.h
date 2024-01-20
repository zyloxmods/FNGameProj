#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortMissionType.h"
#include "FortEncounterMutatorReplacedTag.h"
#include "FortGameplayMutator.h"
#include "FortGameplayMutator_AIEncounterModifierTags.generated.h"

UCLASS(Blueprintable)
class AFortGameplayMutator_AIEncounterModifierTags : public AFortGameplayMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortEncounterMutatorReplacedTag> TagsToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortMissionType::Type> RequiredEncounterAssociatedMissionType;
    
public:
    AFortGameplayMutator_AIEncounterModifierTags();
};

