#pragma once
#include "CoreMinimal.h"
#include "AthenaStyleMissionData.h"
#include "ESpatialStyleCharacterUnlockPrerequisite.h"
#include "AthenaSpatialStyleCharacterData.generated.h"

class UAnimationAsset;
class UAthenaCharacterItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaSpatialStyleCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharacterItemDefinition* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaStyleMissionData> Styles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESpatialStyleCharacterUnlockPrerequisite> CharacterPrerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* CharacterIdleAnimation;
    
    FORTNITEUI_API FAthenaSpatialStyleCharacterData();
};

