#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAbilityTagRelationship.h"
#include "FortAbilityTagRelationshipMapping.generated.h"

UCLASS(Blueprintable)
class UFortAbilityTagRelationshipMapping : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilityTagRelationship> AbilityTagRelationships;
    
public:
    UFortAbilityTagRelationshipMapping();
};

