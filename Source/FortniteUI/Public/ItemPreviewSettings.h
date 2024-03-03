#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VaultVariantOverrideOption.h"
#include "ItemPreviewSettings.generated.h"

class UFortAccountItemDefinition;

USTRUCT(BlueprintType)
struct FItemPreviewSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* ItemToView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubslotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PreviewExcludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemVariantPreviewIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEtherealBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVaultVariantOverrideOption> VariantOverrides;
    
    FORTNITEUI_API FItemPreviewSettings();
};

