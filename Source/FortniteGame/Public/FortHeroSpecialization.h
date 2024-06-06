#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "EFortAlteration.h"
#include "FortSpecializationSlot.h"
#include "HeroSpecializationAttributeRequirement.h"
#include "FortHeroSpecialization.generated.h"

class UCustomCharacterPart;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHeroSpecialization : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSpecializationSlot> SpecializationSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true, AssetBundles="Server"))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAlteration::Type> AlterationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeroSpecializationAttributeRequirement> AttributeRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceShowHeadAccessory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceShowBackpack: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CardIconBrush[3];
    
public:
    UFortHeroSpecialization();
    friend class UAthenaCharacterItemDefinition;
    friend class UFortHeroType;
};

