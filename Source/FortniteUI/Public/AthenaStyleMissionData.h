#pragma once
#include "CoreMinimal.h"
#include "AthenaStyleMissionData.generated.h"

class UAnimationAsset;
class UFortQuestItemDefinition;
class UFortVariantTokenType;

USTRUCT(BlueprintType)
struct FAthenaStyleMissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortVariantTokenType* StyleDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortVariantTokenType*> OptionalAdditionalStyleDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* OverrideIdleAnimation;
    
    FORTNITEUI_API FAthenaStyleMissionData();
};

