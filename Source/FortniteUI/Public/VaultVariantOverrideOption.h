#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VaultVariantOverrideOption.generated.h"

USTRUCT(BlueprintType)
struct FVaultVariantOverrideOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantChannelOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantTagOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomDataPayload;
    
    FORTNITEUI_API FVaultVariantOverrideOption();
};

