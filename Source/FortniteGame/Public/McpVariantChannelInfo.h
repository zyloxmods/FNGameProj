#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CosmeticVariantInfo.h"
#include "McpVariantChannelInfo.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FMcpVariantChannelInfo : public FCosmeticVariantInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OwnedVariantTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemVariantIsUsedFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomData;
    
    FORTNITEGAME_API FMcpVariantChannelInfo();
};

